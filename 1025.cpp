#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

  int numeroDeMarmores, numeroDeConsultas;
  int input,count = 0;
  
  cin>>numeroDeMarmores;
  cin>>numeroDeConsultas;
  
  while(numeroDeMarmores != 0 && numeroDeConsultas != 0){
    vector<int> marmores;
    vector<int> consultas;
    
    cout<< "CASE# " << ++count << ":\n";
    
    for (int i = 0; i < numeroDeMarmores; i++)
    {
      cin>>input;
      marmores.push_back(input);
    }
    
    sort(marmores.begin(),marmores.end());

    for (int i = 0; i < numeroDeConsultas; i++)
    {
      cin>>input;
      consultas.push_back(input);
    }

    // buscar os indices de cada consulta

    
    for (int i = 0; i < numeroDeConsultas; i++)
    {
      bool encontrado = false;
      input = consultas[i];
      
      for (int j = 0; j < numeroDeMarmores; j++) {
        if(marmores[j] == input){
          cout<< input << " found at " << j + 1 << endl;
          encontrado = true;
          break;
        }
      }
      if(!encontrado) cout<< input << " not found\n";
        
    }

    cin>>numeroDeMarmores;
    cin>>numeroDeConsultas;
    
    
  }



}