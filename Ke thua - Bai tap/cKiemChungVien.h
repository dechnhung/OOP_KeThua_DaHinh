#pragma once
#include "cNhanVien.h"
class cKiemChungVien : public cNhanVien {
private:
	int Loi;
public:
	cKiemChungVien() : cNhanVien() {
		Loi = 0;
	}
	void Nhap() override;
	void Xuat() override;
	long long TinhLuong() override;
};