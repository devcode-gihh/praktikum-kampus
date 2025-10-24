#include <iostream>

using namespace std;

int main() {
    cout << "\n--- LATIHAN 1 ---" << endl;
  string inputKalimat;
  cout << "Masukan kalimat: ";
  getline(cin, inputKalimat);

  cout << "Panjang kalimat: " << inputKalimat.length() << endl;
  cout << "Lima huruf pertama: " << inputKalimat.substr(0, 5) << endl;
  cout << "Lima huruf terakhir: " << inputKalimat.substr(inputKalimat.length() - 5) << endl;

  cout << "\n--- LATIHAN 2 ---" << endl;
  string kalimat = "Saya suka makan bakso";

  cout << "Kalimat: " << kalimat << endl;
  cout << "Cari kata 'bakso': " << kalimat.substr(16, 22) << endl;
  cout << "Ganti dengan 'mie ayam': " << kalimat.replace(16, 22, "mie ayam") << endl;
  cout << "hasil: " << kalimat << endl;

  cin.get();
  return 0;
}