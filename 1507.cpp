#include<iostream>
#include<vector>

using namespace std;

int main(){

  int numCasosTeste;
  cin>>numCasosTeste;

  for (int i = 0; i < numCasosTeste; i++){
    
    string sequencia,subSequencia;
    int qtdConsultas;

    cin>>sequencia;
    cin>>qtdConsultas;
    
    for (int j = 0; j < qtdConsultas; j++){

      cin>>subSequencia;
      int subSize = subSequencia.length();
      int index = 0;
      
      bool encontrou = false;

      for (int seqIndex = 0; seqIndex < sequencia.length(); seqIndex++){

        if(sequencia[seqIndex] == subSequencia[index]){
          index++;
          
          if(index == subSize){
            cout<<"Yes\n";
            encontrou = true;
            break;
          }
        }
          
      }

      if(!encontrou) cout<<"No\n";

    }
    

  }
  

}