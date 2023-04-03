#include <iostream>
using namespace std;

struct AlamatDetail
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string NIM;
    string nama;
    AlamatDetail alamat;
    int umur; 
}; 

int main()
{
    mahasiswa mhs;  

    cout << "Masukan NIM :"; 
    cin >> mhs.NIM;
    cout << "Masukan Nama :";
    cin >> mhs.nama;
    cout << "Alamat :";
    cout << "\nMasukan Desa :";
    cin >> mhs.alamat.desa;
    cout << "\nMasukan Kota :";
    cin >> mhs.alamat.kota;
    cout << "Masukan Umur :";
    cin >> mhs.umur;

    cout << "\nNIM =" << mhs.NIM;
    cout << "\nNama =" << mhs.nama;
    cout << "\nDesa =" << mhs.alamat.desa;
    cout << "\nKota =" << mhs.alamat.kota;
    cout << "\nUmur =" << mhs.umur; 



}

