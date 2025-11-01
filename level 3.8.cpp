#include <iostream>
using namespace std;

int main() {
    int n, ters = 0;
    cout << "Bir eded daxil edin: ";
    cin >> n;

    while (n != 0) {
        ters = ters * 10 + n % 10;
        n /= 10;
    }

    cout << "Ededin tersi: " << ters << endl;
    return 0;
}


      

