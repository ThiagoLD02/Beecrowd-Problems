#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    float s,va,vb,vc,t;
    cout << fixed << setprecision(2);
    while(cin>>s){
        cin>>va>>vb;
        vc=va-vb;
        (vc>0)? cout<< s/vc<<endl:cout<<"impossivel\n";
    }

}

