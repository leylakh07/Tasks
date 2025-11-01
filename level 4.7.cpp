#include <iostream>
using namespace std;

int main() {
    cout<<"reqemlerinin kvadratlari cemi ozune bərabər olan edeler:"<<endl;
    
    for (int i=1; i<=1000; i++) {
        int a=i;
        int kv_cem=0;
        
        while (a>0) {
            int reqem=a % 10;
            kv_cem+=reqem*reqem;
            a/=10;
        }

        if (kv_cem==i) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
