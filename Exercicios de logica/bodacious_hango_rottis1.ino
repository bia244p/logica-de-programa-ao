// C++ code
//

int idade = 3; 
void setup()
{
 Serial.begin(9600);
  
 Serial.println("academia do Davi");
 Serial.println();
  
 Serial.println("seu sobrinho tem: " + String(idade) + "anos");
 
  if(idade >= 5 && idade < 8){
  Serial.println("cadastro na categoria Infantil");
  }else if(idade >= 8 && idade < 12){
  Serial.println("cadastro na categoria cadete");
  }else if(idade >= 12 && idade < 15){
  Serial.println("cadastro na categoria juvenil");
  }else if(idade >= 18 && idade < 59){
  Serial.println("cadastro na categoria junior");
  }else if(idade >= 18 &&
  Serial.println("cadastro na categoria junior");
  else{
   Serial.println("nao pode entrar na academia");
  }
  
  
}

void loop()
{
  
}

