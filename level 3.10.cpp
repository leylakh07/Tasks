#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"N ededi daxil edin:";
    cin>>n;
    int a=0, b=1;
    int i=0;
    while (i<n){
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b=c;
        i++;
    }
    return 0;
    
}



      

