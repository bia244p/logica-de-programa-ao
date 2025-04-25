//Faça um programa que receba a idade de uma pessoassoa em anos e
// imprima essa idade em: meses, dias, horas, minutos.

//declaração de variaveis
int idade = 0;

void setup()
{
  Serial.begin(9600);  
}

void loop()
{
  //entrada
  Serial.println("Digite sua idade em anos");// mostra msg na tela 
  while( !Serial.available() );//espera o usuário dar <Enter>
  idade = Serial.parseInt();//transforma a idade digitada em numero
  
  //Processamento
 long meses = idade * 12;
 long dias = idade * 365;
 long horas = dias * 24;
 long minutos = horas * 60;
  
  //Saída
  Serial.println("Idade em meses: " + String(meses) );//imprime o texto
  Serial.println("idade em dias: " + String(dias) );//imprime o texto
  Serial.println("idade em horas: " + String(horas) );//imprime o texto
  Serial.println("idade em minutos: " + String(minutos) );//imprime o texto
    delay(1000);
}