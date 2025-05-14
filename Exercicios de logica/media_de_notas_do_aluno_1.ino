// Variaves
//Calcule a média entre DUAS notas.
void setup() 
{
   Serial.begin(9600);
}

void loop()
{
  int nota1;
  int nota2;
  
  Serial.println( "digite sua primera nota:");
  while (!Serial.available());
  nota1 = Serial.parseInt();
  while (Serial.available()) Serial.read();

  Serial.println ( "digite sua segunda nota:");
  while (!Serial.available());
  nota2 = Serial.parseInt();
  while (Serial.available()) Serial.read();
  {
    if (nota1 >= nota2);
  }  

}