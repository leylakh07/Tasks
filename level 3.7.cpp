#include <iostream>
using namespace std;

int main() {
    int n, cem = 0;

    cout << "Ededleri daxil edin : ";

    cin >> n;

    while (n != 0) {  
        cem=cem+n;  
        cin >> n;   
    }

    cout << "Ededlerin cemi= " << cem << endl;
    return 0;
}

      

