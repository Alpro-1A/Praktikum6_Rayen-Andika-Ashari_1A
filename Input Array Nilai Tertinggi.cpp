#include <iostream>

using namespace std;

int main()
{
    int Nilai;
    cout << "    [Input Array Nilai Tertinggi c++] \n";
    cout << "------------------------------------------\n";
    cout << "Masukkan jumlah array : ";
    cin >> Nilai;
    cout << "------------------------------------------\n";
    int array[Nilai];
    cout << "Masukkan nilai anda : " << endl;
     for (int i = 0; i < Nilai; ++i) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    int nilaiTertinggi = array[0];
    int indeks = 0;

    for (int i = 1; i < Nilai; ++i) {
        if (array[i] > nilaiTertinggi) {
            nilaiTertinggi = array[i];
            indeks = i;
        }
    }
    cout << "------------------------------------------\n";
    cout << "Nilai tertinggi dalam array: " << nilaiTertinggi << endl;
    if (indeks != -1) {
        cout << "Nilai anda ada pada indeks : " << indeks << endl;
    } else {
        cout << "Maaf, Nilai anda tidak di temukan." << endl;
    }
    cout << "------------------------------------------\n";

  return 0;
}
