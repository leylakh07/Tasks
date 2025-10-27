#include <iostream>
using namespace std;
int main(){
    int saniye;
    cout<<"saniye daxil edin:";
    cin>>saniye;
    
    cout<<"saat="<<saniye/3600<<endl;
    cout<<"qaliq="<<saniye%3600<<endl;
    cout<<"deqiqe="<<saniye/60<<endl;
    cout<<"qaliq="<<saniye%60<<endl;
    
    return 0;
}