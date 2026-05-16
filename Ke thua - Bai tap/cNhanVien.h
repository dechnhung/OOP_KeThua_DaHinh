#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class cNhanVien {
protected:
	int maNV;
	string tenNV;
	int tuoi;
	string email;
	long long luongCB;
public:
	cNhanVien();
	cNhanVien(int maNV, string tenNV, int tuoi, string email, long long luongCB);
	virtual ~cNhanVien();
	virtual void Nhap();
	virtual void Xuat();
	virtual long long TinhLuong() = 0;
};