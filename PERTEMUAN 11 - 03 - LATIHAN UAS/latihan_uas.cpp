#include <iostream>
using namespace std;

void cekNilai(int nilai) {
  if(nilai >= 90) {
    cout << "Sangat Bagus" << endl;
  } else if(nilai >= 80) {
    cout << "Bagus" << endl;
  } else if(nilai >= 70) {
    cout << "Cukup Bagus" << endl;
  } else if(nilai >= 60) {
    cout << "Kurang" << endl;
  } else {
    cout << "Belajar Lagi" << endl;
  }
}

int main() {
  int nilai;
  cout << "Masukan nilai: ";
  cin >> nilai;

  cekNilai(nilai);

  cin.get();
  return 0;
}