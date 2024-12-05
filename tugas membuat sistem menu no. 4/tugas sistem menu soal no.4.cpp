#include <iostream>
using namespace std;

int main() {
    int totalPrice = 0, quantity, bayar, kembalian;

    do {

        cout << "===================================" << endl;
        cout << "           Toko Roti Sederhana     " << endl;
        cout << "===================================" << endl;
        cout << "1. Roti Coklat     - Rp 10,000" << endl;
        cout << "2. Roti Keju       - Rp 12,000" << endl;
        cout << "3. Roti Sosis      - Rp 15,000" << endl;
        cout << "4. Selesai dan Bayar" << endl;
        cout << "===================================" << endl;

        cout << "Pilih menu (1-4): ";
        int pilihan;
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Berapa banyak Roti Coklat yang Anda beli? ";
            cin >> quantity;
            totalPrice += quantity * 10000;
        } else if (pilihan == 2) {
            cout << "Berapa banyak Roti Keju yang Anda beli? ";
            cin >> quantity;
            totalPrice += quantity * 12000;
        } else if (pilihan == 3) {
            cout << "Berapa banyak Roti Sosis yang Anda beli? ";
            cin >> quantity;
            totalPrice += quantity * 15000;
        } else if (pilihan == 4) {
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }

    } while (true);


    if (totalPrice > 0) {
        cout << "\n========= Nota Pembelian =========" << endl;
        cout << "Total yang harus dibayar: Rp " << totalPrice << endl;

        do {
            cout << "Masukkan jumlah pembayaran: Rp ";
            cin >> bayar;
            if (bayar < totalPrice) {
                cout << "Uang Anda kurang. Silakan masukkan jumlah yang cukup.\n";
            }
        } while (bayar < totalPrice);

        kembalian = bayar - totalPrice;
        cout << "Kembalian Anda: Rp " << kembalian << endl;
        cout << "Terima kasih telah berbelanja!" << endl;
    } else {
        cout << "Anda belum membeli apapun. Terima kasih!" << endl;
    }

    return 0;
}
