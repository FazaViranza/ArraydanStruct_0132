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
    Orang mhs;
    //mengisi data
    cout << "Mengisi Data" << endl;

    cout << "Nama: ";
    getline(cin, mhs.nama);
    cout << "Desa: ";
    getline(cin, mhs.alamat.desa);
    cout << "Kota: ";
    getline(cin, mhs.alamat.kota);
    cout << "Umur: ";
    cin >> mhs.umur;
    cout << endl;
    
    //tamplkan
    cout << "Tampil Data" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Desa: " << mhs.alamat.desa << endl;
    cout << "Kota: " << mhs.alamat.kota << endl;
    cout << "Umur: " << mhs.umur << endl;
}