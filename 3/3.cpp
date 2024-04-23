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

   