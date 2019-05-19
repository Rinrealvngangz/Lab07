#include <iostream>
#include<string.h>
#include<string>
#include <conio.h>
using namespace std;
#include "thuvien.h"

void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 0;
}
void ChayChuongTrinh()
{
	int vt;
	char x;
	int kq;
	String a;
	nhapchuoi(a);
	kq=tinhChieuDaiChuoi(a);
	cout << "\nChieu dai chuoi a: " << kq << endl;

	cout << "nhap ki tu X: ";
	cin >> x;

	cout << "\nChen x vao dau chuoi: ";
	ChenDau_KT(a, x);
	cout << a << endl;
	cout << "nhap ki tu X: ";
	cin >> x;

	cout << "\nChen x vao cuoi chuoi: ";
	ChenCuoi_KT(a, x);
	cout << a << endl;
	cout << "\nNhap VT can chen :";
	cin >> vt;

	cout << "nhap ki tu X: ";
	cin >> x  ;

	ChenKT_VT(a, x, vt);
	cout << "\nChuoi sau khi chen la " << a;
	
	XoaCuoi_KT(a);
	cout << "\nChuoi  sau khi xoa cuoi: "<<a;
	kq=tinhChieuDaiChuoi(a);
	cout << "\n chieu dai chuoi sau khi xoa: "<<kq;
	
	cout << "\nNhap VT can xoa :";
	cin >> vt;
	xoa_KT_VT(a, vt);
	cout << "\nchuoi sau khi xoa tai vt " << vt << "la: " << a;

	Xoadau_KT(a);
	cout << "\nChuoi  sau khi xoa cuoi: " << a;
	kq = tinhChieuDaiChuoi(a);
	cout << "\n chieu dai chuoi sau khi xoa: " << kq; 

	CatDauChenCuoi(a);
	cout << "\nChuoi sau khi cat: " << a;


	CatCuoiChenDau(a);
	cout << "\nChuoi sau khi cat: " << a; 

	Xoa_X(a, x);
	cout << "\nChuoi sau khi xoa la : " << a;

	char  y;
	cout << "\nNhap y = " ;
	cin >> y;
	Thay_X_Bang_Y(a, x, y);
	cout << "\nChuoi sau khi thay the la : " << a;

	_getch();
}