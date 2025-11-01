#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int fib;
    
    cout<<"1000den kicik Fibonacci ededleri:"<<a<<" "<<b<<" ";

   
    while (true) {
       fib = a + b;
        
        if (fib>=1000) break;
        
        cout<<fib<<" ";
        
        a=b;
        b=fib;
    }
    cout<<endl;
    return 0;
}
