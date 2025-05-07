// C++ code
//variavel
long numero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Qual seu numero?: ");
  while( !Serial.available());
  numero = Serial.parseFloat();
  
  Serial.println("Numero: " + String(numero) );
  
  if( numero % 2 == 0){
    
   Serial.println("Ele eh par");
    
   } else {
    
    Serial.println("Ele eh impar");
  }
  
    delay(2000);
}