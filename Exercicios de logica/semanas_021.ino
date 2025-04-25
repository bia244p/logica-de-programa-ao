void setup() {
  Serial.begin(9600);
}

void loop() {
  int anoNascimento;
  int anoAtual;
  int idade;
  
  Serial.println("Digite seu ano de nascimento:");
  while (!Serial.available());
  anoNascimento = Serial.parseInt();

  Serial.println("Digite o ano atual:");
  while (!Serial.available());
  anoAtual = Serial.parseInt();

  idade = anoAtual - anoNascimento;
  long semanas = idade * 52;

  Serial.println("Idade: " + String(idade) + " anos");
  Serial.println("Idade em semanas: " + String(semanas));
}