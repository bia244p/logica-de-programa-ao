
int tabuadaEscolhida, resultado;

void setup() {
  Serial.begin(9600);
  Serial.println("ola, digite um numero da tabuada (entre 1 e 10):");
  while (!Serial.available()){}
  tabuadaEscolhida = Serial.parseInt();
  
  for (int contador = 1; contador <= 10; contador++) {
  resultado = tabuadaEscolhida * contador;
    Serial.println(String(tabuadaEscolhida) + " X " + String(contador) + " = " + String(resultado));
  }
}

void loop() 
{

}
  
   