#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan panjang sisi pertama: ";
    cin >> a;
    cout << "Masukkan panjang sisi kedua: ";
    cin >> b;
    cout << "Masukkan panjang sisi ketiga: ";
    cin >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "SEGI TIGA" << endl;
    } else {
        cout << "BUKAN SEGITIGA" << endl;
    }

    return 0;
}
