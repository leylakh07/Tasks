#include <iostream>
using namespace std;
int sahe (int r){
  return 3.14*r*r;
}
int cevre (int r){
  return 2*3.14*r;
}

int main (){
  int r;
  cout<<"eded daxil edin:";
  cin>>r;
  
  cout<<"sahesi:"<<sahe(r)<<endl;
  cout<<"cevresi:"<<cevre(r)<<endl;
}