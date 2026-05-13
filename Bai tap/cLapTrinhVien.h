#pragma once
#include "cNhanVien.h"
class cLapTrinhVien : public cNhanVien {
private:
	int GioLamThem;
public:
	cLapTrinhVien() : cNhanVien() {
		GioLamThem = 0;
	}
	void Nhap() override;
	void Xuat() override;
	long long TinhLuong() override;
};

