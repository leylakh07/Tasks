#include <iostream>
using namespace std;
int main()
{ 
  double c,f;
  cout<<"selsi ile eded daxil edin:";
  cin>>c;
  f=(c*9)/5+32;
  cout<<"selsi faranheit ile="<<f<<endl;
  
  cout<<"faranheit ile eded daxil edin=";
  cin>>f;
  c=(f-32)*5/9;
  cout<<"faranheit selsi ile="<<c<<endl;
  
    
    
return 0;
}