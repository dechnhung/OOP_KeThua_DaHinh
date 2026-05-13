#include "cDaiHoc.h"
void cDaiHoc::Nhap() {
	cSinhVien::Nhap();
	do {
		cout << "Nhap ten luan van: ";
		cin.ignore();
		getline(cin, TenLuanVan);
		if (TenLuanVan.empty()) {
			cout << "Khong hop le - nhap lai!" << endl;
		}
	} while (TenLuanVan.empty());
	do {
		cout << "Nhap diem luan van: ";
		cin >> DiemLuanVan;
		if (DiemLuanVan < 0 || DiemLuanVan > 10) {
			cout << "Khong hop le - nhap lai!" << endl;
		}
	} while (DiemLuanVan < 0 || DiemLuanVan > 10);
}
void cDaiHoc::Xuat() {
	cSinhVien::Xuat();
	cout << "Ten luan van: " << TenLuanVan << endl;
	cout << "Diem luan van: " << DiemLuanVan << endl;
}
void cDaiHoc::XetTN() {
	if (DiemTB >= 5 && DiemLuanVan >= 5 && TinChi >= 170) {
		cout << "Sinh vien du dieu kien tot nghiep!" << endl;
	}
	else {
		cout << "Sinh vien khong du dieu kien tot nghiep!" << endl;
	}
}