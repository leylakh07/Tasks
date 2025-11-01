#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"muisbət tam ededi daxil edin:";
    cin>>n;

    if (n ==0) {
        cout<<"ikili forma: 0"<<endl;
        return 0;
    }
    
    long long binary_eded=0;
    int yer=1; 

    while (n>0) {
        int qaliq=n%2;      
        
        binary_eded+=qaliq*yer; 
        
        yer*=10;                
        
        n/=2;                  
    }

    cout<<"ikili forma:"<<binary_eded<<endl;

    return 0;
}