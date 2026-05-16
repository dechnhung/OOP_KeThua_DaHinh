#include "cVanPhong.h"
void cVanPhong::Nhap() {
	cNhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	do {
		cin >> SoNgayLamViec;
		if (SoNgayLamViec < 0 || SoNgayLamViec > 28) {
			cout << "Loi, nhap lai!" << endl;
		}
	} while (SoNgayLamViec < 0 || SoNgayLamViec > 28);

	cout << "Nhap tro cap: ";
	do {
		cin >> TroCap;
		if (TroCap < 0)
			cout << "Loi, nhap lai!" << endl;
	} while (TroCap < 0);

}
void cVanPhong::Xuat() {
	cout << "Nhan vien van phong" << endl;
	cNhanVien::Xuat();
	cout << "So ngay làm viec: " << SoNgayLamViec << endl;
	cout << "Tro cap: " << TroCap << endl;
	cout << "Luong: " << TinhLuong() << endl;
}
long long cVanPhong::TinhLuong() {
	return LuongCoBan + SoNgayLamViec * 200000 + TroCap;
}