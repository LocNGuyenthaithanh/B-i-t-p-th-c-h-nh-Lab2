#ifndef PHANSO_H
#define PHANSO_H


class PhanSo
{
    public:

        void Nhap();
        void Xuat();
        void RutGon();
        PhanSo TinhTong(PhanSo a);
           PhanSo TinhHieu(PhanSo a);
           PhanSo TinhTich(PhanSo a);
           PhanSo TinhThuong(PhanSo a);
           int SoSanh(PhanSo a);


    private: int iTu,iMau;
};

#endif // PHANSO_H
