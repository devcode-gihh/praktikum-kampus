// Perhitungan untuk tagihan PLN
// Pelanggan itu bisa melihat total tagihan listrik

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
  string id_pelanggan, nama_pelanggan;
  int golongan, daya, pemakaian;

  cout << "=== INPUT ===" << endl;

  cout << "Masukan ID Pelanggan: ";
  getline(cin, id_pelanggan);
  cout << "Masukan Nama Pelanggan: ";
  getline(cin, nama_pelanggan);
  cout << "Masukan Golongan (1/2): ";
  cin >> golongan;
  cout << "Masukan Daya (900/1200/2100): ";
  cin >> daya;
  cout << "Masukan Pemakaian (1-60): ";
  cin >> pemakaian;
  
  // Variabel baru
  int tarif, total;

  // Rumus hitung
  tarif = (golongan == 1 ? 1000:1500);
  total = (daya * tarif) + (pemakaian * 1350);

  cout << "\n=== OUTPUT ===" << endl;

  cout << "ID Pelanggan: " << id_pelanggan.substr(0, 4) << "-" << id_pelanggan.substr(id_pelanggan.length() - 4) << endl;
  cout << "Nama Pelanggan: " << nama_pelanggan << endl;
  cout << "Tarif: " << tarif << endl;
  cout << "Total: Rp." << total << endl;

  cin.get();
  return 0;
}