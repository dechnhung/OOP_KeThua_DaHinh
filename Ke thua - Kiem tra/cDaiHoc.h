#pragma once
#include "cSinhVien.h"
class cDaiHoc : public cSinhVien {
private:
	string TenLuanVan;
	double DiemLuanVan;
public:
	void Nhap() override;
	void Xuat() override;
	void XetTN() override;
};

