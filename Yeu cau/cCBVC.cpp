#include "cCBVC.h"
void cCBVC::Nhap() {
	cout << "Nhap ma CB: ";
	cin >> maCB;

	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);

	int x;
	do {
		cout << "Nhap gioi tinh (0: nu, 1: nam): ";
		cin >> x;
		if (x != 0 && x != 1) {
			cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
		}
	} while (x != 0 && x != 1);
}

void cCBVC::Xuat() {
	cout << "Ma CB: " << maCB << endl;
	cout << "Ho ten: " << HoTen << endl;
	cout << "Gioi tinh: " << (GioiTinh ? "Nam" : "Nu") << endl;
}