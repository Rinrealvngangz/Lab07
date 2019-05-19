#define MAX 100

typedef char String [MAX];

void nhap_xuatchuoi(String a)
{
	cout << "\nNhap chuoi a: ";
	_flushall();
	gets_s(a, MAX);
	cout <<"\n Chuoi sau khi nhap  a : "<< a;
}

char Chuyen_Hoa_thuong(String a)
{
	int tam = 0;
	int l = strlen(a);

	for ( int i = 0;  i < l;i++)
	
		if (a[i] >= 64 && a[i] <= 91)
		{
			a[i] = tam+a[i] + 32;
			
		}
	return tam;

}
char Chuyen_Thuong_Hoa(String a)
{
	int tam = 0;
	int l = strlen(a);

	for (int i = 0; i < l; i++)

		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = tam + a[i] - 32;

		}
	return tam;

}

void daonguocchuoi(String a)
{
	int l = strlen(a);

	int i,temp;
	int j = l-1;
	
	
	for (i = 0, j < l ; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
		
}

char chuoi_doi_xung(String a)
{
	int l = strlen(a);
	for (int i = 0; i <= (l/2 ); i++)
	{
		if (a[i] != a[l - 1 - i])
			return 0;
	}
	return 1;
}
