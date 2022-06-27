#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	 
int Tong (int a, int b)
	{
	return (a+b);
	}
int Hieu (int a, int b) 
	{
	return (a-b);
	}
int Tich (int a, int b) 
	{
	return (a*b);
	}
	
float divv (int a, int b)
	    {
			if (b == 0)
			printf ("\nInvalid");
			else
			 {
			return (a/b);
			 }
	    }

int main(int argc, char *argv[]) 
	{
		int a, b, Tong, Hieu, Tich;
		int luachon;
		float Thuong;
		char check;
		printf ("1. Nhap so\n");
		printf ("2. Tinh tong\n");
		printf ("3. Tinh hieu\n");
		printf ("4. Tinh tich\n");
		printf ("5. Tinh thuong\n");
		printf ("6. Thoat\n");
		printf ("===========================\n");
		do 
		   {
			printf ("Lua chon: ");
			fflush (stdin);
			scanf ("%d", &luachon);
			
				switch (luachon)
				  {
					case 1: 
						printf ("\nNhap gia tri a: ");
						scanf ("%d", &a);
						printf ("\nNhap gia tri b: ");
						scanf ("%d", &b);
						break;
					case 2: 
						Tong = tong (a, b);
						printf ("Tong cua a va b = %d\n",Tong );
						break;
					case 3: 
						Hieu = hieu (a, b);
						printf ("Hieu cua a va b = %d\n", Hieu);
						break;
					case 4: 
						Tich = tich (a, b);
						printf ("Tich cua a va b = %d", Tich);
						break;
					case 5:
						Thuong = thuong (a, b);
						printf ("Thuong cua a va b = %.1f", Thuong);
						break;
					case 6:
						return 0;	
				   }
				printf ("ban co muon tiep tuc? Y/N: ");
				fflush (stdin);
				scanf ("%c", &check);
			}
		while (check == 'Y'|| check == 'y');
	
	}
	
