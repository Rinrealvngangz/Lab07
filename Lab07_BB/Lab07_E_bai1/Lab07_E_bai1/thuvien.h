
#define MAX 100

typedef char String [MAX];

void nhapchuoi(String a)
{
	cout << "\nNhap chuoi:";

	_flushall();
	gets_s(a, MAX);
	
	cout << "\nChuoi vua nhap la ";
	cout << a;
}

int tinhChieuDaiChuoi(String a)
{
	/*int i = 0;
	while (a[i])
		i++;
	return i;*/
	int l = strlen(a);
	
	return l;
}

void ChenDau_KT(char a[MAX], char x)
{
	int i;
	int l = tinhChieuDaiChuoi(a);
	for (i = l; i >= 0; i--)
		a[i + 1] = a[i];
	a[0] = x;

}

void ChenCuoi_KT(char a[MAX], char x)
{
	int l = tinhChieuDaiChuoi(a);
	a[l++] = x;
	a[l] == NULL;
}

//Chen ky tu x vao chuoi a tai vi tri cho truoc

int  ChenKT_VT(char a[MAX], char x, int vt)
{
	int i, l, kq = 1;
	l = tinhChieuDaiChuoi(a);
	if (vt == 0)
	{
		ChenDau_KT(a, x);
	}
	else
	
		if (vt == l)
		{
			ChenCuoi_KT(a, x);
		}

		else
			if (0 < vt && vt < l)
			{
				for (i = l; i >= vt; i--)
					a[i + 1] = a[i];
				a[vt] = x;
			}
			else
				kq = 0;
	
return kq;
}

void Xoadau_KT(char a[MAX])
{
	int i;
	for (i = 0; a[i] != NULL; i++);
	a[i] = a[i+1];

	a[i - 1] = NULL;


}

void XoaCuoi_KT(char a[MAX])
{
	int i;
	for (i = 0; a[i] != NULL; i++);
	a[i -1] = NULL;
	
 
}

int  xoa_KT_VT(char a[MAX], int vt)
{
	int i, l, kq = 1;
	l = tinhChieuDaiChuoi(a);

	if (vt == 0)
	{
		Xoadau_KT(a);
	}
	else
		if (vt == l - 1)
		{
			XoaCuoi_KT(a);
			
		}
		else
			if (0 < vt && vt < l - 1)
			{

				for (i = vt; i < l; i++)
					a[i ] = a[i+1];
				a[l - 1] == NULL;
			}
			else
				kq = 0;
	return kq;
}

void CatDauChenCuoi(char a[MAX])
{
	int i;
	char x;
	x = a[0];
	for (i = 1; a[i] != NULL; i++)
	
		a[i - 1] = a[i];
		a[i - 1] = x;
	
}

void CatCuoiChenDau(char a[MAX])
{
	int i, l;
	char x;
	l = tinhChieuDaiChuoi(a);
	x = a[l - 1];
	for (i = l - 2; i >= 0; i--)
		a[i + 1] = a[i];
	a[0] = x;
}

void Xoa_X(char a[MAX], char x)
{
	int i,h= 0;
	for(i=0;a[i]!=NULL;i++)
		if (a[i] != x)
		
			a[h++] = a[i];
	a[h] = NULL;
}
void Thay_X_Bang_Y(char a[MAX], char x, char y)
{
	int i;
	for (i = 0; a[i] != NULL; i++)
		if (a[i] == x)
			a[i] = y;
	

}