#pragma once
#include "cNhanVien.h"
class cVanPhong : public cNhanVien {
private:
	long long TroCap;
	int SoNgayLamViec;
public:
	cVanPhong() {
		TroCap = 0;
		SoNgayLamViec = 0;
	}
	void Nhap() override;
	void Xuat() override;
	long long TinhLuong() override;
};