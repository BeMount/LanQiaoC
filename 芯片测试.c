/*
��������
������n��2��n��20����оƬ���к��л�����֪��оƬ�Ȼ�оƬ�ࡣ
����ÿ��оƬ����������������оƬ���ú�оƬ��������оƬʱ����
��ȷ����������оƬ�Ǻû��ǻ������û�оƬ��������оƬʱ������������û��ǻ��Ĳ��Խ����
���˽���뱻����оƬʵ�ʵĺû��޹أ���
������������оƬ�Ĳ��Խ��������ЩоƬ�Ǻ�оƬ��
�����ʽ
�����������ݵ�һ��Ϊһ������n����ʾоƬ������
�����ڶ��е���n+1��Ϊn*n��һ�ű�ÿ��n�����ݡ���
�е�ÿ������Ϊ0��1������n���еĵ�i�е�j�У�1��i, j��n����
���ݱ�ʾ�õ�i��оƬ���Ե�j��оƬʱ�õ��Ĳ��Խ����1��ʾ�ã�
0��ʾ����i=jʱһ��Ϊ1��������ʾ��оƬ�Ա���Ĳ��Խ����оƬ���ܶԱ�����в��ԣ���
�����ʽ
��������С�����˳��������к�оƬ�ı��
��������
3
1 0 1
0 1 0
1 0 1
�������
1 3
*/ 
#include <stdio.h>
void shuru(int ,int n,int [][n]);
void panduan(int,int n,int[][n]);
void select(int*,int*,int);

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	shuru(n,n,a);
	panduan(n,n,a);
	return 0;
}

void shuru(int h,int l,int a[][l])
{ 
   int i;
   for(i=0;i<h;i++)
   {
    int k;
	for(k=0;k<l;k++)
    {
	 scanf("%d",&a[i][k]);
	}
   }
}

void panduan(int h,int l,int a[][l])
{
   int count[h];
   int count_0[h];
   int j;
   for(j=0;j<h;j++)
   {
    count[j]=0;
    count_0[j]=0;
   }
   int i;
   for(i=0;i<l;i++)
   {
    int k;
	for(k=0;k<h;k++)
    {
	 count[i]+=a[i][k];
	 count_0[i]+=a[k][i];
	}
   }
   select(count,count_0,h);
}

void select(int *a,int *count,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   if(a[i]>=(n+1)/2)
   {
    if(count[i]>=(n+1)/2)
    {
	 printf("%d ",i+1);
	}
   }
  }

}

