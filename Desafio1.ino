#include <math.h>  

float graus = 0;
float radianos;   
float raio = 0;  

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando simulacao de movimento circular");
}

void loop() {
  radianos = graus * PI / 180;  

  float X = raio * cos(radianos);
  float Y = raio * sin(radianos);

  Serial.println("Coordenadas:");
  Serial.print("X: ");
  Serial.print(X);
  Serial.print("  Y: ");
  Serial.println(Y);

  graus += 1;  
  
  if (graus >= 360) {
    graus = 0;   
  }
  
  raio+=1;
  
  if (raio >= 100) {
    raio = 0;   
  }

  delay(1000);  
}
