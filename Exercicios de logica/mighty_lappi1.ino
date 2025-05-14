// C++ code
//

int idade = 10; 
void setup()
{
 Serial.begin(9600);
  
 Serial.println("idade para os filmes ");
 Serial.println();
  
 Serial.println("se voce tem " + String(idade) + " anos");
 
  if(idade >= 9){
  Serial.println("Apenas filmes infantis");
  }else if(idade >= 10 && idade < 13){
  Serial.println("Filmes até classificação 14 anos");
  }else if(idade >= 14 && idade < 17){
  Serial.println("cadastro na categoria juvenil");
  }else if(idade >= 18 && idade < 59){
  Serial.println("Todos os tipos de filmes + desconto para idosos");
  }else if(idade >= 60 ){
      Serial.println("idade inválida, verifique os dados");
  }
  

}
void loop()
{
  delay(10000);
}

