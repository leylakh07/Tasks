#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"nece eded daxil etmek isteyirsiz?"<<endl;
    cin>>N;
    int cem=0;
    int eded;
    for (int i=1;i<=N;i++){
        cout<<i<<".ededi daxil edin:"<<endl;
        cin>>eded;
        cem=cem+eded;
    }
    cout<<"ededlerin cemi="<<cem<<endl;
    
    
    return 0;
    
}



      

