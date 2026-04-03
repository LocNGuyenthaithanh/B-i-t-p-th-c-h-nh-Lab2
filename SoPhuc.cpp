#include "SoPhuc.h"
#include <iostream>
using namespace std;
void SoPhuc::Nhap(){
cin>>iThuc>>iAo;
}
void SoPhuc::Xuat(){
cout<<iThuc;
if(iAo>=0) cout<<"+"<<iAo<<"i";
else cout<<"-"<<-iAo<<"i";
}
SoPhuc SoPhuc::Tong(SoPhuc sp){
SoPhuc a;
a.iThuc=iThuc+sp.iThuc;
a.iAo=iAo+sp.iAo;
return a;
}
SoPhuc SoPhuc::Hieu(SoPhuc sp){
SoPhuc a;
a.iThuc=iThuc-sp.iThuc;
a.iAo=iAo-sp.iAo;
return a;

}
SoPhuc SoPhuc::Tich(SoPhuc sp){
SoPhuc a;
a.iThuc=iThuc*sp.iThuc-iAo*sp.iAo;
a.iAo=iThuc*sp.iAo+iAo*sp.iThuc;
return a;

}
SoPhuc SoPhuc::Thuong(SoPhuc sp){
    SoPhuc a;
double m=sp.iThuc*sp.iThuc+sp.iAo*sp.iAo;
if(m==0) {cout<<"Khong chia duoc";
a.iThuc=0;
a.iAo=0;
return a;
}
a.iThuc=(iThuc*sp.iThuc+iAo*sp.iAo)/m;
a.iAo=(iAo*sp.iThuc-iThuc*sp.iAo)/m;
return a;
}
