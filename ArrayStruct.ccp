#include <iostream>
using namespace std;

int main() {
    //deklarasi dengan inisialisasi
    int aku[5] = {10, 20, 30, 40, 50};
    //deklarasi array tanpa inisialisasi
    int kamu[5];
    // tampilkan data (membaca data array)
    cout << "Data pada index 1 = " << aku[1] << endl;
    // ganti index ke 1(menulis dara array)
    aku [1] = 200;
    cout << endl;
    cout << "Data pada index 1 = " << aku[1] << endl;

}