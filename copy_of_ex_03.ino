// Definindo os pinos para o LED e o botão
const int pinoLED = 3;
const int pinoLED1 = 4;
const int pinoLED2 = 5;
const int pinoLED3 = 6;
const int pinoLED4 = 7;
const int pinoLED5 = 8;
const int pinoLED6 = 9;
const int pinoBotao = 2;

void setup() {
  // Configurando o pino do LED como saída
  pinMode(pinoLED, OUTPUT);
  pinMode(pinoLED1, OUTPUT);
  pinMode(pinoLED2, OUTPUT);
  pinMode(pinoLED3, OUTPUT);
  pinMode(pinoLED4, OUTPUT);
  pinMode(pinoLED5, OUTPUT);
  pinMode(pinoLED6, OUTPUT);
  
  

  // Configurando o pino do botão como entrada
  pinMode(pinoBotao, INPUT);
}

void loop() {
  // Verificando se o botão foi pressionado
  if (digitalRead(pinoBotao) == HIGH) {
    // Se o botão foi pressionado, acende o LED
    digitalWrite(pinoLED, HIGH);
    digitalWrite(pinoLED1, HIGH);
    digitalWrite(pinoLED2, HIGH);
    digitalWrite(pinoLED3, HIGH);
    digitalWrite(pinoLED4, HIGH);
    digitalWrite(pinoLED5, HIGH);
    digitalWrite(pinoLED6, HIGH);
    
    
  } else {
    // Se o botão está liberado, apaga o LED
    digitalWrite(pinoLED, LOW);
    digitalWrite(pinoLED1, LOW);
    digitalWrite(pinoLED2, LOW);
    digitalWrite(pinoLED3, LOW);
    digitalWrite(pinoLED4, LOW);
    digitalWrite(pinoLED5, LOW);
    digitalWrite(pinoLED6, LOW);
  }
}
