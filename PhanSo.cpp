#include "PhanSo.h"
#include <iostream>
using namespace std;
int ucln(int a, int b){
while(b!=0){
int c=a%b;
a=b;
b=c;
}
return a;
}
void PhanSo::Nhap(){
cin>>iTu;
do{cin>>iMau;}
while(iMau==0);
};

void Xuat(){
cout<<iTu<<"/"<<iMau;

};

void RutGon(){
int u=ucln(a,b);
a=a/u;
b=b/u;
if(iMau<0){
    iTu=-iTu;
    iMau=-iMau;
}
};

PhanSo PhanSo::TinhTong(PhanSo a){
PhanSo ans;
ans.iTu=iTu*a.iMau+iMau*a.iTu;
ans.iMau=iMau*a.IMau;
ans.Rutgon();
return ans;


};

PhanSo PhanSo::TinhHieu(PhanSo a){
PhanSo ans;
ans.iTu=iTu*a.iMau-iMau*a.iTu;
ans.iMau=iMau*a.IMau;
ans.Rutgon();
return ans;
};

PhanSo PhanSo::TinhTich(PhanSo a){
PhanSo ans;
ans.iTu=iTu*a.Itu;
ans.iMau=iMau*a.IMau;
ans.Rutgon();
return ans;
};

PhanSo PhanSo::TinhThuong(PhanSo a){
PhanSo ans;
ans.iTu=iTu*a.iMau;
ans.iMau=iMau*a.iTu;
ans.Rutgon();
return ans;
};

int PhanSo::SoSanh(PhanSo a){
int l=iTu*a.iMau;
int r=iMau*a.iTu;
if(l==r) return 0;
if(l>r) return 1;
return -1;
};

