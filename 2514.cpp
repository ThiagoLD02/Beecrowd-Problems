#include <iostream>

using namespace std;

int MDC(int a, int b) {  //Internet

   if (b==0) return a;

   return MDC(b,a%b);
}
int MMC(int a,int b){
    return a*b/MDC(a,b);
}
int main(){

    int m,l1,l2,l3,aux;
    while(cin>>m){
        cin>>l1>>l2>>l3;
        aux = MMC(l1,l2);
        aux = MMC(aux,l3);
        cout<<aux-m<<endl;
        aux=0;
    }
}
