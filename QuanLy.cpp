#include <bits/stdc++.h>
#ifndef __QUAN_LY__
#define __QUAN_LY__
using namespace std;

class Quan_Ly {
private:
    string bienSo;
    string tenOto;
    string hang;
    int namSX;
public:
    Quan_Ly (string bien = "", string ten = "", string hangxe = "", int nam = 0) : bienSo(bien), tenOto(ten), hang(hangxe), namSX(nam) {}
    friend istream& operator >> (istream& is, Quan_Ly& xe) {
        cout << "Nhap bien so oto: ";
        is >> xe.bienSo;
        cout << "Nhap ten oto: ";
        is.ignore();
        getline(is, xe.tenOto);
        cout << "Nhap hang san xuat oto: ";
        getline(is, xe.hang);
        cout << "Nhap nam san xuat oto: ";
        is >> xe.namSX;
        return is;
    }
    friend ostream& operator << (ostream& os, const Quan_Ly& xe) {
        os << "\nBien so oto: " << xe.bienSo << endl;
        os << "Ten xe oto: " << xe.tenOto << endl;
        os << "Hang xe oto: " << xe.hang << endl;
        os << "Nam san xuat oto: " << xe.namSX << endl;
        return os;
    }
    bool operator < (const Quan_Ly& xe) {
        return namSX < xe.namSX;
    }
    string getBienSo () const{
        return bienSo;
    }
    int getNamSX () {
        return namSX;
    }
};
#endif