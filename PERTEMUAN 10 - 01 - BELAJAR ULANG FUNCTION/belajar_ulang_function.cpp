#include <iostream>
using namespace std;

int tambah(int a, int b) {
  return a + b;
}

int kurang(int a, int b) {
  return a - b;
}

void kalkulator(int a, int b) {
  cout << "Hasil tambah: " << tambah(a, b) << endl;
  cout << "Hasil kurang: " << kurang(a, b) << endl;
}

int main() {
  cout << "Hasil!" << endl;
  kalkulator(7, 5);

  cin.get();
  return 0;
}