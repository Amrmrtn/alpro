#include <iostream>

using namespace std;


int jumlah_rekursif(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + jumlah_rekursif(n - 1);
    }
}

int pengurangan_rekursif(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return pengurangan_rekursif(a - 1, b - 1);
    }
}

int main() {
    int n;
    cout << "Masukkan nilai : ";
    cin >> n;

    int hasil = jumlah_rekursif(n);

    cout << "Hasil penjumlahan: " << hasil << endl;

    return 0;
}
