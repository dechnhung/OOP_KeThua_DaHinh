#pragma once
#include "cCBVC.h"
class cGiangVien : public cCBVC {
private:
	int SoGioDay;
	int SoGioNghienCuu;
	double DonGia;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
};