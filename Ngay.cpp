#include "Ngay.h"
#include <iostream>
using namespace std;
void Ngay::Nhap(){
cin>>iNgay>>iThang>>iNam;

}
void Ngay::Xuat(){
cout<<iNgay<<"/"<<iThang<<"/"<<iNam;

}
bool Ngay::NamNhuan() {
    return (iNam % 400 == 0) || (iNam % 4 == 0 && iNam % 100 != 0);
}
int  Ngay::SoNgayTrongThang(){
    switch(iThang){
    case 1:case 3: case 5: case 7: case 8: case 10: case 12: return 31;
case 4:case 6: case 9: case 11:  return 30;
case 2:
    if (NamNhuan()) return 29; else return 28;
default: return 0;

 }
}
void Ngay::NgayThangNamTiepTheo(){
 iNgay++;
if(iNgay>SoNgayTrongThang()){
    iNgay=1; iThang++;
    if(iThang>12) {
        iThang=1; iNam++;
    }
}




}
