#include <iostream>
using namespace std;


int main(){

    int n,days=0;
    float c;

    for(cin>>n;n!=0;n--){
        for(cin>>c;c>1;days++){
            c=c/2;
        }
        cout<<days<<" dias"<<endl;
        days=0;
    }


}
