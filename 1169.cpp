#include <iostream>

using namespace std;


int main(){

    unsigned long long  int total;

    int n,x;
    cin>>n;
    while(n){
        cin>>x;
        total=1;
        if(x!=64){
            while(x){
                total = total*2;
                x--;
            }
            cout<<(total/12)/1000<<" kg"<<endl;
        }
        else{
            while(x!=1){
                total = total*2;
                x--;
            }
            cout<<(total/6)/1000<<" kg"<<endl;
        }

        n--;
    }

}

