#include "cQLNV.h"
int main() {
	cQLNV ql;
	ql.Nhap();
	cout << endl;
	cout << "Danh sach nhan vien:" << endl;
	ql.Xuat();
	cout << endl;
	cout << "Tong luong cua cong ty: " << ql.TongLuong() << endl;
	ql.TimKiemNhanVien();
	return 0;
}