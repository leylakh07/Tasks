#include <iostream>
using namespace std;

int main() {
    int n,faktorial=1;
    cout<<"bir eded daxil edin:";
    cin>>n;
    for (int i=1; i<=n; i++){
    faktorial=faktorial*i;
    }    
    cout<<n<<"!="<<faktorial<<endl;
    return 0;

}
