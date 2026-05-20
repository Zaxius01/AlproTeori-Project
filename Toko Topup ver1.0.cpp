#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
struct Paket {
    string namagame;
    int diamond;
    int harga;
};

Paket data[9] =
{
    {"Mobile Legend", 100, 15000},
    {"Mobile Legend", 500, 70000},
    {"Mobile Legend", 1000, 140000},

    {"Free Fire", 100, 14000},
    {"Free Fire", 550, 70000},
    {"Free Fire", 1200, 140000},

    {"PUBG Mobile", 50, 15000},
    {"PUBG Mobile", 500, 140000},
    {"PUBG Mobile", 1800, 420000},
};

void mobilelegend(bool ascending, int id) {
    system("cls");
    int pil;
    if (id == -1) {
    cout << "=== Mobile Legend ===\n";
    cout << "Masukkan id akun Mobile Legend = "; cin >> id;
    system("cls");
    }
    cout << "=== Mobile Legend ===\n\n";

    cout << left
         << setw(5)  << "No"
         << setw(15) << "Diamond"
         << setw(10) << "Harga"
         << endl;

    cout << "--------------------------------\n";
    if (ascending == true) {
    for (int i = 0; i < 3; i++) {
        cout << left
             << setw(5)  << i + 1
             << setw(15) << data[i].diamond
             << setw(10) << data[i].harga
             << endl;
        }
    }  else {
        for (int i = 2; i >= 0; i--) {
        cout << left
             << setw(5)  << i - 1
             << setw(15) << data[i].diamond
             << setw(10) << data[i].harga
             << endl;
        }
    }
    if (ascending == true) {
    cout << "\n(Ketik 4 untuk batal atau Ketik 5 untuk mode descending) \n\nMasukkan paket yang ingin di beli = "; cin >> pil;
    } else {
        cout << "\n(Ketik 4 untuk batal atau Ketik 5 untuk mode ascending) \n\nMasukkan paket yang ingin di beli = "; cin >> pil;
        }

    switch (pil) {
        case 1 : {
        if (ascending == true) {
            cout << "\n\nPembelian sejumlah 100 diamond\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[0].namagame << "," << id << "," << data[0].diamond << "," << data[0].harga << endl;
            system("pause");
        } else {
            cout << "\n\nPembelian sejumlah 1000 diamond\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[2].namagame << "," << id << "," << data[2].diamond << "," << data[2].harga << endl;
            system("pause");
        }
        break;
		}
        case 2 : {
            cout << "\n\nPembelian sejumlah 500 diamond\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[1].namagame << "," << id << "," << data[1].diamond << "," << data[1].harga << endl;
            system("pause");
        break;
		}
        case 3 : {
        if (ascending == true) {
            cout << "\n\nPembelian sejumlah 1000 diamond\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[2].namagame << "," << id << "," << data[2].diamond << "," << data[2].harga << endl;
            system("pause");
        } else {
            cout << "\n\nPembelian sejumlah 100 diamond\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[0].namagame << "," << id << "," << data[0].diamond << "," << data[0].harga << endl;
            system("pause");
        }
        break;
		}
        case 4 : 
        cout << "\nPembelian di batalkan!";
        system("pause");
        break;
		
        case 5 : 
        if (ascending == true) { mobilelegend(false, id);}
        else if (ascending == false) {mobilelegend(true, id);}
        break;
    };
}

void lihatlist () {
    int pil;
    system("cls");
    cout << "===== List Game =====\n1. Mobile Legend\n2. Free Fire\n3. PUBG Mobile\nMasukkan angka untuk melihat paket masing masing game = "; cin >> pil;
    switch (pil) {
        case 1 :
        mobilelegend(true, -1);
        break;
        case 2 :
        break;
        case 3 :
        break;
    };
}

int main () {
    int pil;
    do
    {
    system("cls");
    cout << "Veteran Top up Store\n===== MENU =====\n1. Lihat List Semua Game\n2. Cari Paket Berdasarkan Harga\n3. Lihat Riwayat Pembelian\n4. Exit\nMasukkan Pilihan : "; cin >> pil;
    switch (pil) {
        case 1 :
        system("cls");
        lihatlist();
        break;
        case 2 :

        break;
        case 3 :

        break;
        case 4 :
        cout << "Terimakasih, sampai jumpa lagi di pembelian selanjutnya\n";
        system("pause");
        break;
        default :
        cout << "Tidak Valid!\n";
        system("pause");
    }
    } while(pil != 4);
}
