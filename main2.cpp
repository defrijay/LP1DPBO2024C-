#include <bits/stdc++.h>
#include "AnggotaDPR.cpp"

using namespace std;

int main()
{
    DPR dpr;

    // Menambahkan beberapa anggota DPR
    dpr.tambahAnggotaDPR(AnggotaDPR(1, "Miles", "Hukum", "Partai A"));
    dpr.tambahAnggotaDPR(AnggotaDPR(2, "Morales", "Keuangan", "Partai B"));

    // Menampilkan anggota DPR
    cout << "Daftar Anggota DPR:" << endl;
    dpr.tampilkanAnggotaDPR();

    // Mengubah data anggota DPR dengan ID 1
    dpr.ubahAnggotaDPR(1, "Peter", "Pendidikan", "Partai A");

    // Menampilkan anggota DPR setelah diubah
    cout << "\nDaftar Anggota DPR setelah perubahan:" << endl;
    dpr.tampilkanAnggotaDPR();

    // Menghapus anggota DPR dengan ID 2
    dpr.hapusAnggotaDPR(2);

    // Menampilkan anggota DPR setelah dihapus
    cout << "\nDaftar Anggota DPR setelah penghapusan:" << endl;
    dpr.tampilkanAnggotaDPR();

    return 0;
}
