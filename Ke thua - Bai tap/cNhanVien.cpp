#include "cNhanVien.h"
cNhanVien::cNhanVien() {
	maNV = 0;
	tenNV = "";
	tuoi = 0;
	email = "";
	luongCB = 0;
}
cNhanVien::cNhanVien(int maNV, string tenNV, int tuoi, string email, double luongCB) {
	this->maNV = maNV;
	this->tenNV = tenNV;
	this->tuoi = tuoi;
	this->email = email;
	this->luongCB = luongCB;
}
cNhanVien::~cNhanVien() {

}
void cNhanVien::Nhap() {
	do {
		cout << "Nhap ma nhan vien: ";
		cin >> maNV;
		if (maNV <= 0) {
			cout << "Khong hop le, nhap lai!" << endl;
		}
	} while (maNV <= 0);
	do {
		cout << "Nhap ten nhan vien: ";
		cin.ignore();
		getline(cin, tenNV);
		if (tenNV.empty()) {
			cout << "Khong hop le, nhap lai!" << endl;
		}
	} while (tenNV.empty());
	do {
		cout << "Nhap tuoi nhan vien: ";
		cin >> tuoi;
		if (tuoi <= 0) {
			cout << "Khong hop le, nhap lai!" << endl;
		}
	} while (tuoi <= 0);
	do {
		cout << "Nhap email nhan vien: ";
		cin.ignore();
		getline(cin, email);
		if (email.empty()) {
			cout << "Khong hop le, nhap lai!" << endl;
		}
	} while (email.empty());
	do {
		cout << "Nhap luong co ban nhan vien: ";
		cin >> luongCB;
		if (luongCB <= 0) {
			cout << "Khong hop le, nhap lai!" << endl;
		}
	} while (luongCB <= 0);
}
void cNhanVien::Xuat() {
	cout << "Ma nhan vien: " << maNV << endl;
	cout << "Ho ten: " << tenNV << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "Email: " << email << endl;
	cout << "Luong co ban: " << luongCB << endl;
}