#include "cSinhVien.h"
cSinhVien::cSinhVien() {
	mssv = 0;
	HoTen = "";
	DiaChi = "";
	TinChi = 0;
	DiemTB = 0;
}
cSinhVien::cSinhVien(int mssv, string HoTen, string DiaChi, int TinChi, double DiemTB) {
	this->mssv = mssv;
	this->HoTen = HoTen;
	this->DiaChi = DiaChi;
	this->TinChi = TinChi;
	this->DiemTB = DiemTB;
}
cSinhVien::~cSinhVien() {
}
void cSinhVien::Nhap() {
	do {
		cout << "Nhap MSSV: ";
		cin >> mssv;
		if (mssv < 0) {
			cout << "Khong hop le - nhap lai!" << endl;
		}
	} while (mssv < 0);
	do {
		cout << "Nhap ho ten: ";
		cin.ignore();
		getline(cin, HoTen);
		if (HoTen.empty()) {
			cout << "Khong hop le - nhap lai!" << endl;
		}
	} while (HoTen.empty());
	do {
		cout << "Nhap dia chi: ";
		getline(cin, DiaChi);
		if (DiaChi.empty()) {
			cout << "Khong hop le - nhap lai!" << endl;
		}
	} while (DiaChi.empty());
	do {
		cout << "Nhap so tin chi: ";
		cin >> TinChi;
		if (TinChi < 0) {
			cout << "Khong hop le - nhap lai!" << endl;
		}
	} while (TinChi < 0);
	do {
		cout << "Nhap diem trung binh: ";
		cin >> DiemTB;
		if (DiemTB < 0 || DiemTB > 10) {
			cout << "Khong hop le - nhap lai!" << endl;
		}
	} while (DiemTB < 0 || DiemTB > 10);
}
void cSinhVien::Xuat() {
	cout << "MSSV: " << mssv << endl;
	cout << "Ho ten: " << HoTen << endl;
	cout << "Dia chi: " << DiaChi << endl;
	cout << "So tin chi: " << TinChi << endl;
	cout << "Diem trung binh: " << DiemTB << endl;
}