#include <iostream>
#include "PhanSo.h"
using namespace std;

int main(){
PhanSo a, b;

  a.Nhap();

    b.Nhap();

   a.RutGon();
    a.Xuat();

  b.RutGon();
    b.Xuat();

    // Tính toán
    PhanSo tong = a.Tong(b);
    PhanSo hieu = a.Hieu(b);
    PhanSo tich = a.Tich(b);
    PhanSo thuong = a.Thuong(b);

    tong.Xuat();

    hieu.Xuat();

    tich.Xuat();

    thuong.Xuat();

    int ss = a.SoSanh(b);
    if (ss == 1)
        cout << "\nA > B";
    else if (ss == 0)
        cout << "\nA = B";
    else
        cout << "\nA < B";

    return 0;
}
}
