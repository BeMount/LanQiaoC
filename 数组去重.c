//����10��������ɵ����У�Ҫ���������������򣬲�ȥ���ظ�Ԫ�ء�
//�����ʽ
//����10��������
//�����ʽ
//�������������ÿ��һ��Ԫ�ء�
//��������
//2 2 3 3 1 1 5 5 5 5
//�������
//1
//2
//3
//5
// 
#include <stdio.h> 
void shuru(int*,int);
void paixu(int*,int);
void shanchu(int*,int);
void shuchu(int*,int);
void jiaohuan(int*,int*);

int main(void) 
{
	int a[10];
	shuru(a,10);
	paixu(a,10);
	shanchu(a,10);
	shuchu(a,10);
	return 0;
}

void shuru(int a[],int n)
{
 int i;
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
}

void paixu(int a[],int n)
{
 int i;
 for(i=1;i<n;i++)
 {
 int k;
 for(k=0;k<n-i;k++)
 {
   if(a[k]>a[k+1])
   {
    jiaohuan(&a[k],&a[k+1]);
   }
 }
 }
}

void jiaohuan(int*a,int*b)
{
  int tmp;
  tmp=*a;
  *a=*b;
  *b=tmp;
}

void shanchu(int a[],int n)
{
 int i;
 for(i=0;i<n;i++) 
 {
  int k;
  for(k=i+1;k<n;k++)
  {
   if(a[i]==a[k])
   {
    a[k]=0;
   }
  }
 }
}

void shuchu(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   if(a[i]!=0)
   {
    printf("%d\n",a[i]);
   }
  }

}
