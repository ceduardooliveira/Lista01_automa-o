const int pinoLED = 4;
const int pinoBotao = 6;

void setup() {
  
  pinMode(pinoLED, OUTPUT);

  
  pinMode(pinoBotao, INPUT);
}

void loop() {
  // Verificando se o botão foi pressionado
  if (digitalRead(pinoBotao) == HIGH) {
    // Piscar o LED com intervalo variável (efeito de "respiração")
    for (int i = 0; i < 256; ++i) {
      analogWrite(pinoLED, i);  // Ajusta a intensidade luminosa do LED
      delay(3);  // Pequeno atraso para controlar a velocidade do efeito
    }

    for (int i = 255; i >= 0; --i) {
      analogWrite(pinoLED, i);
      delay(3);
    }
  }
}
