#include <iostream>

using namespace std;

int main() {
  int tahunLahir;
  int tahunCek;
  int hasil;

  cout << "Masukan tahun lahir anda: ";
  cin >> tahunLahir;
  cout << "Masukan tahun yang ingin dicek: ";
  cin >> tahunCek;
  hasil = tahunCek - tahunLahir;

  cout << "Ketika anda lahir di tahun " << tahunLahir << ", maka pada tahun " << tahunCek << ", anda berusia = " << hasil << " Tahun" << endl;

  cin.get();
  return 0;
}