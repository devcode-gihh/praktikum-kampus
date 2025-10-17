// Hitung waktu tempuh perjalanan ke kampus

#include <iostream>
#include <string>

using namespace std;

int main() {
  double jarak;
  double kecepatan;
  double waktuTempuh;

  cout << "Masukan jarak rumah anda: ";
  cin >> jarak;
  cout << "Masukan kecepatan: ";
  cin >> kecepatan;
  
  cout << "=== PROSES ===" << endl;
  cout << "Jarak rumah ke kampus: " << jarak << "-KM" << endl;
  cout << "Kecepatan di jalan: " << kecepatan << "-KM/JAM" << endl;
  waktuTempuh = jarak / kecepatan;
  cout << "Waktu tempuh perjalanan ke kampusnya adalah " << waktuTempuh << " Jam / " << waktuTempuh * 60 << " Menit" << endl;

  cin.get();
  return 0;
}