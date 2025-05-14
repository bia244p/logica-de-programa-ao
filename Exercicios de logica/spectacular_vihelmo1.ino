// C++ code
//
int opcao = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("escolha uma fruta: ");
  Serial.println("        1 - banana");
  Serial.println("        2 - maca");
  Serial.println("        3 - tomate");
  Serial.println("        4 - laranja");
  while( !Serial.available());
  opcao = Serial.parseInt();
  
  
  switch (opcao)
  {  
 case 1:
  Serial.println("opcao escolhida: banana");
  break;
  case 2:
  Serial.println("opcao escolhida: maca");
  case 3:
  Serial.println("opcao escolhida: tomate");
  case 4:
  Serial.println("opcao escolhida: laranja");
  break;
  default:
  Serial.println("nao temos essa opcao");
  
  

  
  }
   Serial.println();

}