#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};


struct Orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {
    Orang mhs[3];
    //mengisi data

    for(int i = 0; i < 3; i++) {
        cout << "Data Mahasiswa ke-" << i+1 << endl;
        cout << "Nama: ";
        getline(cin, mhs[i].nama);
        cout << "Desa: ";
        getline(cin, mhs[i].alamat.desa);
        cout << "Kota: ";
        getline(cin, mhs[i].alamat.kota);
        cout << "Umur: ";
        cin >> mhs[i].umur;
        cin.ignore(); // Membersihkan buffer
        cout << endl;
    }

    // menampilkan data
    cout << "Tampil Data" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Data Mahasiswa ke-" << i+1 << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "Desa: " << mhs[i].alamat.desa << endl;
        cout << "Kota: " << mhs[i].alamat.kota << endl;
        cout << "Umur: " << mhs[i].umur << endl;
    }
}