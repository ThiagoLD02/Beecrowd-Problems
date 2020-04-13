#include <iostream>
using namespace std;

int rafa(int x,int y){
    return (3*x)*(3*x) + y*y;
}
int beto(int x,int y){
    return 2*x*x + (5*y)*(5*y);
}
int carlos(int x,int y){
    return -100*x + y*y*y;
}

int main(){

    int cases,x,y;
    cin>>cases;

    while(cases){
        cin>>x>>y;
        if(rafa(x,y)>beto(x,y)){
            if(rafa(x,y)>carlos(x,y))
                cout<<"Rafael ganhou\n";
            else
                cout<<"Carlos ganhou\n";
        }
        else if(beto(x,y)>carlos(x,y))
                cout<<"Beto ganhou\n";
            else
                cout<<"Carlos ganhou\n";
        cases--;
    }

}

