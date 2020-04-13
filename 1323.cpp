#include <iostream>

using namespace std;

int main(){

    int sum=0,n;
    cin>>n;
    while(n!=0){
        while(n){
            sum = n*n+sum;
            n--;
        }
        cout<<sum<<endl;
        sum = 0;
        cin>>n;
    }
}
