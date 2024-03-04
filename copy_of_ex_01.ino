const int botaoPin = 6;  // Pino digital para o botão
const int ledPin = 4;   // Pino digital para o LED

int estadoBotao;         // Variável para armazenar o estado do botão
int ultimoEstadoBotao = LOW;  // Variável para armazenar o último estado do botão
int estadoLED = HIGH;      // Variável para armazenar o estado do LED

void setup() {
  pinMode(botaoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Lê o estado atual do botão (LOW quando não pressionado, HIGH quando pressionado)
  estadoBotao = digitalRead(botaoPin);

  // Verifica se houve uma transição no estado do botão
  if (estadoBotao != ultimoEstadoBotao) {
    // Se o botão foi pressionado, inverte o estado do LED
    if (estadoBotao == HIGH) {
      estadoLED = !estadoLED;
      digitalWrite(ledPin, estadoLED);
    }   
    
  }
}
