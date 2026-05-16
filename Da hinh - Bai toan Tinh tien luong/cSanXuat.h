#pragma once
#include "cNhanVien.h"
class cSanXuat : public cNhanVien {
private:
	int SoSanPham;
public:
	cSanXuat() {
		SoSanPham = 0;
	}
	void Nhap() override;
	void Xuat() override;
	long long TinhLuong() override;
};