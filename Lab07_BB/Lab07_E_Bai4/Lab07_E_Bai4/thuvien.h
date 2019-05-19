#define MAX 100

typedef char String[MAX];


void Xuat_Nhap_Chuoi(String a)
{
	cout << "\nNhap Chuoi: ";
		_flushall();
	gets_s(a, MAX);
	cout << "\nChuoi sau khi nhap la :" << a;
}

int dem_soluong_Chuoi(String a)
{
	int i = 0;
	while (a[i]!=NULL)
		
		i++;
	return i;

}
int dem_X(String a, char x)
{
	int l,i;
	l = dem_soluong_Chuoi(a);
	int dem = 0;
	for (i = 0; i < l; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}
	return dem;

}




void  dem_kytu_phanbiet(String a)
{
	int s[MAX];
	String b;
	int l, i, j;
	int dem = 1;
	l = dem_soluong_Chuoi(a);
	for (i = 0; i < l; i++)
		s[i] = 1;
	for (i = 0; i < l-1; i++)
		for (j = i + 1; j < l; j++)
			
			if(a[i]==a[j]&& s[i]!=0)
			{
				s[j] = 0;
				s[i]++;
			}
	
	for (i = 0; i < l ; i++)
		if(s[i]!=0)
			cout << " Ki tu " << a[i]<< " xuat hien " <<s[i] << " lan\n";
		
}

int  kiemtra_X(String a, char x)
{
	int i;
	int l = dem_soluong_Chuoi(a);
	int vt=-1;//sai trả về -1
	
	for (i = 0; i <l; i++)
	
		if (a[i] == x)
		{
			vt = i;

			break;
		}
	return vt;
	
}

int timkiem_chuoi(String a, String t)
{
	char *ret;
	int vt;
	ret = strstr(a, t);
	vt = (ret - a);
	if (ret != NULL)
	
		return vt;
	
	else
		return -1;
}

int dem_so_tu(String a)
{
	int l = dem_soluong_Chuoi(a);
	int dem = 0;

	if ((a[0])!=' ')
		dem = 1;
	for (int i = 0; i < l - 1; i++)
	{
		if (a[i] == ' ' && a[i + 1] != ' ')
			dem++;

	}
	return dem;
}

void dao_VT_DAU_CUOI(char *a)
{
	String t;
	String r;

	int i, l;

	for (i = strlen(a) - 1; i >= 0; i--)
		if (a[i] == ' ')
			break;
	strcpy_s(r, a + i + 1);
	a[i + 1] = '\0';
	l = strlen(a) - strlen(strstr(a, " "));
	strcpy_s(t, a + l + 1);
	a[l] = '\0';

	strcat(strcat(strcat(r, " "), t), a);

	puts(r);


}