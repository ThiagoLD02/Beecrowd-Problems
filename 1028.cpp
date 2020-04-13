#include <iostream>

using namespace std;

int MDC(int a, int b) {  //Internet

   if (b==0) return a;

   return MDC(b,a%b);
}

int main(){

    int n,a,b;
    cin>>n;
    while(n){
        cin>>a>>b;
        cout<<MDC(a,b)<<endl;
        n--;
    }



}

