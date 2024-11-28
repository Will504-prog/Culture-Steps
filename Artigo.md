O projeto Cultural Steps consiste emm uma caça ao tesouro
onde os participantes precisam procurar um bau com uma bussola.

Bussola:
-Uma Esp32
-1 LED RGB 
-Uma Bateria de 9V-12V
A partir da conexão entre a Esp,a bateria e o WI-FI,a Esp32 mede
a intensidade dela e determinada quantidade de tempo e essa leitura 
vai ser usada para medir a distância entre o dispositivo e o bau.
Cor LED;
Sinal Forte:Vemelho
Sinal Mediano:Verde
Sinal Fraco:Azul
-------------------
Bau:
-Tela
*RFID
-Teclado
-------------------
A tela vai exibir uma pergunta de acordo com a leitura do RFID
Mas o que seria o RFID?
O RFID é uma placa de leitura de radio que quando é
aproximada a um outro sensor de radio é  emitido um sinal 
da identidade do mesmo,
então o display liga somente quando o RFID recebe o sinal do outro sensor 
com isso tambem tem o teclado junto ao display,onde o usuário precisar colocar uma
senha para abrir um baú
Se a pergunta for inserida corretamente:
o servo motor vai girar e permitir pegar o prêmio dentro do baú
Caso a senha não seja colocada corretamente:
o servo motor não vai girar

Como Construir:
Para a Bussola: 
1 Esp 32
Jumpers
1 LED RGB
1 Protoborad

Para o Teclado:
1 Servo motor
1 Display 

