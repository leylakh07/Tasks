#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"nece eded daxil edeceksiniz?";
    cin>>N;

    double eded, cem = 0, en_kicik, en_boyuk;

    cout<<"1ci ededi daxil edin:";
    cin>>eded;
    en_kicik=en_boyuk=eded;
    cem=eded;

    for (int i=2; i< N; i++) {
        cout<<i<<"-ci ededi daxil edin:";
        cin>>eded;

        if (eded<en_kicik) en_kicik=eded;
        if (eded>en_boyuk) en_boyuk=eded;
        cem+=eded;
    }

    double orta=cem/N;

    cout<<"en kicik eded: "<<en_kicik<<endl;
    cout<<"en boyuk eded: "<<en_boyuk<<endl;
    cout<<"ededi orta: "<<orta<<endl;

    return 0;
}


