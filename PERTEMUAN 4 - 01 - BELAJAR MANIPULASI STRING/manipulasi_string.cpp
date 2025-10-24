#include <iostream>

using namespace std;

int main() {
  string kalimat = "Belajar c++ itu menyenangkan";

  cout << "Kalimat: " << kalimat << endl;

  // Menghitung panjang sebuah string menggunakan - .lenght()/.size()
  cout << "Panjang kalimat: " << kalimat.length() << endl;
  // Ambil beberapa kata/kalimat dari string - menggunakan .substr()
  cout << "Ambil kata depan: " << kalimat.substr(0, 7) << endl;
  // Ambil kata menyenangkan
  cout << "Ambil kata 'menyenangkan': " << kalimat.substr(16, 12) << endl;
  // Tambah di akhir string - menggunakan .append()
  kalimat.append(" banget!");
  cout << "Setelah append: " << kalimat << endl;
  // Mengganti kalimat - menggunakan .replace()
  kalimat.replace(15, 13, " menyeramkan");
  cout << "Setelah replace: " << kalimat << endl;
  // Menghapus kalimat - menggunakan .erase()
  kalimat.erase(0, 8);
  cout << "Setelah erase: " << kalimat << endl;
  // Mencari urutan kata c++ - menggunakan .find()
  cout << "Cari urutan kata c++: " << kalimat.find("c++") << endl;

  cin.get();
  return 0;
}