#include <bits/stdc++.h>
#include "QuanLy.cpp"

#ifndef __DANH_SACH__
#define __DANH_SACH__

using namespace std;

class DanhSach {
private:
    list<Quan_Ly> ds;
public:
    void nhap_dsach() {
        int n;
        cout << "Nhap so oto: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            Quan_Ly xe;
            cout << "Nhap thong tin oto thu " << i + 1 << " !\n";
            cin >> xe; 
            them_Oto(xe);
        }
    }

    void xuat_dsach() {
        for (const auto& xe : ds) {
            cout << xe << endl;
        }
    }

    void SapXep() {
        ds.sort();
    }

    Quan_Ly Oto_moi() {
        list<Quan_Ly>::iterator oto_moi = ds.begin();
        for (list<Quan_Ly>::iterator it = ds.begin(); it != ds.end(); ++it) {
            if (it->getNamSX() > oto_moi->getNamSX()) {
                oto_moi = it;
            }
        }
        return *oto_moi;
    }

    Quan_Ly Oto_cu() {
        list<Quan_Ly>::iterator oto_cu = ds.begin(); 
        for (list<Quan_Ly>::iterator it = ds.begin(); it != ds.end(); ++it) {
            if (it->getNamSX() < oto_cu->getNamSX()) {
                oto_cu = it;
            }
        }
        return *oto_cu;
    }

    void tim_Oto(const string& timbienSo) const {
        bool ktra = false;
        for (const auto& xe : ds) {
            if (xe.getBienSo() == timbienSo) {
                cout << "Thong tin oto voi bien so " << timbienSo << ":\n" << xe << endl;
                ktra = true;
                break;
            }
        }
        if (!ktra) {
            cout << "Khong tim thay oto co bien so " << timbienSo << endl;
        }
    }

    void them_Oto(const Quan_Ly& xe) {
        ds.push_back(xe);
    }

    void xoa_Oto(const string& xoa_bienSo) {
        // Sử dụng iterator để xóa ô tô
        for (list<Quan_Ly>::iterator it = ds.begin(); it != ds.end(); ++it) {
            if (it->getBienSo() == xoa_bienSo) {
                ds.erase(it);
                cout << "\nDa xoa oto voi bien so: " << xoa_bienSo << endl;
                return;
            }
        }
        cout << "\nKhong tim thay oto co bien so " << xoa_bienSo << endl;
    }
};
#endif
