#include "cGiangVien.h"
void cGiangVien::Nhap() {
	cCBVC::Nhap();
	int x;
	do {
		cout << "Nhap so gio day: ";
		cin >> x;
		if (x < 0) {
			cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
		}
	} while (x < 0);
	SoGioDay = x;
	do {
		cout << "Nhap so gio nghien cuu: ";
		cin >> x;
		if (x < 0) {
			cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
		}
	} while (x < 0);
	SoGioNghienCuu = x;
	do {
		cout << "Nhap don gia: ";
		cin >> x;
		if (x < 0) {
			cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
		}
	} while (x < 0);
	DonGia = x;
}

void cGiangVien::Xuat() {
	cCBVC::Xuat();
	cout << "So gio day: " << SoGioDay << endl;
	cout << "So gio nghien cuu: " << SoGioNghienCuu << endl;
	cout << "Don gia: " << DonGia << endl;
}

double cGiangVien::TinhLuong() {
	return (SoGioDay + SoGioNghienCuu) * DonGia;
}