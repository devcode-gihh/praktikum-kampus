// Mochamad Sugiana Saepul - 2503010087

#include <iostream>
using namespace std;

int penjumlahan(int nilai1, int nilai2) {
  int jumlahkan = nilai1 + nilai2;
  return jumlahkan;
}

int luasPersegiPanjang(int nilaiP, int nilaiL) {
  int hitung = nilaiP * nilaiL;
  return hitung;
}

int main() {

  cout << "MEMBUAT PENJUMLAHAN DAN PERHITUNGAN PERSEGI LEWAT FUNCTION RETURN" << endl;
  cout << "=================================================================" << endl;
  cout << "TANPA INPUT" << endl;
  
  cout << "Hasil penjumlahan (3+5): " << penjumlahan(3, 5) << endl;
  cout << "Hasil hitung persegi panjang (5*7): " << luasPersegiPanjang(5, 7) << endl;
  cout << "=================================================================" << endl << endl;
  
  cout << "=================================================================" << endl;
  cout << "DENGAN INPUT" << endl;
  int nilai1, nilai2, nilaiP, nilaiL;
  cout << "PENJUMLAHAN" << endl;
  cout << "Masukan nilai ke-1: ";
  cin >> nilai1;
  cout << "Masukan nilai ke-2: ";
  cin >> nilai2;
  
  cout << "Hasil penjumlahan: " << penjumlahan(nilai1, nilai2) << endl << endl;
  
  cout << "HITUNG PERSEGI PANJANG" << endl;
  cout << "Masukan nilai P: ";
  cin >> nilaiP;
  cout << "Masukan nilai L: ";
  cin >> nilaiL;
  
  cout << "Hasil hitung persegi panjang: " << luasPersegiPanjang(nilaiP, nilaiL) << endl;
  cout << "=================================================================" << endl;

  cin.get();
  return 0;
}