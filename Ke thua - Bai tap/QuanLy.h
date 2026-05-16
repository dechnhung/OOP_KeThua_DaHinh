#pragma once
#include "cNhanVien.h"
#include "cLapTrinhVien.h"
#include "cKiemChungVien.h"
#include <vector>
class QuanLy {
private:
	vector<cNhanVien*> dsNhanVien;
public:
	void Nhap();
	void Xuat();
	void ThapHonAvg();
};

