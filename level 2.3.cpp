#include <iostream>
using namespace std;
int main() {
int a,b,c;
cout<<"birinci eded:"<<endl;
cout<<"ikinci eded:"<<endl;
cout<<"ucuncu eded:"<<endl;
cin>>a>>b>>c;

if (a>b && a>c){
    cout<<"en boyuk eded="<<a<<endl;
}
else if (b>a && b>c){
    cout<<"en boyuk eded="<<b<<endl;
}
else {
cout<<"en boyuk eded="<<c<<endl;
}
return 0;
}