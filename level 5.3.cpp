#include <iostream>
using namespace std;
int kvadrat(int a){
  return a*a;
}
int kub(int a){
  return a*a*a;
}
int main(){
  int eded;
  cout<<"eded daxil edin:";
  cin>>eded;
  
  cout<<"kvadrat:"<<kvadrat(eded)<<endl;
  cout<<"kub:"<<kub(eded)<<endl;
  
}