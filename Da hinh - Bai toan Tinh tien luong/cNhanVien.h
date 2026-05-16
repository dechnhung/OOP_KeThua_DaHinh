#pragma once
#include <iostream>
#include <string>
using namespace std;
class cNhanVien {
protected:
	string HoTen;
	string NgaySinh;
	long long LuongCoBan;
public:
	cNhanVien();
	cNhanVien(string HoTen, string NgaySinh, long long LuongCoBan);
	~cNhanVien(); 
	virtual void Nhap();
	virtual void Xuat();
	virtual long long TinhLuong() = 0;
	string getHoTen() {
		return HoTen;
	}
}; 