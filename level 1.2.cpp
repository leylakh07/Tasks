#include <iostream>
using namespace std;
int main()
{ 
    int a,b;
    cout<<"iki tam eded daxil edin:";
    cin>>a>>b;
    
    cout<<"iki ededin cemi:"<<a+b<<endl;
    if(a>b){
    cout<<"iki ededin ferqi:"<<a-b<<endl;}
    else{
    cout<<"iki ededin ferqi:"<<b-a<<endl;}
    cout<<"iki ededin hasili:"<<a*b<<endl;
    if(b!=0){
        cout<<"iki ededin bolmesi:"<<a/b<<endl;}
        else
        cout<<"bolen 0 ola bilmez"<<endl;
    
    
return 0;
}