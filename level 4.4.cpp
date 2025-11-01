#include <iostream>


using namespace std;

int main() {
   cout<<"Rəqəmlerinin cemi 10-a beraber olan 3 reqemli ededler:"<<endl;
    
    for (int i=100; i<=999; i++) {
        int eded=i;
        int cem=0;
        
        cem+=eded%10;      
        eded/=10;
        cem+=eded%10;     
        eded/=10;
        cem+=eded; 

        if (cem==10) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}




      

