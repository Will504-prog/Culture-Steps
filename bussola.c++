#include <SPI.h>
#include <MFRC522.h>
#include <SoftwareSerial.h>
#include <avr/wdt.h>

#define SS_PIN 10
#define RST_PIN 5
#define RX_PIN 0
#define TX_PIN 1
SoftwareSerial masterSerial(RX_PIN, TX_PIN);

MFRC522 rfid(SS_PIN, RST_PIN);

void setup() {
  SPI.begin();
  rfid.PCD_Init();
  masterSerial.begin(9600);
  masterSerial.println("Escravo Pronto");
}

void loop() {
  if (masterSerial.available()) {
    String mensagem = masterSerial.readString();
    if (mensagem == "RESET") {
      masterSerial.println("Reiniciando o Escravo...");
      resetArduino();  // Função para reiniciar o Arduino
    }
  }

  // Leitura de RFID
  if (rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial()) {
    String uid = "";
    for (int i = 0; i < rfid.uid.size; i++) {
      uid += String(rfid.uid.uidByte[i], HEX);
    }
    masterSerial.println("RFID_OK " + uid);  // Envia UID para o mestre
    delay(2000); // Previne leituras rápidas
    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
  }
}

void resetArduino() {
  wdt_enable(WDTO_1S);  // Habilita o WDT para 1 segundo
  while (1) {
    // Aguardar o Watchdog Timer disparar e reiniciar o Arduino
  }
}
