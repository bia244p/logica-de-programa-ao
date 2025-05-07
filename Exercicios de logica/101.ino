/ C++ code
//variavel
String nome = "";
long salario = 0;

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
  
  Serial.println("Digite o salario do funcionario");
  while (!Serial.available());
  salario = Serial.parseInt();
  
  if (salario <= 500) {
  salario = salario * 1.3;
  } else {
    Serial.println("infelizmente voce nao conseguira o acrescimo");
  }
    Serial.println("Nome do funcionario:" + String(nome));
    Serial.println("Salario:" + String(salario));
  
  delay(1000);
  
  
  }
