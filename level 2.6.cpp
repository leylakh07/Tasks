#include <iostream>
using namespace std;
int main() 
{
int ay;
cout<<"ayin nomresini daxil edin:"<<endl;
cin>>ay;

if (1<=ay && ay<=12)
if (ay==12 || ay==1 || ay==2){
    cout<<"qis fesli"<<endl;
}
else if (ay==3 || ay==4 || ay==5){
    cout<<"yaz fesli"<<endl;
}
else if (ay==6 || ay==7 || ay==8){
    cout<<"yay fesli"<<endl;
}
else{
    cout<<"payiz fesli"<<endl;
}
return 0;
}