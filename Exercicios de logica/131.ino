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
  numero = Serial.parseInt();
  
  if( numero % 2 == 0){
    
   Serial.println("Ele eh par");
   Serial.println("seu numero " + String(numero));
   } else {
    
    Serial.println("Ele eh impar");
  }
  
    delay(2000);
}
