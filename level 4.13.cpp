#include <iostream>
using namespace std;

int main() {
    int say;
    cout<<"nece eded daxil edeceksiniz:";
    cin>>say;

    if (say<=0) return 0;
    
    int cut_cem=0; 
    int tek_cem=0; 
    int eded;

    cout<<"ededleri daxil edin:"<<endl;
    
    for (int i=0; i<say; i++) {
        cin>>eded;

        if (i%2==0) {
            cut_cem+=eded;
            } else {
            tek_cem+=eded;
        }
    }

    cout<<"cut indekslerdeki cem:"<<cut_cem<<endl;
    cout<<"tək indekslerdeki cem:"<<tek_cem<<endl;

    return 0;
}
