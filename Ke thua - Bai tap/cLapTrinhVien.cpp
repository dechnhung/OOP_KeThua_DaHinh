#include "cLapTrinhVien.h"
void cLapTrinhVien::Nhap() {
	cNhanVien::Nhap();
	do {
		cout << "Nhap gio lam them: ";
		cin >> GioLamThem;
		if (GioLamThem < 0) {
			cout << "Khong hop le, nhap lai!" << endl;
		}
	} while (GioLamThem < 0);
}
void cLapTrinhVien::Xuat() {
	cNhanVien::Xuat();
	cout << "Gio lam them: " << GioLamThem << endl;
	cout << "Luong: " << TinhLuong() << endl;
}
long long cLapTrinhVien::TinhLuong() {
	return luongCB + GioLamThem * 200000;
}