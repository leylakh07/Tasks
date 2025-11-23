#include <iostream>
using namespace std;

void yoxla(int a) {
    if (a > 0)
        cout<<"eded musbetdir."<<endl;
    else if (a < 0)
        cout<<"eded menfidir."<<endl;
    else
        cout<<"eded sifirdir."<<endl;
}

int main(){
    int eded;
    cout<<"bir eded daxil edin: ";
    cin>>eded;

    yoxla(eded);
    return 0;
}


