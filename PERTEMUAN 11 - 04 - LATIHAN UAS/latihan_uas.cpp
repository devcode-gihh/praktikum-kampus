#include <iostream>
using namespace std;

int main() {
  // Perulangan FOR
  cout << "BILANGAN GENAP FOR V1" << endl;
  for(int i = 0; i <= 10; i += 2) {
    cout << i << " ";
  }
  
  cout << "\n\nBILANGAN GENAP FOR V2" << endl;
  for(int i = 0; i <= 10; i++) {
    if(i % 2 == 0) {
      cout << i << " ";
    }
  }
  
  // Perulangan WHILE
  cout << "\n\nBILANGAN GENAP WHILE V1" << endl;
  int x = 0;
  while (x <= 10) {
    cout << x << " ";
    x += 2;
  }

  cout << "\n\nBILANGAN GENAP WHILE V2" << endl;
  int y = 0;
  while (y <= 10) {
    if(y % 2 == 0) {
      cout << y << " ";
    }
    y++;
  }

  cin.get();
  return 0;
}