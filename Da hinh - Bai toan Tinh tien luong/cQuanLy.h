#pragma once
#include "cNhanVien.h"
class cQuanLy : public cNhanVien {
private:
	double HeSoChucVu;
	long long Thuong;
public:
	cQuanLy() {
		HeSoChucVu = 1.00;
		Thuong = 0;
	}
	void Nhap() override;
	void Xuat() override;
	long long TinhLuong() override;
};