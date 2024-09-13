#include <iostream>
#include <iostream>
using namespace std;
int jlhpecahan = 0;
void minpecahan (int jumlah) {
    int uang [10] = {100, 200, 500, 1000, 2000, 5000, 10000, 20000, 50000, 100000};
    for (int i = 9; i >= 0; i--) {
    while (jumlah >= uang [i]) {
    jumlah = jumlah - uang [i];
    cout << uang [i] << "\t";
    jlhpecahan = jlhpecahan + 1;
    }
    }
}
int main () {
    int jlhuang;
    cout << "Masukan jumlah uang: ";
    cin >> jlhuang;
    cout << "Pecahan uang yang disediakan adalah: ";
    minpecahan (jlhuang);
    cout << "\njumlah lembar/pecahan uang : " << jlhpecahan << endl;
    system ("pause");
    return 0;
}