#include <iostream>
using namespace std;

int jumlahDataNilai() {
  int jumlah_data_nilai;
  cout << "Masukan jumlah data nilai: ";
  cin >> jumlah_data_nilai;

  int nilai, tertinggi, terendah, total_nilai = 0;
  string nama_matkul;
  for(int i = 1; i <= jumlah_data_nilai; i++) {
    cin.ignore();
    cout << "Mata kuliah" << ": ";
    getline(cin, nama_matkul);

    cout << "Nilai: ";
    cin >> nilai;

    // Mencari nilai tertinggi/terendah
    if (i == 1) {
      tertinggi = nilai;
      terendah = nilai;
    } else {
      if(nilai > tertinggi) {
        tertinggi = nilai;
      } 
      if(nilai < terendah) {
        terendah = nilai;
      }
    }

    // Mencari grade
    if(nilai >= 85) {
      cout << "Grade = A" << endl << endl;
    } else if(nilai >= 75) {
      cout << "Grade = B" << endl << endl;
    } else if(nilai >= 60) {
      cout << "Grade = C" << endl << endl;
    } else if(nilai >= 50) {
      cout << "Grade = D" << endl << endl;
    } else {
      cout << "Grade = E" << endl << endl;
    }

    total_nilai += nilai;
  }

  // hitung rata-rata nilai
  float rata_rata_nilai = (float) total_nilai / jumlah_data_nilai;

  cout << "=====================" << endl;
  cout << "Total nilai = " << total_nilai << endl;
  cout << "Rata-rata nilai = " << rata_rata_nilai << endl;
  cout << "Nilai tertinggi = " << tertinggi << endl;
  cout << "Nilai terendah = " << terendah << endl;
  cout << "=====================" << endl;

  return total_nilai;
}

int main() {
  string nama;
  cout << "Nama mahasiswa: ";
  getline(cin, nama);

  jumlahDataNilai();

  cin.get();
  return 0;
}