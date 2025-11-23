#include <iostream>
using namespace std;

int boyuyuTap (int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    cout << "Iki eded daxil edin: ";
    cin >> x >> y;

    cout << "Boyuk eded: " << boyuyuTap(x, y) << endl;

    return 0;
}
