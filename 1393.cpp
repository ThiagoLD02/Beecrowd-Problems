#include <iostream>

using namespace std;
/*
int fibo(int n){

    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibo(n-1)+ fibo(n-2);
}*/
int fib(int n){
    int i,a,b,c,d,aux1,aux2;
    if(n<=0)
        return 0;
    i = n-1;
    a=1;
    b=0;
    c=0;
    d=1;
    aux1=0;
    aux2=0;
    while(i>0){
        if(i%2 !=0){
            aux1 = (d*b)+(c*a);
            aux2 = d*(b+a) +(c*b);
            a= aux1;
            b= aux2;
        }
        aux1 = (c*c) + (d*d);
        aux2 = d*((2*c)+d);
        c= aux1;
        d = aux2;
        i=i/2;
    }
    return a+b;
}

int main(){

    int n,sum = 1,i=0;
    cin>>n;
    while(n){
        while(n){
            sum = fib(i) + sum;
            i++;
            n--;
        }
        cout<<sum<<endl;
        i=0;
        sum=1;
        cin>>n;
    }

}
