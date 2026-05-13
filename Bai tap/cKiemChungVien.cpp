#include "cKiemChungVien.h"
void cKiemChungVien::Nhap() {
	cNhanVien::Nhap();
	do {
		cout << "Nhap so loi: ";
		cin >> Loi;
		if (Loi < 0) {
			cout << "Khong hop le, nhap lai!" << endl;
		}
	} while (Loi < 0);
}
void cKiemChungVien::Xuat() {
	cNhanVien::Xuat();
	cout << "So loi: " << Loi << endl;
	cout << "Luong: " << TinhLuong() << endl;
}
long long cKiemChungVien::TinhLuong() {
	return luongCB + Loi * 50000;
}