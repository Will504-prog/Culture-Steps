README-
Tutorial Upload:

O código começa com a inclusão de diversas bibliotecas necessárias para controlar o teclado, 
o display LCD, o servo motor e a comunicação serial com o módulo RFID.

Para usar as bibliotecas no seu código, você precisa instalá-las no ambiente de desenvolvimento do Arduino (IDE Arduino).

Passo a Passo para Instalar Bibliotecas no Arduino:

-Se você ainda não tiver o Arduino IDE instalado, pode baixá-lo do site oficial: https://www.arduino.cc/en/software,
apos isso abra o gerenciador de bibliotecas e vá para o menu "Sketch" (ou "Esboço" em português),depois
selecione "Incluir Biblioteca" e depois "Gerenciar Bibliotecas...".
Alternativamente, você pode clicar diretamente no ícone de bibliotecas (um ícone de livro) no canto superior direito da IDE.

-Agora você pode buscar e instalar as bibliotecas necessárias para o seu código. Veja alguns exemplos:
*SoftwareSerial:

-No campo de pesquisa da janela do Gerenciador de Bibliotecas, digite "SoftwareSerial".
-Quando ela aparecer na lista, clique em "Instalar".

*KeyPad(Teclado):
-No campo de pesquina do Arduino,procure por "Keypad",apos isso clique em "Instalar" ao lado da biblioteca "Keypad" (de Mark Stanley e Alexander Brevig).

*LiquidCrystal_I2C:

Pesquise por "LiquidCrystal_I2C".
Você verá várias versões dessa biblioteca. Uma muito usada é "LiquidCrystal I2C" de Frank de Brabander. Clique em "Instalar".

*Wire*:

A biblioteca Wire já é pré-instalada com a IDE do Arduino, pois ela é usada para comunicação I2C, que é necessária para o LCD. Então você não precisará instalá-la separadamente.

*Servo:

Pesquise por "Servo".
Clique em "Instalar" na biblioteca "Servo" de Michael Margolis.

*WIFI.h

-Abra o Arduino IDE.
Vá até "Arquivo" > "Preferências".
Na seção "URLs adicionais para gerenciadores de placas", adicione o link do ESP8266:
(http://arduino.esp8266.com/stable/package_esp8266com_index.json)
*Clique em OK para fechar a janela de preferências.
Vá até "Ferramentas" > "Placa" > "Gerenciador de Placas...".
*No campo de pesquisa, digite "esp8266".
*Encontre "esp8266 by ESP8266 Community" e clique em "Instalar".
*Após a instalação, selecione a placa ESP8266 que você está usando em "Ferramentas" > "Placa".
Com o ESP8266 core instalado, a biblioteca WiFi.h estará automaticamente disponível, pois faz parte do core.

Para ESP32:
 Abra o Arduino IDE.
 Vá até "Arquivo" > "Preferências".
 Na seção "URLs adicionais para gerenciadores de placas", adicione o link do ESP32:
 https://dl.espressif.com/dl/package_esp32_index.json
 Clique em OK para fechar a janela de preferências.
 Vá até "Ferramentas" > "Placa" > "Gerenciador de Placas...".
 No campo de pesquisa, digite "esp32".
 Encontre "esp32 by Espressif Systems" e clique em "Instalar".
 Após a instalação, selecione a placa ESP32 que você está usando em "Ferramentas" > "Placa".
 extra

Após a instalação, você pode verificar se as bibliotecas foram instaladas corretamente indo em "Sketch" -> "Incluir Biblioteca" e procurando pelas bibliotecas na lista. Elas devem aparecer lá, e você pode incluí-las em seu código automaticamente.

Brincadeira:

Bussola-O usuário no começo da brincadeira recebe uma bussola com um sistema
de detecção de quente ou frio,onde se o prototipo do bau estiver muito distante
ele vai ficar azul,caso esteja uma distância parcialmente perto ou quase perto,
a bussóla vai ficar verde, e se muito perto,vermelho

Bau-O usuário aproxima um sensor perto do bau para ligar uma tela,
nessa tela vai pedir uma senha para abrir o bau,a senha que o usuario
vai ter visto em sala de aula,quando acertar a senha , o usuario obtem 
uma parte do mosaico do recifê




