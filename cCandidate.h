#pragma once
using namespace std;
#include "Candidate.h"
class cCandidate {
private:
	Candidate *DS;
	int n;

public:
	cCandidate();
	~cCandidate();
	void NhapDS();
	void XuatDS();
	void XuatThiSinhDiemCao();
	void ThiSinhDiemCaoNhat();
	void SapXepDiemGiamDan();
};
