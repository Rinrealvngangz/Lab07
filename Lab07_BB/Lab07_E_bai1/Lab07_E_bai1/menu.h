int ChonMenu(int soMenu);
void xulymenu(int menu, String a);
void XuatMenu();
void XuatMenu()
{
	cout << "\n=================== Bang Menu ===================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1.  Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. strlen_Tinh chieu dai chuoi";
	cout << "\n4. Chen ky tu x vao dau chuoi";
	cout << "\n5. Chen ky tu x vao cuoi chuoi";
	cout << "\n6. Chen kt tu x vao chuoi a tai vi tri cho truoc ";
	cout << "\n7. Xoa ky tu dau chuoi";
	cout << "\n8. Xoa ky tu cuoi chuoi";
	cout << "\n9. Xoa ky tu tai vi tri cho truoc";
	cout << "\n10.Cat ky tu dau chuoi roi chen vao vi tri cuoi chuoi";
	cout << "\n11.Cat ky tu cuoi chuoi roi chen vao vi tri dau chuoi";
	cout << "\n12.Xoa tat ca ky tu x cho truoc khoi chuoi";
	cout << "\n13.Thay the tat ca ky tu x trong chuoi thanh ky tu y.";
}



int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so khong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;

	}
	return stt;
}

void xulymenu(int menu, String a)
{
	switch (menu)
	{
	
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		cout << "\nNhan phim bat ky de THOAT";
		break;
	case 1:
		system("CLS");
		cout << "\nNhap Chuoi a: ";
		_flushall();
		gets_s( a , MAX);
		
		
		break;

	case 2:
		system("CLS");
		cout << "\nChuoi a sau khi nhap la :"<<a;
		break;
	}
	_getch();
}