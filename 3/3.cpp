#include <iostream>
using namespace std;

class BangunDatar {
private:
    
    float panjang, lebar;

public:
    
    BangunDatar() {}

    
    void setPanjang(float panjang) {
        this->panjang = panjang;
    }

    void setLebar(float lebar) {
        this->lebar = lebar;
    }

    
    float getPanjang() const {
        return panjang;
    }

    float getLebar() const {
        return lebar;
    }

    
    float hitungLuas() const {
        return panjang * lebar;
    }

    
    void display() const {
        cout << "Panjang: " << panjang << endl;
        cout << "Lebar: " << lebar << endl;
        cout << "Luas: " << hitungLuas() << endl;
    }
};

