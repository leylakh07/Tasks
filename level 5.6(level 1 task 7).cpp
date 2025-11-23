#include <iostream>
using namespace std;
void swapEded(int a, int b){
  int c=a;
  a=b;
  b=c;
}
int main(){
  int a,b;
  cout<<"iki eded daxil edin:";
  cin>>a>>b;
  
  swap(a,b);
  
  cout<<"yeri deyisilmis ededler:"<<a<<" "<<b<<endl;
}