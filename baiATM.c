#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int sodu = 100000000;
char chonrut;
char chonchuyen;
char chontiep;
char luachon;
int name;
int pass;

// Tao Ham logic
int login(int username, int password)

{
    do
    {
      if (username == 123 && password == 456)
        {
	     	return (1);
        }
        else
        printf ("\n Sai username va Password");
        return (0);
        printf("moi ban nhap vao menu \n");
        fflush(stdin);
        scanf("%c", &chontiep);

    }
	  while (chontiep == 'Y' || chontiep == 'Y');
    return (0);
}

// Tao Ham Rut Tien

void ruttien(int num)

{
    int sotienrut;
    do

    {
        printf("Nhap So Tien Ban Rut: ");
        scanf("%lf", &sotienrut);
        if (sotienrut <= 5000000 && sotienrut < sodu)
        {
            sodu = sodu - sotienrut;
            printf("Thao Tac Thanh Cong!");
            printf("So Du Cua Ban La: %lf\n", sodu);
        }

        else if (sotienrut > sodu)

        {
            printf("Tai Khoan Cua Ban KHong Du Thuc Hien Thao Tac Nay \n");
        }

        else if (sotienrut > 5000000)

        {
            printf("Thao Tac Khong Thanh Cong\n");
        }

        else if (sotienrut < 50000)

        {
            printf("So Du Cua Ban > 50000\n");

        }
        printf("Ban Co Tiep Tuc? Y/N\n");
        fflush(stdin);
        scanf("%c", &chonrut);
    } while (chonrut == 'Y' || chonrut == 'y');

}
// Tao Ham Chuyen Khoan

void chuyenkhoan()

{
    int sotienck;
    int stknghan;
    do

    {
        printf("So Tai khoan Can Chuyen: \n");
        fflush(stdin);
        scanf("%f", &stknghan);
        printf("Moi nhap so tien can chuyen: \n");
        fflush(stdin);
        scanf("%lf", &sotienck);
        if (sotienck < sodu)

        {
            sodu = sodu - sotienck;
            printf("Chuyen Khoan Thanh Cong: %f cho tai khoan: %f\n", sotienck, stknghan);
            printf("So du TK: %f \n", sodu);
        }

        else

        {
            printf("So Tien Trong Tai Khoan Cua Ban Khong Du \n");
        }

        printf("Ban Co Muon Tiep Tuc: Y/N \n");
        fflush(stdin);
        scanf("%c", &chonchuyen);

    } while (chonchuyen == 'Y' || chonchuyen == 'y');

}

// Tao Ham kiem tra so Du
int ktrasodu(int sodu)

{

    if (sodu > 50000)

    {
        printf("So du TK: %f \n", sodu);
        return sodu;
    } 

    else

    {
        printf("So du TK Cua Ban Khong Du: %f \n", sodu);
        return 0;
    }

}
// Tao Ham Chinh

int main(int argc, char *argv[])

{
    int menu;
    int stknhan, sotienck;
    int num;
    printf("Nhap Username: \n");
    fflush(stdin);
    scanf("%d", &name);
    printf("Nhap Password: \n");
    fflush(stdin);
    scanf("%d", &pass);


    if (login(name, pass) == 1)

    {
        printf("Ban Da Dang Nhap Thanh Cong, Moi Chon Dich Vu \n");
        do

        {
            printf("1. Rut Tien \n");
            printf("2. Chuyen Khoan \n");
            printf("3. Kiem Tra So du \n");
            printf("4. Ket Thuc \n");
            fflush(stdin);
            scanf("%d", &menu);
            switch (menu)

            {

            case 1:
                ruttien(num);
                break;

            case 2:
                chuyenkhoan();
                break;

            case 3:
                ktrasodu(sodu);
                break;

            case 4:
                printf("Xin Chao Va Hen Gap Lai \n");
                break;
            }
            printf("Ban co muon lua chon giao dich de thuc hien tiep khong Y/N \n");
            fflush(stdin);
            scanf("%c", &luachon);

        } while (luachon == 'Y' || luachon == 'y');

    }
    return 0;

}
