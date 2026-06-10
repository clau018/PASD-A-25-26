#include <iostream>
using namespace std;
typedef struct {
    string npm;
    string nama_mhs;
    int jml_stok;
} NilaiMK;
typedef struct elm *alamatelm;
typedef struct elm {
    NilaiMK Kontainer;
    alamatelm next;
} elemen;
typedef struct {
    elemen *first;
    elemen *last;
} queue;
void buatQkosong(queue *Q) {
    (*Q).first = NULL;
    (*Q).last = NULL;
}
int isKosong(queue Q) {
    bool hasil = false;

    if (Q.first == NULL) {
        hasil = true;
    }
    return hasil;
}
int jmlElemen(queue Q) {
    int hasil = 0;

    if (Q.first != NULL) {
        elemen *bantu;
        bantu = Q.first;

        while (bantu != NULL) {
            hasil = hasil + 1;
            bantu = bantu->next;
        }
    }
    return hasil;
}
void add(string npm, string nama_mhs, int jml_stok, queue *Q) { 
    elemen *info;
    info = new elemen;

    info->Kontainer.npm = npm;
    info->Kontainer.nama_mhs = nama_mhs;
    info->Kontainer.jml_stok = jml_stok;
    info->next = NULL;

    if ((*Q).first == NULL) {
        (*Q).first = info;
    } else {
        (*Q).last->next = info;
    }

    (*Q).last = info;
    info = NULL;
}
void del(queue *Q) {
    if ((*Q).first != NULL) {
        elemen *hapus = (*Q).first;

        if (jmlElemen(*Q) == 1) {
            (*Q).first = NULL;
            (*Q).last = NULL;
        } else {
            (*Q).first = (*Q).first->next;
            hapus->next = NULL;
        }

        delete hapus;
    }
}
void CetakQueue(queue Q) {
    if (Q.first != NULL) {
        cout << "MENAMPILKAN QUEUE" << endl;

        elemen *bantu = Q.first;
        int i = 1;

        while (bantu != NULL) {
            cout << "====================================" << endl;
			cout << "Elemen Ke             : " << i << endl;
			cout << "Kode Barang           : " << bantu -> Kontainer.npm << endl;
			cout << "Nama Barang           : " << bantu -> Kontainer.nama_mhs << endl;
			cout << "Jumlah Stok           : " << bantu -> Kontainer.jml_stok << endl;

            bantu = bantu->next;
            i = i + 1;
        }

        cout << "====================================" << endl;
    } else {
        cout << "Queue Kosong" << endl;
    }
}

int main() {
    queue Q;
    buatQkosong(&Q);

    CetakQueue(Q);
    cout << endl;
    cout << endl;

    cout << "==========================" << endl;

    add("2050", "Handuk", 5, &Q);
    add("2051", "Diamond", 5, &Q);
    add("2052", "Robux", 5, &Q);
    add("2053", "Akun Epep", 5, &Q);
    add("2054", "Laras", 5, &Q);
    CetakQueue(Q);

    cout << "==========================" << endl;
    cout << endl;
    cout << endl;

    del(&Q);

    del(&Q);
    CetakQueue(Q);

    cout << "==========================" << endl;

    return 0;
}