#include <bits/stdc++.h>
#include "DanhSach.cpp"

#ifndef __APP__
#define __APP__

using namespace std;

class App{
private:
    DanhSach dsOto;
public:
    void menu () {
        bool hanh_dong = true;
        dsOto.nhap_dsach();
        cout << "\nDanh sach oto tren la:\n";
        dsOto.xuat_dsach();
        int hdLap = -1;
        while (hanh_dong) {
            cout << "\n************ Menu Quan Ly OTo ************\n";
            cout << "1 ---- SAP XEP DANH SACH OTO THEO NAM SAN XUAT\n";
            cout << "2 ---- OTO DOI MOI NHAT\n";
            cout << "3 ---- OTO LAU DOI NHAT\n";
            cout << "4 ---- TIM OTO THEO BIEN SO\n";
            cout << "5 ---- THEM OTO VAO DANH SACH\n";
            cout << "6 ---- XOA OTO BANG BIEN SO\n";
            cout << "0 ---- KET THUC CHUONG TRINH!!!!\n";
            cout << "LUA CHON TUONG UNG: ";

            int lua_chon;
            cin >> lua_chon;
            if (lua_chon == 1) {
                if (hdLap == 1) {
                    cout << "\nBan da sap xep danh sach oto tren roi ^^\n";
                } else {
                    dsOto.SapXep();
                    cout << "\nDanh sach sau khi sap xep la:\n";
                    dsOto.xuat_dsach();
                    hdLap = 1;
                }
                
            } else if (lua_chon == 2) {
                Quan_Ly moi_nhat = dsOto.Oto_moi();
                cout << "\nOto moi nhat la:\n" << moi_nhat << endl;
            } else if (lua_chon == 3) {
                Quan_Ly cu_nhat = dsOto.Oto_cu();
                cout << "\nOto lau doi nhat la:\n" << cu_nhat << endl;
            } else if (lua_chon == 4) {
                string bienSo;
                cout << "\nNhap bien so can tim: ";
                cin >> bienSo;
                dsOto.tim_Oto(bienSo);
            } else if (lua_chon == 5) {
                Quan_Ly them;
                cout << "\nNhap thong tin oto moi:\n";
                cin >> them;
                dsOto.them_Oto(them);
                cout << "\nDa them!";
                hdLap = -1;
            } else if (lua_chon == 6) {
                string xoa;
                cout << "\nNhap bien so oto can xoa: ";
                cin >> xoa;
                dsOto.xoa_Oto(xoa);
                cout << "\nDanh sach sau khi xoa:\n";
                dsOto.xuat_dsach();
                hdLap = -1;
            } else if (lua_chon == 0) {
                cout << "\nKet thuc chuong trinh !!!!";
                hanh_dong = false;
            } else {
                cout << "\nLUA CHON KHONG HOP LE @@. VUI LONG NHAP LAI!\n";
            }
        }
    }
};
#endif