/*��������ѧУ����һЩͬѧһ����һ���ʾ���飬Ϊ��ʵ��Ŀ͹��ԣ������ü����������N��1��1000֮������������N��100�������������ظ������֣�ֻ����һ������������ͬ����ȥ������ͬ������Ӧ�Ų�ͬ��ѧ����ѧ�š�Ȼ���ٰ���Щ����С�������򣬰����źõ�˳��ȥ��ͬѧ�����顣����Э��������ɡ�ȥ�ء��롰���򡱵Ĺ�����
�����ʽ
����������2�У���1��Ϊ1������������ʾ�����ɵ�������ĸ�����
����N
������2����N���ÿո��������������Ϊ���������������
�����ʽ
�������Ҳ��2�У���1��Ϊ1��������M����ʾ����ͬ��������ĸ�������2��ΪM���ÿո��������������Ϊ��С�����ź���Ĳ���ͬ���������
��������
10
20 40 32 67 40 20 89 300 400 15
�������
8
15 20 32 40 67 89 300 400
��Ŀ��Դ
*/

#include <stdio.h>
void swap(int*,int*);
void shchu(int*,int);
void paixu(int*,int);
void shuchu(int*,int);
void shuru(int*,int);
void qiu_size(int*,int);

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n];
	shuru(a,n);
	paixu(a,n);
	shchu(a,n);
	 qiu_size(a,n);
	shuchu(a,n);
	return 0;
}

void shuru(int*a,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   scanf("%d",a++);
  }
}

void paixu(int*a,int n)
{
 int i;
 for(i = 1;i < n;i ++)
 {
 int k;
 for(k = 0;k < n - i;k ++)
 {
   if(a[k]>a[k+1])
   {
    swap(&a[k],&a[k+1]); 
   }
 }
 
 }

}

void swap(int *a,int * b)
{ 
  int tmp=*a;
  *a=*b;
  *b=tmp;
}

void shchu(int *a,int n)
{
 int i;
 for(i = 0;i < n;i ++)
 {
 int k;
 for(k = i+1;k < n ;k ++)
 {
   if(a[i]==a[k])
   {
    a[k]=a[0];
   }
 }
 }
 
 }
 
 void qiu_size(int*a,int n)
 {
  int count = 1;
  int i;
  for(i = 1;i < n;i ++)
  {
   if(a[i]!=a[0])
   {
    count++;
   }
  } 
 printf("%d\n",count);
}
 
 void shuchu(int *a,int n)
 {
 printf("%d ",a[0]);
 int i;
 for(i = 1;i < n;i ++)
 {
   if(a[i]!=a[0])
   {
   printf("%d ",a[i]);
   }
 }
}
