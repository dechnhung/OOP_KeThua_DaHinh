#include "cNVHC.h"
void cNVHC::Nhap() {
	cCBVC::Nhap();
	int x;
	do {
		cout << "Nhap so ngay lam viec: ";
		cin >> x;
		if (x < 0) {
			cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
		}
	} while (x < 0);
	SoNgayLamViec = x;
	do {
		cout << "Nhap tien cong ngay: ";
		cin >> x;
		if (x < 0) {
			cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
		}
	} while (x < 0);
	TienCongNgay = x;
	do {
		cout << "Nhap so gio lam them: ";
		cin >> x;
		if (x < 0) {
			cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
		}
	} while (x < 0);
	SoGioLamThem = x;
	do {
		cout << "Nhap don gia: ";
		cin >> x;
		if (x < 0) {
			cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
		}
	} while (x < 0);
	DonGia = x;
}

void cNVHC::Xuat() {
	cCBVC::Xuat();
	cout << "So ngay lam viec: " << SoNgayLamViec << endl;
	cout << "Tien cong ngay: " << TienCongNgay << endl;
	cout << "So gio lam them: " << SoGioLamThem << endl;
	cout << "Don gia: " << DonGia << endl;
}

double cNVHC::TinhLuong() {
	return SoNgayLamViec * TienCongNgay + SoGioLamThem * DonGia;
}