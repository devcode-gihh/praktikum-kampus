// Mochamad Sugiana Saepul | 2503010087
// Teknik Informatika D.25
#include <iostream>

using namespace std;

int main() {
  string judul_buku, nama_depan, nama_belakang, nama_lengkap;
  int tahun_terbit;

  cout << "====== INPUT =====" << endl;
  cout << "Masukan judul buku: ";
  getline(cin, judul_buku);
  cout << "Masukan nama depang penerbit: ";
  getline(cin, nama_depan);
  cout << "Masukan nama belakang penerbit: ";
  getline(cin, nama_belakang);
  cout << "Masukan tahun terbit: ";
  cin >> tahun_terbit;

  nama_lengkap = nama_depan + " " + nama_belakang;

  cout << "\n===== OUTPUT =====" << endl;
  cout << "Informasi buku: " << judul_buku << " oleh " << nama_lengkap << " (" << tahun_terbit << ")" << endl;

  cin.get();
  return 0;
}