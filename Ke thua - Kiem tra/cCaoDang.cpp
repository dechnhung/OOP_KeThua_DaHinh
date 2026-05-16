#include "cCaoDang.h"
void cCaoDang::Nhap() {
	cSinhVien::Nhap();
	do {
		cout << "Nhap diem thi tot nghiep: ";
		cin >> DiemThiTotNghiep;
		if (DiemThiTotNghiep < 0 || DiemThiTotNghiep > 10) {
			cout << "Khong hop le - nhap lai!" << endl;
		}
	} while (DiemThiTotNghiep < 0 || DiemThiTotNghiep > 10);
}
void cCaoDang::Xuat() {
	cSinhVien::Xuat();
	cout << "Diem thi tot nghiep: " << DiemThiTotNghiep << endl;
}
void cCaoDang::XetTN() {
	if (DiemTB >= 5 && DiemThiTotNghiep >= 5 && TinChi >= 120) {
		cout << "Sinh vien du dieu kien tot nghiep!" << endl;
	}
	else {
		cout << "Sinh vien khong du dieu kien tot nghiep!" << endl;
	}
}