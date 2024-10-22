#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Masukan jumlah bintang paling atas: ";
    cin >> n;

int i = n;
     while (i > 0 ) {
        int n = 0;
        while (n < i ) {
                cout << "*";
                n++;
     }
     cout << endl;
     i--;
     }

return 0;
}
