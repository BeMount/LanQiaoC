#include <stdio.h>
#include <stdlib.h>

//��������


typedef 
struct complexes{
 double a; 
 double b;	
}Complex; 

void Init(Complex* data);
void PlusOfComplex(Complex data1,Complex data2);
void MultiOfComplex(Complex data1,Complex data2);
void ConsOfComplex(Complex data1,Complex data2);
void meanu(void);
 
int main(void) 
{
	Complex data1,data2;
	Init(&data1);
	Init(&data2);
	printf("������ѡ��\n");
	meanu(); 
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:	PlusOfComplex(data1,data2);
		break;
		case 2:	ConsOfComplex(data1,data2);
		break;
		case 3: MultiOfComplex(data1,data2);
        break;
		default:printf("��������\n");				
	}
	return 0;
}

void meanu(void)
{
  printf("1. �ӷ�\n");
  printf("2. ����\n");
  printf("3. �˷�\n");	
} 

void Init(Complex *p_data)
{
	double DataA,DataB;
	scanf("%lf%lf",&DataA,&DataB);
	p_data->a=DataA;
	p_data->b=DataB;
}

void PlusOfComplex(Complex data1,Complex data2)
{
	Complex FinalData;
	FinalData.a=data1.a+data2.a;
	FinalData.b=data1.b+data2.b;
	printf("%.2lf+%.2lfi",FinalData.a,FinalData.b);
}

void ConsOfComplex(Complex data1,Complex data2)
{
	Complex FinalData;
	FinalData.a=data1.a-data2.a;
	FinalData.b=data1.b-data2.b;
	printf("%.2lf+%.2lfi",FinalData.a,FinalData.b);
}

void MultiOfComplex(Complex data1,Complex data2)
{
	Complex FinalData;
	FinalData.a=data1.a*data2.a-data1.b*data2.b;
	FinalData.b=data1.b*data2.a+data2.b*data1.a;
	printf("%.2lf+%.2lfi",FinalData.a,FinalData.b);
}


