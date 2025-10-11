#include <iostream>

using namespace std;

int main() {
  int inputJam;
  cout << "=== MENGHITUNG JAM KE MENIT ===" << endl;
  cout << "Masukan jam: ";
  cin >> inputJam;
  cout << inputJam << " Jam = " << inputJam * 60 << " Menit" << endl;

  cin.get();
  return 0;
}