#pragma once
#include "cSinhVien.h"
class cCaoDang : public cSinhVien {
private: 
	double DiemThiTotNghiep;
public:
	void Nhap() override;
	void Xuat() override;
	void XetTN() override;
};