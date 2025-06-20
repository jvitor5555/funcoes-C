int numeroSecreto;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  numeroSecreto = random(1, 101);
  Serial.println("Jogo iniciado! Tente adivinhar o número entre 1 e 100.");
}

void loop() {
  if (Serial.available() > 0) {
    int palpite = Serial.parseInt();

    if (palpite == numeroSecreto) {
      Serial.print("Você acertou o número: ");
      Serial.println(numeroSecreto);
      
      numeroSecreto = random(1, 101);
      Serial.println("Novo número gerado. Tente novamente!");
    }
    else if (palpite < numeroSecreto) {
      Serial.println("O número é maior que seu palpite.");
    }
    else {
      Serial.println("O número é menor que seu palpite.");
    }

    delay(1000);
  }
}
