/*

��������
������һ����СΪn����������ѡȡһЩԪ�أ�ʹ�����ǵĺ͵��ڸ�����ֵT��ÿ��Ԫ����ѡһ�Σ�����һ������ѡ��
�����ʽ
������һ��һ��������n����ʾ��������Ԫ�صĸ�����
�����ڶ���n���������ÿո������
����������һ������T����ʾҪ�ﵽ�ĺ͡�
�����ʽ
��������������У�ÿ�����һ��⣬����ѡȡ�����֣����������е�˳�����С�
�������ж���⣬���������������n�������ģ����������򶼲����������������������n-1�������ģ��������ơ�
�������һ������ܷ�������
��������
5
-7 -3 -2 5 9
0

�������
-3 -2 5
-7 -2 9
2
���ݹ�ģ��Լ��
����1<=n<=22
����T<=maxlongint
��������������Ԫ�صĺͶ�������long�ķ�Χ

*/
#if 0
#include <stdio.h>
void xh(int,int*,int*,int,int*,int);
int panduan(int*a,int*b,int n,int jg);
void shuchu(int*a,int*b,int n);
void shuru(int n,int *a);
int tqpd(int*,int);

int main(void) 
{
	int n,jg;
	scanf("%d",&n);
	int a[n];
	shuru(n,a);
	scanf("%d",&jg);
	int b[22]={0};
	int gs=0;
	xh(n,b,a,n-1,&gs,jg);
	printf("%d\n",gs);
	return 0;
}


void shuru(int n,int *a)
{
 while(n--)
 {
  scanf("%d",a++);
 }
}
/*
22
1 -1 2 -2 4 -4 8 -8 16 -16 32 -32 64 -64 128 -128 256 -512 512 -1024 -256 1024
0

*/
void xh(int n,int* a,int*b,int k,int *p_gs,int jg)
{
 if(k<0)
 {
  if(panduan(a,b,n,jg))
  {
   shuchu(a,b,n);
   (*p_gs)++;
  }
  return;
 }
 for(a[k]=0;a[k]<2;a[k]++)
 {
  xh(n,a,b,k-1,p_gs,jg);
 } 
}

int tqpd(int*b,int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(b[i]!=0)
  {
   return 1;
  }
 }
 return 0;
}

int panduan(int*a,int*b,int n,int jg)
{
 int i,he=0;
 if(tqpd(a,n))
 {
  for(i=0;i<n;i++) 
  {
   he+=a[i]*b[i];
  }
  return he==jg;
 }
 return 0;
}

void shuchu(int*a,int*b,int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(a[i]!=0)
  {
   printf("%d ",b[i]);
  }
 }
 putchar('\n'); 
}
#endif 
/*
��������
���������СB����N���ǣ�������������СBֱ�ӳԵ���
�������赱ǰ��M���ǣ�СBÿ�ο�����P���ǣ�����P��M��һ�������ڸ�����M����������
��ʱ������ͻ���СB����P�����Ժ��ٴ��Ƕ�������P���ǡ�Ȼ��СB�Ϳ��Խ������ǡ�
��������СBϣ��֪���������ö����ǡ�
�����ʽ
����һ������N
�����ʽ
�����������ö�����
��������
15
�������
6
���ݹ�ģ��Լ��
����N <= 100000
*/
#include <stdio.h>
#include <math.h>
int q_zys(int);
int panduan_zs(int);
int panduan_ys(int,int);

int main(void)
{
 int N;
 scanf("%d",&N);
 int zdtg=0;
 while(N>=4)
 {
  zdtg+=q_zys(N);
  printf("%d ",zdtg);
  N-=q_zys(N)*2;
  printf("%d ",N);
  putchar('\n'); 
 }
 printf("%d\n",zdtg);
 return 0;
}

int q_zys(int n)
{
 int i;
 for(i=(int)sqrt(n);i>=2;i--)
 {
  if(panduan_zs(i)&&panduan_ys(i,n))
  {
   return i;
  }
 }
 return 0;
}

int panduan_zs(int n)
{
  int i;
  for(i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
	 return 0;
	}
  }
  return n==1?0:1;
}

int panduan_ys(int ys,int n)
{
 return n%ys==0?1:0;
}








