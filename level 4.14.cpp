#include <iostream>
using namespace std;

int main() {
   int n,ters=0,a;
   cout<<"eded daxil edin:";
   cin>>n;
   a=n;
   while (a!=0){
       ters=ters*10+a%10;
       a=a/10;
   }
   cout<<"ededin tersi="<<ters<<endl;
   if(n==ters){
       cout<<"palindromdur";
   }
   else{
       cout<<"palindrom deyil";
   }
    return 0;
    
}



      

