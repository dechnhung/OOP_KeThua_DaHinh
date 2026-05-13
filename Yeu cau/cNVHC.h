#pragma once
#include "cCBVC.h"
class cNVHC : public cCBVC {
private:
	int SoNgayLamViec;
	double TienCongNgay;
	int SoGioLamThem;
	double DonGia;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
};

