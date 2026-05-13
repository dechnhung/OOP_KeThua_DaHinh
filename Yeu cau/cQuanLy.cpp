#include "cQuanLy.h"
void cQuanLy::NhapDS() {
	int n;
	do {
		cout << "Nhap so luong can bo: ";
		cin >> n;
		if (n <= 0) {
			cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
		}
	} while (n <= 0);

	for (int i=0; i<n; i++) {
		int x;
		do {
			cout << "Nhap loai can bo (1: Giang Vien, 2: Nhan Vien Hanh Chinh): ";
			cin >> x;
			if (x != 1 && x != 2) {
				cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
			}
		} while (x != 1 && x != 2);
		cCBVC* cb;
		if (x == 1) {
			cb = new cGiangVien();
		} else {
			cb = new cNVHC();
		}
		cb->Nhap();
		ds.push_back(cb);
	}
}
void cQuanLy::XuatDS() {
	for (int i=0; i<ds.size(); i++) {
		ds[i]->Xuat();
		cout << "Luong: " << ds[i]->TinhLuong() << endl;
	}
}
