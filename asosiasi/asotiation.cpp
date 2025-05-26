#include <iostream>
#include <vector>
using namespace std;
// nama repo
// RelasidanIntheritance_4nim

class dokter;
class pasien
{ // asosiasi
public:
    string nama;
    vector<dokter *> daftar_dokter;
    pasien(string pNama) : nama(pNama)
    {
        cout << "pasien \"" << nama << "\" ada\n";
    }
    ~pasien()
    {
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }
    void tambahDokter(dokter *);
    void cetakDokter();
};