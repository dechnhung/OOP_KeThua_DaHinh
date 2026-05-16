#pragma once
#include <iostream>
#include <string>
using namespace std;
class cCBVC {
protected:
	int maCB;
	string HoTen;
	bool GioiTinh; // 0: nu, 1: nam
public:
	cCBVC() {
		maCB = 0;
		HoTen = "";
		GioiTinh = 0;
	}
	cCBVC(int maCB, string HoTen, bool GioiTinh) {
		this->maCB = maCB;
		this->HoTen = HoTen;
		this->GioiTinh = GioiTinh;
	}
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhLuong() = 0;
	virtual ~cCBVC() {

	}
};

