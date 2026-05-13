#pragma once
#include "cCBVC.h"
#include "cGiangVien.h"
#include "cNVHC.h"
#include <vector>
class cQuanLy {
private:
	vector<cCBVC*> ds;
public:
	cQuanLy() {

	}
	~cQuanLy() {
		for (int i=0; i<ds.size(); i++) {
			delete ds[i];
		}
	}
	void NhapDS();
	void XuatDS();
};

