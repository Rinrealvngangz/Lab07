#include<iostream>
#include<string.h>
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
	
	String a;
	
	nhap_xuatchuoi(a);
	//Chuyen_Hoa_thuong(a);
	//Chuyen_Thuong_Hoa(a);
    //	daonguocchuoi(a);

	if (chuoi_doi_xung(a) == 1)
	{
		cout << "\nChuoi doi xung";
	}
	else
		cout << "\nChuoi ko doi xung";
	//cout << "\nChuoi sau khi chuyen la :";
	//cout << a;
	_getch();
}