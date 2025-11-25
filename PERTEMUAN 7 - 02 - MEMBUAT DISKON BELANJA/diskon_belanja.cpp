#include <iostream>
#include <string>

using namespace std;

int main() {
  string nama_pelanggan, member;
  int total_belanja;

  cout << "===== UGIHMART =====" << endl;
  cout << "Masukan Nama Pelanggan: ";
  getline(cin, nama_pelanggan);
  cout << "Member (ya/tidak): ";
  getline(cin, member);
  cout << "Total Belanja: ";
  cin >> total_belanja;

  float diskon;

  if (total_belanja >= 500000) {
    diskon = 0.2;
  } else if (total_belanja >= 300000) {
    diskon = 0.1;
  } else if (total_belanja >= 100000) {
    diskon = 0.05;
  } else {
    diskon = 0;
  }

  float diskon_member;

  if (member == "ya") {
    diskon_member = 0.05;
  } else {
    diskon_member = 0;
  } 

  float total_diskon = diskon + diskon_member;
  int total_bayar = total_belanja - (total_belanja * total_diskon);

  cout << "\n===== RINCIAN BELANJA =====" << endl;
  cout << "Nama: " << nama_pelanggan << endl;
  cout << "Total Belanja: Rp." << total_belanja << endl;
  cout << "Diskon Belanja: " << total_diskon * 100 << "%" << endl;
  cout << "Subtotal: Rp." << total_bayar << endl;

  cin.get();
  return 0;
}