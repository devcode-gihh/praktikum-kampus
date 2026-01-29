#include <iostream>
using namespace std;

void belajar(int &energi, int &nilai) {
  energi -= 10;
  nilai += 10;
  cout << "Belajar Materi Algoritma...";
}

void makan(int &energi) {
    energi += 15;
  cout << "Makan Ayam Goreng...";
}

void nongkrong(int &energi, int &nilai) {
    energi += 10;
    nilai -= 15;
  cout << "Nongkron...";
}

void kuliah(int &energi, int &nilai) {
  energi -= 25;
  nilai += 15;
  cout << "Masuk Perkuliahan...";
}

void ujian(int &energi, int &nilai) {
  if(energi >= 40) {
    energi -= 30;
    nilai += 40;
  } else {
    energi -= 20;
    nilai += 25;
  }
  cout << "Melakukan ujian...";
}

void tampilMenu(string nama, int &energi, int &nilai) {
  if(energi >= 100) {
    energi = 100;
  }

  if(energi <= 0) {
    energi = 0;
  }

  if(nilai >= 100) {
    nilai = 100;
  }

  if(nilai <= 0) {
    nilai = 0;
  }

  cout << "\n\n====== Aktivitas Harian ======" << endl;
  cout << "Nama   : " << nama << endl;
  cout << "Energi : " << energi << endl;
  cout << "Nilai : " << nilai << endl;
  cout << "\n1. Makan";
  cout << "\n2. Kuliah";
  cout << "\n3. Belajar";
  cout << "\n4. Ujian";
  cout << "\n5. Nongkrong";
  cout << "\n0. Aktivitas Selesai";
  cout << "\nPilihan: ";
}

void gameLoop(string nama, int &energi, int &nilai) {
  int pilihan;

  do {
    tampilMenu(nama, energi, nilai);
    cin >> pilihan;

    switch (pilihan) {
      case 1: 
        makan(energi); 
        break;
      case 2: 
        kuliah(energi, nilai); 
        break;
      case 3: 
        belajar(energi, nilai); 
        break;
      case 4: 
        ujian(energi, nilai); 
        break;
      case 5: 
        nongkrong(energi, nilai); 
        break;
      case 0:
        cout << "Sampai jumpa lagi!" << endl;
        break;
      default:
        cout << "Pilihan tidak valid!" << endl;
    }
  } while (pilihan !=0);
}

int main() {
  string nama = "Ugih";
  int energi = 100;
  int nilai = 0;
  gameLoop(nama, energi, nilai);

  cin.get();
  return 0;
}