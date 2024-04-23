#include <iostream>
using namespace std;

class Mahasiswa {

public:
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "nama: " << nama << endl;
		cout << "umur: " << umur << endl;
		cout << "jurusan: " << jurusan << endl;
	}
};

class Matakuliah {
private:
	string kodeMK;
	string namaMK;
	int sks;
