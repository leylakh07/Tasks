#include <iostream>
using namespace std;

void analyze1D(int a[], int n){
  long long sum=0, product=1;
  int mx=a[0], mn=a[0];
  
  for(int i=0;i<n;i++){
    sum=sum+a[i];
    product=product*a[i];
    if(a[i]>mx)mx=a[i];
    if(a[i]<mn)mn=a[i];
  }
  cout<<"sum="<<sum<<endl;
  cout<<"product="<<product<<endl;
  cout<<"max="<<mx<<endl;
  cout<<"min="<<mn<<endl;
}
int main(){
  int arr[]={-4,-9,15,2};
  int n=4;
  
  analyze1D(arr,n);
  return 0;
}