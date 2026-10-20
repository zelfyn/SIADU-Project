#include <iostream>
#include "../header.h"
using namespace std;

void cariAduan() {
    cout << "Masukkan ID : ";
    cin >> idCari;

    idx = cariBerdasarkanID(idCari, 0);

    if (idx == -1) {
        cout << "Aduan Tidak Ditemukan";
    } else {
        tampilkanDetail(daftarAduan[idx]);
    }
}

int cariBerdasarkanID(string idCari, int i) {
    if (i >= daftarAduan.size()) return -1;
    if (samaString(daftarAduan[i].id, idCari)) return i;
    return cariBerdasarkanID(idCari, i + 1);
}

void tampilkanDetail(Aduan a) {
    cout << "ID        : " << a.id
    cout << "Waktu     : " << a.timestamp
    cout << "Pelapor   : " << a.namaPelapor << " (" << a.nimPelapor << ")"
    cout << "Kategori  : " << a.kategori
    cout << "Kronologi : " << a.kronologi
    cout << "Bukti     : " << a.fileBukti
    cout << "Status    : " << a.status
}