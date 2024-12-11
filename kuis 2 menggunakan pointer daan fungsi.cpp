#include <iostream>
using namespace std;


void tukarAngka(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void kaliLima(int* a) {
    *a = *a * 5;
}

int main() {
    int opsi;
    cout << "Menu:" << endl;
    cout << "4. Tukar dua angka" << endl;
    cout << "5. Kalikan angka dengan 5" << endl;
    cout << "Pilih opsi: ";
    cin >> opsi;

    if (opsi == 4) {
        int x, y;
        cout << "Masukkan dua angka: ";
        cin >> x >> y;
        tukarAngka(&x, &y);
        cout << "Setelah ditukar: x = " << x << ", y = " << y << endl;
    } else if (opsi == 5) {
        int x;
        cout << "Masukkan angka: ";
        cin >> x;
        kaliLima(&x);
        cout << "Hasil setelah dikalikan 5: " << x << endl;
    } else {
        cout << "Opsi tidak valid." << endl;
    }

    return 0;
}
