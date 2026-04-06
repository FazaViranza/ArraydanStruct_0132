#include <iostream>
using namespace std;

struct Orang
{
    string nama;
    string alamat;
    int umur;
};

int main() {
    Orang mhs;
  
    cout << "Mengisi Data" << endl;

    cout << "Nama: ";
    cin >> mhs.nama;
    cout << "Alamat: ";
    cin >> mhs.alamat;
    cout << "Umur: ";
    cin >> mhs.umur;
    cout << endl;

    //tamplkan
    cout << "Tampil Data" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Alamat: " << mhs.alamat << endl;
    cout << "Umur: " << mhs.umur << endl;
}