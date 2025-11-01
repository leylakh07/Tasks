#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"eded daxil edin:";
    cin>>n;
    if (n<=1){
        cout<<"menfi ve sifir sade eded deyil";
        return 0;
    }
    for (int i=1; i*i<=n; i++){
        if (n%i==0){
            cout<<"sade eded deyil";
            return 0;
        }
    }
    cout<<"sade ededdir";
    return 0;
    
}



      

