/*
��������
����һ�����У�ÿ��ѯ�������е�l��������r�����е�K��������ĸ���

�����ʽ
��һ�а���һ����n����ʾ���г��ȡ�

�ڶ��а���n������������ʾ���������С�
5
1 2 3 4 5
2
1 5 2
2 3 2
����������һ��������m����ʾѯ�ʸ�����

������m�У�ÿ��������l,r,K����ʾѯ�����д������ҵ�l��������r�����У��Ӵ���С��K��������ĸ�������Ԫ�ش�1��ʼ��š�

�����ʽ
�ܹ����m�У�ÿ��һ��������ʾѯ�ʵĴ𰸡�
��������

�������
4
2
���ݹ�ģ��Լ��
����30%�����ݣ�n,m<=100��

����100%�����ݣ�n,m<=1000��

��֤k<=(r-l+1)�������е���<=106��

 
*/
#include <stdio.h>
void shuru(int*,int);
void shuchu(int *,int);
int  maxkey(int*,int,int);
void select(int*,int,int);
void swap(int*,int*);
void fuzhi(int*,int*,int,int);

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n];
	int c[n];
	shuru(a,n);
	int m;
	scanf("%d",&m);
	int low,high,zhi;
    int i;
	for(i=0;i<m;i++) 
	{
	scanf("%d%d%d",&low,&high,&zhi);
	fuzhi(c,a,low,high);
	select(c,0,high-low);
	shuchu(c,zhi-1);
	}
	return 0;
}

int maxkey(int * a,int low,int high)
{
  int max=low;
  int key=a[max];
  int i;
  for(i=low+1;i<=high;i++)
  {
   if(key<a[i])
   {
    key=a[i];
    max=i;
   }
  }
  return max;
}

void shuru(int *a,int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
}

void fuzhi(int*c,int*a,int low,int high)
{
  int i,k;
  for(i=0,k=low-1;k<high;i++,k++)
  {
   c[i]=a[k];
  }
}

void shuchu(int *c,int zhi)
{
  printf("%d\n",c[zhi]);
}


void select(int *a,int low,int high)
{
  int i;
  for(i=low;i<=high;i++)
  {
   int j=maxkey(a,i,high);
   if(j!=i)
   {
    swap(&a[i],&a[j]);
   }
  }
}

void swap(int *p_a,int *p_b)
{
  int temp=*p_a;
      *p_a=*p_b;
      *p_b=temp;
}
