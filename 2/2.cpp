#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nama;
    int umur;
    string jurusan;

    void output() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
    }
};

class Matakuliah {
private:
    string kodeMk;
    string namaMk;
public:
    int sks;

    void input() {
        cout << "Kode MK: ";
        cin >> kodeMk;
        cout << "Nama MK: ";
        cin >> namaMk;
        cout << "SKS: ";
        cin >> sks;
    }
};

int main() {
    Mahasiswa mhs;
    Matakuliah mk;

    mhs.nama = "Budi";
    mhs.umur = 20;
    mhs.jurusan = "Teknik Informatika";

    mhs.output();

    mk.input();
    mk.output();

    return 0;
}