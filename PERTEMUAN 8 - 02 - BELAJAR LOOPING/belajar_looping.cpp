#include <iostream>

using namespace std;

int main() {
  cout << "--------------- PERULANGAN FOR ---------------" << endl;
  // Perulangan FOR
  for(int i = 5; i >= 0; i--) {
    cout << i << " ";
  }

  cout << endl;
  
  for(int i = 0; i <= 5; i++) {
    cout << i << " ";
  }

  cout << "\n--------------- MEMBUAT PERULANGAN FOR BINTANG 1 ---------------" << endl;
  for(int i = 0; i <= 5; i++) {
    cout << "*" << endl;
  }

  cout << "\n--------------- MEMBUAT PERULANGAN FOR BINTANG 2 ---------------" << endl;
  // *
  // **
  // ***
  // ****
  // *****
  for(int i = 1; i <= 5; i++) {
    for(int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "------" << endl;

  // *****
  // ****
  // ***
  // **
  // *
  for(int i = 1; i <= 5; i++) {
    for(int j = 5; j >= i; j--) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "\n--------------- MEMBUAT PERULANGAN FOR ANGKA URUT ---------------" << endl;
  for(int i = 1; i <= 5; i++) {
    for(int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }

  cout << "\n--------------- PERULANGAN FOR BREAK ---------------" << endl;
  for(int i = 0; i <= 100; i++) {
    if(i == 11) break;
    cout << i << " ";
  }

  cout << "\n\n--------------- PERULANGAN FOR CONTINUE ---------------" << endl;
  for(int i = 0; i <= 50; i++) {
    if(i == 11) continue;
    cout << i << " ";
  }
  
  cout << "\n\n--------------- TUGAS ---------------" << endl;
  // 1234
  // 1234
  // 1234
  // 1234
  for(int i = 1; i <= 4; i++) {
    for(int j = 1; j <= 4; j++) {
      cout << j;
    }
    cout << endl;
  }

  // cout << "\n--------------- PERULANGAN WHILE ---------------" << endl;
  // // Perulangan WHILE
  // int x;
  // cout << "Masukan angka 1-10: ";
  // cin >> x;
  
  // while (x <= 1 || x >= 10) {
  //   cout << "Angka salah, cobalagi!: ";
  //   cin >> x;
  // }
  
  // cout << "Angka Benar!" << endl;

  cin.get();
  return 0;
}