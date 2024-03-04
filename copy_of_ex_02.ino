const int pinoVerde = 5;
const int pinoAmarelo = 4;
const int pinoVermelho = 3;

void setup() {
  // Configurando os pinos como saída, so acontece uma vez.
  pinMode(pinoVerde, OUTPUT);
  pinMode(pinoAmarelo, OUTPUT);
  pinMode(pinoVermelho, OUTPUT);
}

void loop() {
  // Acende o LED verde (sinal para seguir em frente)
  digitalWrite(pinoVerde, HIGH);
  delay(5000);  // Aguarda 5 segundos

  // Desliga o LED verde e acende o LED amarelo (sinal de precaução)
  digitalWrite(pinoVerde, LOW);
  digitalWrite(pinoAmarelo, HIGH);
  delay(2000);  // Aguarda 2 segundos

  // Desliga o LED amarelo e acende o LED vermelho (sinal para parar)
  digitalWrite(pinoAmarelo, LOW);
  digitalWrite(pinoVermelho, HIGH);
  delay(5000);  // Aguarda 5 segundos

  // Reinicia o ciclo, desligando o LED vermelho
  digitalWrite(pinoVermelho, LOW);
}
