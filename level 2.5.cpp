#include <iostream>
using namespace std;
int main() 
{
int bal;
cout<<"bali daxil edin:";
cin>>bal;
if (bal>=0 && bal<=50){
    cout<<"F"<<endl;
}
else if (bal>=51 && bal<=60){
    cout<<"E"<<endl;
}
else if (bal>=61 && bal<=70){
    cout<<"D"<<endl;
}
else if (bal>=71 && bal<=80){
    cout<<"C"<<endl;
}
else if (bal>=81 && bal<=90){
    cout<<"B"<<endl;
}
else {
    cout<<"A"<<endl;
}
return 0;
}