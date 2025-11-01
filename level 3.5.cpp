#include <iostream>
using namespace std;

int main() {
    int n, cem=0;
    cout<<"eded daxil edin:";
    cin>>n;
    
    if(n<0){
        n=-n;
    }
    while(n>0){
        cem=cem+n%10;
        n=n/10;
    }
    cout<<"reqemlerin cemi="<<cem<<endl;
    return 0;

}
