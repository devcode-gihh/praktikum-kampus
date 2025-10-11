#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "=== BIODATA MANUAL ===" << endl;
  cout << "NIM: 25030100..." << endl;
  cout << "Nama: Mochamad Sugiana Saepul" << endl;
  cout << "Fakultas: Teknik" << endl;
  cout << "Program Studi: Teknik Informatika" << endl;
  cout << "Kelas: Teknik Informatika D.25" << endl << endl;

  int nim1 = 25030100;
  string nama1 = "Mochamad Sugiana Saepul";
  string fakultas1 = "Teknik";
  string prodi1 = "Teknik Informatika";
  string kelas1 = "Teknik Informatika D.25";
  cout << "=== BIODATA VARIABEL ===" << endl;
  cout << "NIM: " << nim1 << endl;
  cout << "Nama: " << nama1 << endl;
  cout << "Fakultas: " << fakultas1 << endl;
  cout << "Program Studi: " << prodi1 << endl;
  cout << "kelas: " << kelas1 << endl << endl;

  int nim;
  string nama;
  string fakultas;
  string prodi;
  string kelas;
  cout << "=== INPUT BIODATA ===" << endl;
  cout << "Masukan NIM anda: ";
  cin >> nim;
  
  cin.ignore(); // cin.ignore() -> membuang karakter \n bawaan cin
  cout << "Masukan nama anda: ";
  getline(cin, nama); // getline() -> untuk membaca seluruh baris input
  cout << "Masukan fakultas anda: ";
  getline(cin, fakultas);
  cout << "Masukan program studi anda: ";
  getline(cin, prodi);
  cout << "Masukan kelas anda: ";
  getline(cin, kelas);

  cout << "\n=== BIODATA INPUTAN ===" << endl;
  cout << "NIM: " << nim << endl;
  cout << "Nama anda: " << nama << endl;
  cout << "Fakultas anda: " << fakultas << endl;
  cout << "Program studi anda: " << prodi << endl;
  cout << "Kelas anda: " << kelas << endl;

  cin.get();
  return 0;
}