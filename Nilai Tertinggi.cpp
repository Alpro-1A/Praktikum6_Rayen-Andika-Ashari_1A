#include <iostream>

using namespace std;

int main()
{
    int nilai[5] = {54, 78, 23, 87, 34};
    cout << "         [Mencari Nilai Tertinggi C++]\n";
    cout << "-------------------------------------------------\n";
    cout << "Nilai-Nilainya :\n";
    cout << "//////////////\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Nilai " << i + 1 << ": " << nilai[i] << endl;
    }

    int tertinggi = nilai[0];
    int indeks = 0;

    for (int i = 1; i < 5; ++i) {
        if (nilai[i] > tertinggi) {
            tertinggi = nilai[i];
            indeks = i;
        }
    }
    cout << "-------------------------------------------------\n";
    cout << "Nilai tertinggi: " << tertinggi << endl;
    cout << "Index Nilai tertinggi: " << indeks << endl;
    cout << "-------------------------------------------------\n";

    return 0;
}
