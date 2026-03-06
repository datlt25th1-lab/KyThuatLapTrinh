#include <iostream>
#include <vector>
using namespace std;

struct SinhVien
{
	string hoten;
	int tuoi;
	bool gioitinh;
	string diachi;
};

int main() {
	SinhVien b;
	b.hoten = "Nguyen Van A";
	b.tuoi = 20;
	b.gioitinh = "Tay Ninh";

	SinhVien c;
	c.tuoi = "Tran Thi B";
	c.tuoi = 30;

	vector <SinhVien> mang;
	mang.push_back(b);
	mang.push_back(c);
	for (int i = 0; i < mang.size(); i++)
	{
		cout << "Sinh vien" << (i + 1) << endl;
		cout << "\t + Ho Ten : " << mang[i].hoten << endl;
		cout << "\t + Tuoi : " << mang[i].tuoi << endl;

	}
}


/*int main() {
	vector <float> diemthi;
	diemthi.push_back(5.5);
	diemthi.push_back(4);
	diemthi.push_back(6);
	diemthi.pop_back();
	for (int i = 0; i < diemthi.size(); i++) {
		cout << diemthi[i] << endl;
	}
}*/