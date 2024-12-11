#include <iostream>

using namespace std ;

int perkalian (int a, int b) {
    int hasil = a * b ;
    return hasil ;
}

int terbesar (int a, int b) {
    int hasil ;
    if (a > b) {
        hasil = a ;
    }
    else       {
        hasil = b ;
    }
    return hasil ;
}

void cekganjilgenap (int num) {
    if (num % 2 == 0) {
        cout << "Genap" ;
    }
    else {
        cout << "Ganjil" ;
    }
}

int main () {
   int opsi;
   cout << "Menu:" << endl;
   cout << "1. Perkalian dua angka" << endl ;
   cout << "2. Angka terbesar dari dua" << endl ;
   cout << "3. Cek angka genap atau ganjil" << endl ;
   cout << "Pilih Opsi :" ;
   cin >> opsi ;


   if (opsi == 1 ) {
    int x, y ;
    cout << "Masukan angka:" ;
    cin >> x >> y ;
    cout << "Hasil Perkalian:" << perkalian(x, y) << endl ;
   }
   else if (opsi == 2) {
    int x, y ;
    cout << "Masukan Angka:" ;
    cin >> x >> y ;
    cout << "Angka terbesar:" << terbesar(x, y) << endl ;
   }
   else if (opsi == 3) {
    int num ;
    cout << "Masukan Angka:" ;
    cin >> num ;
    cekganjilgenap(num) ;
    cout << endl ;
   }
   else {
    cout << "opsi tidak valid." << endl ;
   }

   return 0 ;
}
