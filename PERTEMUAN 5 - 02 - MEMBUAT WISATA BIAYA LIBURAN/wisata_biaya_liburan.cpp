// Mochamad Sugiana Saepul | 2503010087
// Teknik Informatika D.25
#include <iostream>
#include <cctype>

using namespace std;

int main() {
  float durasi_perjalanan;
  int biaya_harian, biaya_transportasi;
  string nama_destinasi;
  char kode_promo;

  cout << "===== INPUT =====" << endl;
  cout << "Masukan nama destinasi: ";
  getline(cin, nama_destinasi);
  cout << "Masukan durasi perjalanan (hari): ";
  cin >> durasi_perjalanan;
  cout << "Masukan biaya harian: ";
  cin >> biaya_harian;
  cout << "Masukan biaya transportasi: ";
  cin >> biaya_transportasi;
  cout << "Masukan kode promo: ";
  cin >> kode_promo;

  int biaya_akomodasi = biaya_harian * durasi_perjalanan;
  int subtotal = biaya_akomodasi + biaya_transportasi;

  cout << "\n===== OUTPUT =====" << endl;
  cout << "Biaya paket liburan ke " << nama_destinasi << " dengan kode promo " << static_cast<char>(tolower(kode_promo)) << ": Rp." << subtotal << endl;

  cin.get();
  return 0;
}