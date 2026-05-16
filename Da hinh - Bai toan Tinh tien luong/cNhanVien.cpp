#include "cNhanVien.h"
#include <regex>
cNhanVien::cNhanVien() {
	HoTen = "";
	NgaySinh = "01/01/1900";
	LuongCoBan = 0;
}
cNhanVien::cNhanVien(string HoTen, string NgaySinh, long long LuongCoBan) {
	this->HoTen = HoTen;
	this->NgaySinh = NgaySinh;
	this->LuongCoBan = LuongCoBan;
}
cNhanVien::~cNhanVien() {
}
void cNhanVien::Nhap() {
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	while (HoTen.empty()) {
		cout << "Ho ten khong de trong, nhap lai!" << endl;
		getline(cin, HoTen);
	}

	regex DinhDangNgay("(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/[0-9]{4}");
	cout << "Nhap ngay sinh (dd/mm/yy): ";
	getline(cin, NgaySinh);
	while (!regex_match(NgaySinh, DinhDangNgay)) {
		cout << "Khong dung dinh dang, nhap lai! (dd/mm/yyyy)" << endl;
		getline(cin, NgaySinh);
	}

	cout << "Nhap luong co ban: ";
	do {
		cin >> LuongCoBan;
		if (LuongCoBan < 0)
			cout << "Loi, nhap lai!" <<endl;
	} while (LuongCoBan < 0);
	
	cin.ignore();
}
void cNhanVien::Xuat() {
	cout << "Ho ten: " << HoTen << endl;
	cout << "Ngay sinh: " << NgaySinh << endl;
	cout << "Luong Co Ban: " << LuongCoBan << endl;
}