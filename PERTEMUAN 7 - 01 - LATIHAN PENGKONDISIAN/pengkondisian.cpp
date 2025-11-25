#include <iostream>
#include <string>

using namespace std;

int main() {
  string username, password;

  cout << "===== MASUKAN AKUN ANDA =====" << endl;

  cout << "Masukan Username: ";
  getline(cin, username);
  cout << "Masukan Password: ";
  getline(cin, password);

  if (username == "admin") {
    if (password == "admin123") {
      cout << "Login Berhasil!" << endl << endl;

      cout << "===== CEK NILAI MAHASISWA =====" << endl;
      string nama_mahasiswa, nim, prodi, nilai_akhir;
      int nilai;

      cout << "Masukan Nama: ";
      getline(cin, nama_mahasiswa);
      cout << "Masukan NIM: ";
      getline(cin, nim);
      cout << "Masukan Program Studi: ";
      getline(cin, prodi);
      cout << "Masukan Nilai: ";
      cin >> nilai;

      if (nilai >= 95) {
        nilai_akhir = "A+";
      } else if (nilai >= 90) {
        nilai_akhir = "A";
      } else if (nilai >= 85) {
        nilai_akhir = "B+";
      } else if (nilai >= 80) {
        nilai_akhir = "B";
      } else if (nilai >= 75) {
        nilai_akhir = "C";
      } else if (nilai >= 70) {
        nilai_akhir = "D";
      } else {
        nilai_akhir = "E";
      }

      cout << "\n===== HASIL CEK NILAI MAHASISWA =====" << endl;
      cout << "Nama: " << nama_mahasiswa << endl;
      cout << "NIM: " << nim << endl;
      cout << "Program Studi: " << nama_mahasiswa << endl;
      cout << "Nilai Mahasiswa: " << nilai << " / " << nilai_akhir << endl;

    } else {
      cout << "Username / Password Salah!" << endl;
    }
  } else {
    cout << "Username / Password Salah!" << endl;
  }

  cin.get();
  return 0;
}