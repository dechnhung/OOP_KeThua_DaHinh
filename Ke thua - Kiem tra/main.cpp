#include "cSinhVien.h"
#include "cCaoDang.h"
#include "cDaiHoc.h"
int main() {
	cSinhVien* svcd = new cCaoDang();
	cSinhVien* svdh = new cDaiHoc();
	cout << "Nhap thong tin sinh vien cao dang" << endl;
	svcd->Nhap();
	svcd->Xuat();
	svcd->XetTN();
	cout << endl;
	cout << "Nhap thong tin sinh vien dai hoc" << endl;
	svdh->Nhap();
	svdh->Xuat();
	svdh->XetTN();
}