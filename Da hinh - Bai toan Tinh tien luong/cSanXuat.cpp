#include "cSanXuat.h"
void cSanXuat::Nhap() {
	cNhanVien::Nhap();
	cout << "Nhap so san pham: ";
	do {
		cin >> SoSanPham;
		if (SoSanPham < 0)
			cout << "Loi, nhap lai!" << endl;
	} while (SoSanPham < 0);
}
void cSanXuat::Xuat() {
	cout << "Nhan vien san xuat" << endl;
	cNhanVien::Xuat();
	cout << "So san pham: " << SoSanPham << endl;
	cout << "Luong: " << TinhLuong() << endl;
}
long long cSanXuat::TinhLuong() {
	return LuongCoBan + SoSanPham * 2000;
}