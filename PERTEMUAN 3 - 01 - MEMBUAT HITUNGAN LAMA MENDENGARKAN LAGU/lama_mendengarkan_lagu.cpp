// Program hitung berapa lama kamu mendengarkan 3 lagu favorit kamu di hari ini

#include <iostream>
#include <string>

using namespace std;

int main() {
  string namaLagu1;
  string namaLagu2;
  string namaLagu3;
  float durasiLagu;
  int jumlahPutar;
  float totalWaktuLagu1, totalWaktuLagu2, totalWaktuLagu3;

  cout << "=== LAGU PERTAMA ===" << endl;
  cout << "Masukan nama lagu ke-1: ";
  getline(cin, namaLagu1);
  cout << "Masukan durasi lagu: ";
  cin >> durasiLagu;
  cout << "Masukan jumlah putar: ";
  cin >> jumlahPutar;
  
  totalWaktuLagu1 = durasiLagu * jumlahPutar;
  cout << "Total waktu mendengarkan lagu " << namaLagu1 << ": " << totalWaktuLagu1 << " Menit / " << totalWaktuLagu1 / 60 << " Jam" << endl;
  
  cin.ignore();
  cout << "\n\n === LAGU KE 2 ===" << endl;
  cout << "Masukan nama lagu ke-2: ";
  getline(cin, namaLagu2);
  cout << "Masukan durasi lagu: ";
  cin >> durasiLagu;
  cout << "Masukan jumlah putar: ";
  cin >> jumlahPutar;
  
  totalWaktuLagu2 = durasiLagu * jumlahPutar;
  cout << "Total waktu mendengarkan lagu " << namaLagu2 << ": " << totalWaktuLagu2 << " Menit / " << totalWaktuLagu2 / 60 << " Jam" << endl;
  
  cin.ignore();
  cout << "\n\n === LAGU KE 3 ===" << endl;
  cout << "Masukan nama lagu ke-3: ";
  getline(cin, namaLagu3);
  cout << "Masukan durasi lagu: ";
  cin >> durasiLagu;
  cout << "Masukan jumlah putar: ";
  cin >> jumlahPutar;
  
  totalWaktuLagu3 = durasiLagu * jumlahPutar;
  cout << "Total waktu mendengarkan lagu " << namaLagu3 << ": " << totalWaktuLagu3 << " Menit / " << totalWaktuLagu3 / 60 << " Jam" << endl;

  cout << "\n\n === TOTAL LAMA MENDENGARKAN 3 LAGU FAVORIT ===" << endl;
  cout << namaLagu1 << ": " << totalWaktuLagu1 << " Menit / " << totalWaktuLagu1 / 60 << " Jam" << endl;
  cout << namaLagu2 << ": " << totalWaktuLagu2 << " Menit / " << totalWaktuLagu2 / 60 << " Jam" << endl;
  cout << namaLagu3 << ": " << totalWaktuLagu3 << " Menit / " << totalWaktuLagu3 / 60 << " Jam" << endl;
  cout << "Total mendengarkan dari 3 lagu: " << totalWaktuLagu1 + totalWaktuLagu2 + totalWaktuLagu3 << " Menit / " << (totalWaktuLagu1 / 60) + (totalWaktuLagu2 / 60) + (totalWaktuLagu3 / 60) << " Jam" << endl;

  cin.get();
  return 0;
}