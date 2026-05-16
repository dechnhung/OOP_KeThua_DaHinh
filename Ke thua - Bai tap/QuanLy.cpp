#include "QuanLy.h"
void QuanLy::Nhap() {
	int n;
	do {
		cout << "Nhap so luong nhan vien: ";
		cin >> n;
		if (n <= 0) {
			cout << "Khong hop le, nhap lai!" << endl;
		}
	} while (n <= 0);
	for (int i = 0; i < n; i++) {
		int loai;
		do {
			cout << "Nhap loai nhan vien (1 - Lap Trinh Vien, 2 - Kiem Chung Vien): ";
			cin >> loai;
			if (loai != 1 && loai != 2) {
				cout << "Khong hop le, nhap lai!" << endl;
			}
		} while (loai != 1 && loai != 2);
		cNhanVien* nv;
		if (loai == 1) {
			nv = new cLapTrinhVien();
		}
		else {
			nv = new cKiemChungVien();
		}
		nv->Nhap();
		dsNhanVien.push_back(nv);
	}
}
void QuanLy::Xuat() {
	int n = dsNhanVien.size();
	for (int i = 0; i < n; i++) {
		cout << "Nhan vien thu " << i + 1 << ":" << endl;
		dsNhanVien[i]->Xuat();
	}
}
void QuanLy::ThapHonAvg() {
	int n = dsNhanVien.size();
	double Tong = 0;
	for (int i = 0; i < n; i++) {
		Tong += dsNhanVien[i]->TinhLuong();
	}
	double avgLuong = Tong / n;
	cout << "Danh sach nhan vien co luong thap hon trung binh:" << endl;
	for (int i = 0; i < dsNhanVien.size(); i++) {
		if (dsNhanVien[i]->TinhLuong() < avgLuong) {
			dsNhanVien[i]->Xuat();
		}
	}
}
