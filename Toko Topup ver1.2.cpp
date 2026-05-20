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
        int no = 1;
        for (int i = 2; i >= 0; i--) {
        cout << left
             << setw(5)  << no++ 
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

void freefire(bool ascending, int id) {
    system("cls");
    int pil;
    if (id == -1) {
    cout << "=== Free Fire ===\n";
    cout << "Masukkan id akun Free Fire = "; cin >> id;
    system("cls");
    }
    cout << "=== Free Fire ===\n\n";

    cout << left
         << setw(5)  << "No"
         << setw(15) << "Diamond"
         << setw(10) << "Harga"
         << endl;

    cout << "--------------------------------\n";
    if (ascending == true) {
    int no = 1;
    for (int i = 3; i < 5; i++) {
        cout << left
             << setw(5)  << no++
             << setw(15) << data[i].diamond
             << setw(10) << data[i].harga
             << endl;
        }
    }  else {
        int no = 1;
        for (int i = 5; i >= 3; i--) {
        cout << left
             << setw(5)  << no++
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
            file << data[3].namagame << "," << id << "," << data[3].diamond << "," << data[3].harga << endl;
            system("pause");
        } else {
            cout << "\n\nPembelian sejumlah 1200 diamond\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[5].namagame << "," << id << "," << data[5].diamond << "," << data[5].harga << endl;
            system("pause");
        }
        break;
		}
        case 2 : {
            cout << "\n\nPembelian sejumlah 550 diamond\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[4].namagame << "," << id << "," << data[4].diamond << "," << data[4].harga << endl;
            system("pause");
        break;
		}
        case 3 : {
        if (ascending == true) {
            cout << "\n\nPembelian sejumlah 1200 diamond\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[5].namagame << "," << id << "," << data[5].diamond << "," << data[5].harga << endl;
            system("pause");
        } else {
            cout << "\n\nPembelian sejumlah 100 diamond\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[3].namagame << "," << id << "," << data[3].diamond << "," << data[3].harga << endl;
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

void pubg(bool ascending, int id) {
    system("cls");
    int pil;
    if (id == -1) {
    cout << "=== PUBG Mobile ===\n";
    cout << "Masukkan id akun PUBG Mobile = "; cin >> id;
    system("cls");
    }
    cout << "=== PUBG Mobile ===\n\n";

    cout << left
         << setw(5)  << "No"
         << setw(15) << "UC"
         << setw(10) << "Harga"
         << endl;

    cout << "--------------------------------\n";
    if (ascending == true) {
    int no = 1;
    for (int i = 6; i <= 8; i++) {
        cout << left
             << setw(5)  << no++
             << setw(15) << data[i].diamond
             << setw(10) << data[i].harga
             << endl;
        }
    }  else {
        int no = 1;
        for (int i = 8; i >= 6; i--) {
        cout << left
             << setw(5)  << no++
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
            cout << "\n\nPembelian sejumlah 50 UC\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[6].namagame << "," << id << "," << data[6].diamond << "," << data[6].harga << endl;
            system("pause");
        } else {
            cout << "\n\nPembelian sejumlah 1800 UC\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[8].namagame << "," << id << "," << data[8].diamond << "," << data[8].harga << endl;
            system("pause");
        }
        break;
		}
        case 2 : {
            cout << "\n\nPembelian sejumlah 500 UC\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[7].namagame << "," << id << "," << data[7].diamond << "," << data[7].harga << endl;
            system("pause");
        break;
		}
        case 3 : {
        if (ascending == true) {
            cout << "\n\nPembelian sejumlah 1800 UC\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[8].namagame << "," << id << "," << data[8].diamond << "," << data[8].harga << endl;
            system("pause");
        } else {
            cout << "\n\nPembelian sejumlah 50 UC\n Status : Berhasil\n";
            ofstream file("riwayat.csv", ios::app);
            file << data[6].namagame << "," << id << "," << data[6].diamond << "," << data[6].harga << endl;
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
        freefire(true, -1);
        break;
        case 3 :
        pubg(true, -1);
        break;
    };
}

void cari(){
    string keyword;
    system("cls");

    cout << "=== Cari berdasarkan nama game ===\n";
    cout << "Masukkan nama game : \n";
    cin.ignore();
    getline(cin, keyword);

    if(keyword == "Mobile Legend" || keyword == "mobile legend" || keyword == "MOBILE LEGEND"){
        mobilelegend(true, -1);
    }else if(keyword == "FREE FIRE" || keyword == "Free Fire" || keyword == "free fire"){
        freefire(true, -1);
    }else if(keyword == "PUBG" || keyword == "Pubg" || keyword == "pubg"){
        pubg(true, -1);
    }else {
         cout << "Data Tidak Ditemukan"; 
         system("pause");
    }
        

}

void history(){
    cout << "===== Riwayat Pembelian ====\n";
    ifstream file("riwayat.csv");

    if(!file.is_open()){
        cout << "Belum ada riwayat pembelian.\n";
        system("pause");
        return;
    }

    string riw;
    int no = 1;
    bool kondisi = false;

    cout << left
         << setw(5)  << "No"
         << setw(20) << "Game"
         << setw(15) << "ID Akun"
         << setw(15) << "Diamond/UC"
         << setw(10) << "Harga"
         << endl;
    cout << "-------------------------------------------------------\n";

    while (getline(file, riw)){
        if (riw.empty()) continue;
        string cols[4];
        int col = 0;
        string temp = "";
    
        for (char c : riw) {
            if (c == ',') {
                cols[col++] = temp;
                temp = "";
            } else {
                temp += c;
            }
        }
        cols[col] = temp;
    
                cout << left
             << setw(5)  << no++
             << setw(20) << cols[0]
             << setw(15) << cols[1]
             << setw(15) << cols[2]
             << setw(10) << cols[3]
             << endl;
    
        kondisi = true;
    }

    file.close();

    if(!kondisi){
        cout << "Belum ada riwayat pembelian.\n";
    }

    cout << endl;
    system("pause");

}

int main () {
    int pil;
    do
    {
    system("cls");
    cout << "Veteran Top up Store\n===== MENU =====\n1. Lihat List Semua Game\n2. Cari Game\n3. Lihat Riwayat Pembelian\n4. Exit\nMasukkan Pilihan : "; cin >> pil;
    switch (pil) {
        case 1 : // cari game
        system("cls");
        lihatlist();
        break;
        case 2 : // searching
        cari();
        break;
        case 3 : // history
        history();
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