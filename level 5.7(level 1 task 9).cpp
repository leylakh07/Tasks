#include <iostream>
using namespace std;
void saniyeniCevir(int s){
  int saat=s/3600;
  int qaliq=s%3600;
  int deqiqe=qaliq/60;
  int saniye=qaliq%60;
  
  cout<<"saat:"<<saat<<endl;
  cout<<"deqiqe:"<<deqiqe<<endl;
  cout<<"saniye:"<<saniye<<endl;
}
int main(){
  int s;
  cout<<"saniyeni daxil edin:";
  cin>>s;
  
  saniyeniCevir(s);
}