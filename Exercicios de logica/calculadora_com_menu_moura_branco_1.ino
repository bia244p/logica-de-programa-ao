
    int escolhaDaOperacao;

    float resultado; //vai guarda o resultado 

    //tipo de retorno nome da funcao parametros corpo

    float somar (float numero1Param, float numero2Param)
    {
      resultado = numero1Param + numero2Param; // ; indica o final da instruçao
      return resultado;
      //Serial.println(" o resultado da soma foi: " + String(resultado));             

    }


    void subtrair(float numero1Param, float numero2Param)
    {
      resultado = numero1Param - numero2Param; // ; indica o final da instruçao
      Serial.println(" o resultado da subtracao foi: " + String(resultado));             

    }

    void multiplicar(float numero1Param, float numero2Param)
    {
      resultado = numero1Param - numero2Param; // ; indica o final da instruçao
      Serial.println(" o resultado da multiplicacao foi: " + String(resultado));             
    }

    void divisao (float numero1Param, float numero2Param)
    {
             resultado = numero1Param / numero2Param; // ; indica o final da instruçao
            Serial.println(" o resultado da divisao foi: " + String(resultado));
    }     	
    

    void setup()
    {
      Serial.begin(9600);


      int contador = 0;

      float numero1;
      float numero2;


      do{
        Serial.println("Bem-vindo(a) a  calculadora!!!");
        Serial.println("Escolha uma opreracao:");
        Serial.println("1 - Somar");
        Serial.println("2 - Subtrair");
        Serial.println("3 - Multiplicar");
        Serial.println ("4 - Dividir");
        while (!Serial.available()){}
        escolhaDaOperacao = Serial.parseInt();



        Serial.println("Para conseguirmos fazer a operacao matematica na calculadora,precisamos que voce digite 2 numeros");
        Serial.println ("Digite o primeiro numero:");
        while(!Serial.available()){}
        numero1 = Serial.parseFloat();

        Serial.println ("Digite o segundo numero:");
        while(!Serial.available()){}
        numero2 = Serial.parseFloat();

        switch(escolhaDaOperacao){
          case 1:
            //somar(numero1, numero2); // estou passando os valores que o usuario digitou via parametro 
            //somar (1, 3);//estou passando os valores fixos via parametro
            float retornoFuncaoSomar;
            retornoFuncaoSomar = somar(numero1, numero2);
            Serial.println(retornoFuncaoSomar);

            break;

          case 2:
            subtrair(numero1, numero2);

            break;

          case 3:
            multiplicar(numero1, numero2);

          case 4:
            divisao(numero1, numero2);

          default:
            Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4. ;)");
        }

        Serial.println("Voce deseja voltar ao menu? Digite sim ou nao ( em minusculo, por favor");
        while (!Serial.available()){}

        if(Serial.readString()=="sim"){
          contador = 1;
        }

        else{
          contador = 0;
          Serial.println("Até breve");
          Serial.println("Caso queira voltar ao menu, reinicie o programa ;");

        }


      }
      while(contador != 0);
    }

    void loop()
    {
     // sem instruções
    }