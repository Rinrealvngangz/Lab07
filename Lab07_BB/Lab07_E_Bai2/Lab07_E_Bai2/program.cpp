#include <iostream>
#include <conio.h>
#include<string.h>
#include <iomanip>
using namespace std;

#include "Thuvien.h"


void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	
	SoTuNhienLon m,n,t;
	/*SoTuNhienLon n;
	SoTuNhienLon t;*/
	cout << "\nNhap so tu nhien m: ";
	cin >> m;
	cout << "\nNhap so tu nhien n: ";
	cin >> n;
	Congsotunhienlon(m, n, t);
	cout << "\nDap so la: " << m << " + " << n << " = " << t;
	
	
}
