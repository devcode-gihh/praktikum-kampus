#include <iostream>
using namespace std;

int jumlahData() {
  int jumlah_mahasiswa, nilai, total_nilai = 0, nilai_tertinggi = -1, nilai_terendah = 101;
  string nama_mahasiswa;

  cout << "Jumlah Mahasiswa: ";
  cin >> jumlah_mahasiswa;
  cout << endl;

  for(int i = 1; i <= jumlah_mahasiswa; i++) {
    cin.ignore();
    // input nama
    cout << "Nama Mahasiswa: ";
    getline(cin, nama_mahasiswa);

    // input nilai
    cout << "Nilai Mahasiswa: ";
    cin >> nilai;

    // menentukan grade nilai
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

    // menentukan nilai tertinggi
    if(nilai >= nilai_tertinggi) {
      nilai_tertinggi = nilai;
    }

    // menentukan nilai terrendah
    if(nilai <= nilai_terendah) {
      nilai_terendah = nilai;
    }

    total_nilai += nilai;
  }

  // menentukan rata-rata nilai
  float rata_rata_nilai = (float) total_nilai / jumlah_mahasiswa;

  cout << "Total Nilai = " << total_nilai << endl;
  cout << "Rata-rata Nilai = " << rata_rata_nilai << endl;
  cout << "Nilai Tertinggi = " << nilai_tertinggi << endl;
  cout << "Nilai Terendah = " << nilai_terendah << endl;

  return total_nilai;
}

int main() {
  cout << "LATIHAN UAS PART 2" << endl;
  cout << "==================" << endl << endl;

  jumlahData();

  cin.get();
  return 0;
}