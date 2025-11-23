#include <iostream>
using namespace std;

void cutTek(int a){
    if (a%2==0)
        cout<<"eded cutdur."<<endl;
    else
        cout<<"eded tekdir."<<endl;
}

int main(){
    int eded;
    cout<<"bir eded daxil edin: ";
    cin>>eded;

    cutTek(eded);  

    return 0;
}

