//(1)Բ�����(2)����������(3)�������
#include <stdio.h>
#define PI 3.1415926536
int main(void) 
{
	double i;
	scanf("%lf\n",&i);
	printf("%.10lf %.10lf %.10lf\n",PI*i*i,4*PI*i*i,4./3.*PI*i*i*i);
	return 0;
}
