#include <iostream>

using namespace std;



int mdc(int num1, int num2)
{
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

void simplificar(int &resultadoNumerador,int &resultadoDenominador){

  int maiorDivisor = 1;

  
  if(resultadoNumerador < 0){

    resultadoNumerador = -1 * resultadoNumerador;
    if(resultadoNumerador > resultadoDenominador)
      maiorDivisor =  mdc(resultadoNumerador,resultadoDenominador);
    else
      maiorDivisor =  mdc(resultadoDenominador,resultadoNumerador);

  
      resultadoNumerador = -1 * resultadoNumerador/maiorDivisor;
    
      resultadoDenominador = resultadoDenominador/maiorDivisor;
  }
  else{
    if(resultadoNumerador > resultadoDenominador)
      maiorDivisor =  mdc(resultadoNumerador,resultadoDenominador);
    else
      maiorDivisor =  mdc(resultadoDenominador,resultadoNumerador);

  
      resultadoNumerador =  resultadoNumerador/maiorDivisor;
    
      resultadoDenominador = resultadoDenominador/maiorDivisor;
  }
  
}

int main(){


  int quantidadeDeTestes, numerador1,numerador2,denominador1,denominador2;
  int resultadoNumerador, resultadoDenominador;
  char operador, divisao;
  
  cin>>quantidadeDeTestes;

  for (int i = 0; i < quantidadeDeTestes; i++){

    cin>>numerador1;
    cin>>divisao;
    cin>>denominador1;

    cin>>operador;

    cin>>numerador2;
    cin>>divisao;
    cin>>denominador2;

    switch (operador)
    {
    case '+':
      resultadoNumerador = numerador1*denominador2 + numerador2*denominador1;
      resultadoDenominador = denominador1*denominador2;
      cout<< resultadoNumerador << "/" << resultadoDenominador << " = ";
      simplificar(resultadoNumerador,resultadoDenominador);
      
      break;

    case '-':
      resultadoNumerador = numerador1*denominador2 - numerador2*denominador1;
      resultadoDenominador = denominador1*denominador2;
      cout<< resultadoNumerador << "/" << resultadoDenominador << " = ";
      simplificar(resultadoNumerador,resultadoDenominador);
      
      break;

    case '*':
      resultadoNumerador = numerador1*numerador2;
      resultadoDenominador = denominador1*denominador2;
      cout<< resultadoNumerador << "/" << resultadoDenominador << " = ";
      simplificar(resultadoNumerador,resultadoDenominador);
      
      break;

     case '/':
      resultadoNumerador = numerador1*denominador2;
      resultadoDenominador = numerador2*denominador1;
      cout<< resultadoNumerador << "/" << resultadoDenominador << " = ";
      simplificar(resultadoNumerador,resultadoDenominador);
      
      break;
    
    }

    cout<< resultadoNumerador << "/" << resultadoDenominador <<endl;


  }
  

}