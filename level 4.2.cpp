#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"eded daxil edin:"<<endl;
   cin>>n;
   int i=0;
   int eded=n;
   if(eded<10){
       cout<<"reqemlerin sayi 1"<<endl;
       return 0;
   }
   while(eded>0){
       eded=eded/10;
       i++;
      
   }
   cout<<"reqemlerin sayi"<<i<<endl;

    return 0;
    
}



      

