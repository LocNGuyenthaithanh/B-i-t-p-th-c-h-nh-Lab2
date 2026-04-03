#include "Gio.h"
#include <iostream>
#include <iomanip>
using namespace std;
void Gio::Nhap(){
cin>>iGio>>iPhut>>iGiay;
}
void Gio::Xuat(){
cout<<setfill('0');
cout<< setw(2)<<iGio<<":"<<setw(2)<<iPhut<<":"<<setw(2)<<iGiay;
}
   void Gio::TinhCongThemMotGiay(){
   iGiay++;
   if(iGiay==60){
    iGiay=0; iPhut++;
    if(iPhut==60){
        iPhut=0;iGio++;
        if(iGio==24) iGio=0;
    }
   }

   }
