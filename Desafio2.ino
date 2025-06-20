#define PINO_TPM A0
#define PINO_SOLO A1    


void setup(){
  Serial.begin(9600);
}

void loop(){
 
  // Leitura do TPM (exemplo com TMP36)
  int leituraTPM = analogRead(PINO_TPM);
  float tensao = leituraTPM * (5.0 / 1023.0);
  float temperatura = (tensao - 0.5) * 100;    

  // Leitura do sensor de umidade do solo
  int leituraSolo = analogRead(PINO_SOLO);
  int umidadePercentual = map(leituraSolo, 0, 1023, 0, 100);

  // Exibe tudo no Serial
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  Serial.print("Umidade do solo: ");
  Serial.print(umidadePercentual);
  Serial.println("%");

  delay(1000);
}