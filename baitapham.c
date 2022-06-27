#include <stdio.h>
#include <stdlib.h>

int Tong (int a, int b)
	{
	return (a + b);
	}

int Hieu (int a, int b) 
	{
	return (a - b);
	}

int Tich (int a, int b) 
	{
	return (a*b);
	}
	
	
float Thuong (int a, int b) 
	{
	if (b == 0)
	printf ("\nInvalid");
	else 
	{
	return (float) a/b;
	}
	
	}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int a, b;
		char check;
		printf ("1. Nhap so\n");
		printf ("2. Tinh tong\n");
		printf ("3. Tinh hieu\n");
		printf ("4. Tinh tich\n");
		printf ("5. Tinh thuong\n");
		printf ("6. Thoat\n");
		printf ("===========================\n");
		do {
			printf ("Lua chon: ");
			fflush(stdin);
		    check = getchar();
			switch (check){
					case '1': 
						printf ("\nNhap gia tri a: ");
						scanf ("%d", &a);
						printf ("\nNhap gia tri b: ");
						scanf ("%d", &b);
						break;
					case '2': 
						printf ("Tong cua a va b = %d\n",Tong (a, b));
						break;
					case '3': 
						printf ("Hieu cua a va b = %d\n", Hieu (a, b));
						break;
					case '4': 
						printf ("Tich cua a va b = %d", Tich (a, b));
						break;
					case '5':
						printf ("Thuong cua a va b = %.1f\n", Thuong (a, b));
						break;
					case '6':
						return 0;	
				}
				printf ("ban co muon tiep tuc?\n Y/N: ");
				fflush (stdin);
				scanf ("%c", &check);
			}
		while (check == 'Y'|| check == 'y');
	
	}

