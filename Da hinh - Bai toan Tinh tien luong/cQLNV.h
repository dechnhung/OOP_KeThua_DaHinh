#pragma once
#include "cNhanVien.h"
#include "cVanPhong.h"
#include "cSanXuat.h"
#include "cQuanLy.h"
#include <vector>
using namespace std;
class cQLNV {
private:
	vector<cNhanVien*> ds;
public:
	void Nhap();
	void Xuat();
	long long TongLuong();
	void TimKiemNhanVien();
};