// Hitung keliling persegi panjang

#include <iostream>
#include <string>

using namespace std;

int main() {
  int panjang, lebar;

  cout << "=== INPUT ===" << endl;
  cout << "Masukan Panjang Persegi: ";
  cin >> panjang;
  cout << "Masukan Lebar Persegi: ";
  cin >> lebar;

  cout << "\n=== OUTPUT ===" << endl;
  cout << "Keliling persegi panjang adalah: " << 2 * (panjang + lebar);

  cin.get();
  return 0;
}