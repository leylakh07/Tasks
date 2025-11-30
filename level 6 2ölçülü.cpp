#include <iostream>
using namespace std;

void analyze2D(int a[][100], int row, int col){
  long long sum=0, product=1;
  int mx=a[0][0], mn=a[0][0];
  
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    sum=sum+a[i][j];
    product=product*a[i][j];
    if(a[i][j]>mx)mx=a[i][j];
    if(a[i][j]<mn)mn=a[i][j];
  }
    }
  cout<<"sum="<<sum<<endl;
  cout<<"product="<<product<<endl;
  cout<<"max="<<mx<<endl;
  cout<<"min="<<mn<<endl;
}
int main(){
  int arr[3][100]={
    {-4,15,2},
    {1,2,3},
    {4,-1,6}
  };  
  int row=3;
  int col=3;
  
  analyze2D(arr,row,col);
  return 0;
}