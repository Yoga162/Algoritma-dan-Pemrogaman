#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukan jumlah bintang paling atas: ";
    cin >> n;

    int i = n;
    do {
        int j = 0;
    do {
        cout << "*";
        j++;
    } while (j < i);
    cout << endl;
    i--;
    } while ( i > 0) ;

    return 0;
    }
