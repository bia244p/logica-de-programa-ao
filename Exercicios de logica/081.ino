
// C++ code
//variáção
String nome, cargo;
float salario = 0;

void setup()
{
 Serial.begin(9600);
}
void loop()
{
  //entrada
  Serial.println("Digite o nome do funcionario");
  while (!Serial.available());
  nome = Serial.readString();
  
  Serial.println("Digite o cargo do funcionario");
  while (!Serial.available());
  cargo = Serial.readString();
  
  Serial.println("Digite o salario do funcionario");
  while (!Serial.available());
  salario = Serial.parseInt();
  if (salario <= 1000) {
  salario = salario * 1.1;
  } else {
    Serial.println("Voce nao conseguira o acrescimo"); 
    
  }
 
  Serial.println("Nome do funcionario:" + String (nome));
  Serial.println("Nome do cargo:" + String (cargo));
  Serial.println(" salario: " + String (salario));
  
    delay(1000);
}



