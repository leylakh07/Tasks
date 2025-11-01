#include <iostream>
using namespace std;

int main() {
    cout<<"1den 1000e qeder olan Palindrome ededler: "<<endl;
    
    for (int i=1; i<=1000; i++) {
        int a=i;
        int ters=0;
        
    
        while (temp>0) {
            ters=ters*10+(a%10);
            a/=10;
        }

        if (i==ters) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}