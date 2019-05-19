#include<iostream>
#include<string.h>
#include<string>
#include<conio.h>

using namespace std;

#include"thuvien.h"

void chaychuongtrinh();

int main()
{
	chaychuongtrinh();
	return 0;
}

void chaychuongtrinh()
{
	char x;
	int kq;
	String a;
	String b;
	String t;
	int l=dem_soluong_Chuoi(a);
	int m;
	Xuat_Nhap_Chuoi(a);
	//Đếm số lượng kí tự tring chuỗi
	/*kq=dem_soluong_Chuoi(a);
	cout << "\nSo luong ki tu trong chuoi: "<<kq;*/

	//đếm x xuất hiện
	/*cout << "\nNhap ky tu x: ";
	cin >> x;
	kq = dem_X(a, x);
	cout << "\So lan xuat hien cua " << x << " la: "<<kq<< "lan" ;*/

	//đếm kí tự phân biệt
	
	/*cout << "\nKy tu phan biet:"; 
	dem_kytu_phanbiet(a);*/
	
	/*cout << "\nNhap ky tu x: ";
	cin >> x;
	if (kiemtra_X(a, x) != -1)
	{
		kq = kiemtra_X(a, x);
		cout << "\nvi tri xuat hien cua "<< x <<" la: " << kq;
	}
	else
		cout << "\nKhong co " << x<<"trong chuoi";*/
	/*cout << "\nNhap chuoi t:";
	_flushall();
	gets_s(t, MAX);
	cout << t;
	kq=timkiem_chuoi(a, t);
	cout << "\nVi tri chuoi t trong a la: " << kq;*/

	/*kq = dem_so_tu(a);
	cout << "\nSo luong tu trong chuoi: " << kq;*/

	dao_VT_DAU_CUOI(a);
	_getch();
}

