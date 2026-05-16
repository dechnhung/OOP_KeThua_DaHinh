#include "cQLNV.h"
void cQLNV::Nhap() {
	int n;
	do {
		cout << "Nhap so luong nhan vien: ";
		cin >> n;
		if (n <= 0)
			cout << "Khong hop le, nhap lai!" << endl;
	} while (n < 0);

	cout << "1 - Nhan vien van phong" << endl;
	cout << "2 - Nhan vien san xuat" << endl;
	cout << "3 - Nhan vien quan ly" << endl;

	for (int i = 0; i < n; i++) {
		int type;
		do {
			cout << "Nhap loai nhan vien: ";
			cin >> type;
			cin.ignore(1000, '\n');
			if (type != 1 && type != 2 && type != 3)
				cout << "Khong hop le, nhap lai!" << endl;
		} while (type != 1 && type != 2 && type != 3);
		cNhanVien* nv;
		if (type == 1) nv = new cVanPhong;
		else if (type == 2) nv = new cSanXuat;
		else nv = new cQuanLy;
		nv->Nhap();
		ds.push_back(nv);
	}
}
void cQLNV::Xuat() {
	int n = ds.size();
	for (int i = 0; i < n; i++) {
		cout << "Nhan vien thu " << i + 1 << ":" << endl;
		ds[i]->Xuat();
	}
}
long long cQLNV::TongLuong() {
	long long tong = 0;
	int n = ds.size();
	for (int i = 0; i < n; i++) {
		tong += ds[i]->TinhLuong();
	}
	return tong;
}
void cQLNV::TimKiemNhanVien() {
	string name;
	int n = ds.size();
	cout << "Nhap ho ten can tim: ";
	cin.ignore(1000, '\n');
	getline(cin, name);
	bool found = false;
	for (int i = 0; i < n; i++) {
		if (ds[i]->getHoTen() == name) {
			cout << "Tim thay nhan vien: ";
			ds[i]->Xuat();
			found = true;	
		}
	}
	if (!found) cout << "Khong tim thay nhan vien!" << endl;
}