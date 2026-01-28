// Mochamad Sugiana Saepul - 2503010087

#include <iostream>
using namespace std;

// Fungsi untuk menginputkan harga barang dan menghitung total belanja
int hitungTotalBelanja() {
  int jumlah_barang;
  cout << "Masukan jumlah barang: ";
  cin >> jumlah_barang;

  int harga, total = 0;
  for(int i = 1; i <= jumlah_barang; i++) {
    cout << "Harga barang ke-" << i << ": Rp.";
    cin >> harga;
    total += harga;
  }
  
  return total;
}

// Fungsi untuk menghitung diskon
int hitungDiskon(int total_belanja) {
  float diskon = 0;

  if(total_belanja >= 500000) {
    diskon = 15;
  } else if(total_belanja >= 350000 ) {
    diskon = 10;
  } else if(total_belanja >= 200000) {
    diskon = 5;
  }

  int total_potongan = total_belanja * diskon / 100;
  int subtotal = total_belanja - total_potongan;

  return subtotal;
}

// Fungsi menampilkan struk belanja
void strukBelanja(string nama, int total_belanja, int subtotal) {
  float diskon = 0;

  if(total_belanja >= 500000) {
    diskon = 15;
  } else if(total_belanja >= 350000 ) {
    diskon = 10;
  } else if(total_belanja >= 200000) {
    diskon = 5;
  }

  cout << "\n===== STRUK BELANJA SUGIH-MART =====\n";
  cout << "Nama: " << nama << endl;
  cout << "Total belanja: Rp." << total_belanja << endl;
  cout << "Diskon: " << diskon << "%" << endl;
  cout << "Subtotal: Rp." << subtotal << endl;
  cout << "====================================" << endl;
}

int main() {
  string nama;
  cout << "Masukan nama pelanggan: ";
  getline(cin, nama);

  int total_belanja = hitungTotalBelanja();
  int subtotal = hitungDiskon(total_belanja);
  strukBelanja(nama, total_belanja, subtotal);

  cin.get();
  return 0;
}