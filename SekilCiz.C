/*
	Name: Sekil_Ciz 1.0.1
	Copyright: GNU GENERAL PUBLIC LICENSE
	Author: ironx1
	Date: 03.08.22 23:33
	Description: Kare, ücgen ya da dikücgen cizebileceğiniz program
*/

#include <stdio.h>
#include <math.h>
void kare(int);
void dikUcgen(int);
void ucgen(int);
float ucgenAlan(float);
float dikAlan(float);
int kareAlen(int);
int main(int argc, char const *argv[])
{
	int secim,sutun;
	while(1){
		printf("1.Kare\n2.Dik Ucgen\n3. Ucgen\n");
		printf("cizmek istediginiz sekil(1/2/3): ");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				printf("sutun sayisi: ");
				scanf("%d",&sutun);
				kare(sutun);
				printf("Alani = %d\n", kareAlen(sutun));
				break;
			case 2:
				printf("sutun sayisi: ");
				scanf("%d",&sutun);
				dikUcgen(sutun);
				printf("Alani = %.2f\n", dikAlan((float)sutun));
				break;
			case 3:
				printf("sutun sayisi: ");
				scanf("%d",&sutun);
				ucgen(sutun);
				printf("Alani = %.2f\n", ucgenAlan((float)sutun));
				break;
			default:
				printf("Hatali Secim Yaptiniz\n");
				break;				
		}
	}	
	return 0;
}
void kare(int x){
	for (int i = 1; i <= x; ++i)//satır
	{
		for (int j = 1; j <= x; ++j)//sütun
		{
			printf("*");		}
		printf("\n");	
	}
}
void dikUcgen(int y){
	for (int i = 1; i <= y; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}
void ucgen(int z){
	for (int i = 1; i <= z; ++i)
	{
		for (int j = 1; j <= z-i; ++j)
		{
			printf(" ");
		}
		for (int j = 1; j <=i ; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}
}
float ucgenAlan(float a){
	return ((a*a)*sqrt(3))/4;
}
float dikAlan(float b){
	return (b*b)/2;
}
int kareAlen(int c){
	return c*c;
}
