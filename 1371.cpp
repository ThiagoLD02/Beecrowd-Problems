#include <iostream>
using namespace std;


int main(){

    int n,soma=3,i=1,f=0;
    cin>>n;
    while(n!=0){

        while(i<=n){
            if(f==0){
                cout<<i;
                f=1;
            }
            else
                cout<<" "<<i;
            i += soma;
            soma+=2;

        }
        cout<<endl;
        i=1;
        soma=3;
        f=0;
        cin>>n;
    }


}

