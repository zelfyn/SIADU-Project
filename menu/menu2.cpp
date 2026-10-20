#include <iostream>
#include <iomanip>
#include "../header.h"
using namespace std;

void lihatDaftarAduan() {
    if (daftarAduan.empty()) {
        cout << "Belum Ada Aduan" << endl;;
    } else {
        tampilkanDataAduan(0);
    }
}

void tampilkanDataAduan(int i) {
    if (i >= daftarAduan.size()) {
        return;
    }
    
    cout << left << setw(10) << daftarAduan[i].id
         << setw(22) << daftarAduan[i].timestamp
         << setw(15) << daftarAduan[i].kategori
         << setw(12) << daftarAduan[i].status << endl;
         

    tampilkanDataAduan(i + 1);
}
