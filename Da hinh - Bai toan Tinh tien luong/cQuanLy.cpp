#include "cQuanLy.h"
void cQuanLy::Nhap() {
	cNhanVien::Nhap();
	cout << "Nhap he so chuc vu: ";
	do {
		cin >> HeSoChucVu;
		if (HeSoChucVu < 0)
			cout << "Loi, nhap lai!" << endl;
	} while (HeSoChucVu < 0);

	cout << "Nhap thuong: ";
	do {
		cin >> Thuong;
		if (Thuong < 0)
			cout << "Loi, nhap lai!" << endl;
	} while (Thuong < 0);
}
void cQuanLy::Xuat() {
	cout << "Nhan vien quan ly" << endl;
	cNhanVien::Xuat();
	cout << "He so chuc vu: " << HeSoChucVu << endl;
	cout << "Thuong: " << Thuong << endl;
	cout << "Luong: " << TinhLuong() << endl;
}
long long cQuanLy::TinhLuong() {
	return LuongCoBan * HeSoChucVu + Thuong;
}