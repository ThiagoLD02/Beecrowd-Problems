#include <iostream>

using namespace std;


int main(){

    float a,v,t;

    while(cin>>v){
        cin>>t;
        if(t==0)
            cout<<0<<endl;
        else{
            a =v/t;
            t=t*2;
            cout<<(a*(t*t))/2<<endl;

        }
    }


}

