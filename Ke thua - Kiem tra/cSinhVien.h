#pragma once
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class cSinhVien {
protected:
	int mssv;
	string HoTen;
	string DiaChi;
	int TinChi;
	double DiemTB;
public:
	cSinhVien();
	cSinhVien(int mssv, string HoTen, string DiaChi, int TinChi, double DiemTB);
	virtual ~cSinhVien();
	virtual void Nhap();
	virtual void Xuat();
	virtual void XetTN() = 0;
};