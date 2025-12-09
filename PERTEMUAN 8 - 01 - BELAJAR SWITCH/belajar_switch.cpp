#include <iostream>

using namespace std;

int main() {
  int menu, harga;
  cout << "Pilih menu (1-3): ";
  cin >> menu;

  switch (menu) {
    case 1: {
      harga = 15000;
      cout << "Anda Memilih Nasi Goreng" << endl;
      cout << "Harga - Rp." << harga << endl;
      break;
    }
    case 2: {
      harga = 8000;
      cout << "Anda Memilih Es Campur" << endl;
      cout << "Harga - Rp." << harga << endl;
      break;
    }
    case 3: {
      harga = 13000;
      cout << "Anda Memilih Mie Ayam" << endl;
      cout << "Harga - Rp." << harga << endl;
      break;
    }
    default:
    cout << "Tidak ada pilihan!" << endl;
    break;
  }

  cin.get();
  return 0;
}