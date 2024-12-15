#include<stdio.h>
#include<math.h>
int main(){
	long money,month;
	double interest,interestRate,total;
	printf("moi ban nhap so tien ban dau: ");
	scanf("%ld",&money);
	printf("moi ban nhap lai suat: ");
	scanf("%lf",&interestRate);
	interestRate/=100;
	printf("moi ban nhap so thang gui: ");
	scanf("%ld",&month);
	total= money*pow((1+interestRate),month);
	interest=total-money;
	printf("tien lai: %.2lf\n",interest);
	printf("tien nhan duoc: %.2lf",total);
	return 0;
	
}
