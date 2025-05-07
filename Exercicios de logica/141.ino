// C++ code
//variavel
void setup() {
  Serial.begin(9600);
}

void loop() {
  int num1;
  int num2;
  
  Serial.println("Digite o primeiro numero:");
  while (!Serial.available());
  num1 = Serial.parseInt();
  while (Serial.available()) Serial.read();

  Serial.println("Digite o segundo numero:");
  while (!Serial.available());
  num2 = Serial.parseInt();
  while (Serial.available()) Serial.read();

  if (num1 > num2) {
    Serial.print("O maior numero eh: ");
    Serial.println(num1);
  } else if (num2 > num1) {
    Serial.print("O maior numero eh: ");
    Serial.println(num2);
  } else {
    Serial.println("Os dois numeros sao iguais.");
  }

  delay(3000);
}

