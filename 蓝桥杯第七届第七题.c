/*

������ҵ

����Сѧ����ѧ��ĿҲ������ô����ġ�
�������������ҵ��

   �� + �� = ��
   �� - �� = ��
   �� �� �� = ��
   �� �� �� = ��
   
   (�����ʾ�����������Բμ���ͼ1.jpg��)
   
ÿ���������1~13�е�ĳһ�����֣��������ظ���
���磺
 6  + 7 = 13
 9  - 8 = 1
 3  * 4 = 12
 10 / 2 = 5

�Լ��� 
 7  + 6 = 13
 9  - 8 = 1
 3  * 4 = 12
 10 / 2 = 5

�������ֽⷨ�����ӷ����˷������ɺ��㲻ͬ�ķ�����
 
��һ���ҵ��˶����ַ�����


����д��ʾ������Ŀ��������
ע�⣺���ύ��Ӧ����һ����������Ҫ��д�κζ�������ݻ�˵�������֡�


*/ 
#if 0
#include <stdio.h>
void output(int*,int);
void qpl(int n,int k,int *a,int*);
void swap(int*,int*);
int panduan(int*,int);

int main(void) 
{
	int a[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	int gs=0;
	qpl(13,0,a,&gs);
	printf("%d\n",gs);
	return 0;
}

void qpl(int n,int k,int *a,int* p_gs)
{
 if(k==n)
 {
  if(panduan(a,n))
  {
  ++*p_gs;
  }
  return;
 }
 int i;
 for(i=k;i<n;i++)
 {
   swap(a+k,a+i);
   qpl(n,k+1,a,p_gs);
   swap(a+k,a+i);
 }
}

int panduan(int*a,int n)
{
 if(a[0]+a[1]==a[2]&&a[3]-a[4]==a[5]&&a[6]*a[7]==a[8]&&a[9]%a[10]==0&&a[9]/a[10]==a[11])
 {
  output(a,n);
  return 1;
 }
 return 0;
}

void output(int *a,int n)
{
 while(n--)
 {
  printf("%d ",*a++);
 }
 putchar('\n');
}

void swap(int *p,int *q)
{
 int t=*p;
 *p=*q;
 *q=t;
}
#endif
/*
����ʽ

     B      DEF
A + --- + ------- = 10
     C      GHI
     
�������ʾ�����⣬���Բμ���ͼ1.jpg����
	 
	 
�����ʽ��A~I����1~9�����֣���ͬ����ĸ����ͬ�����֡�

���磺
6+8/3+952/714 ����һ�ֽⷨ��
5+3/1+972/486 ����һ�ֽⷨ��

�����ʽһ���ж����ֽⷨ��

ע�⣺���ύӦ���Ǹ���������Ҫ��д�κζ�������ݻ�˵�������֡�

*/
#if 0
#include <stdio.h>
void qpl(int,int,int*,int*);
void output(int*,int);
int panduan(int*,int);

int main(void)
{
  int a[9]={1,2,3,4,5,6,7,8,9};
  int gs=0;
  qpl(9,0,a,&gs);
  printf("%d\n",gs);
  return 0;
}

void qpl(int n,int k,int *a,int *p_gs)
{
  if(k==n)
  {
   if(panduan(a,n))
   {
    ++*p_gs;
   }
   return;
  }
  int i;
  for(i=k;i<n;i++)
  {
   swap(a+k,a+i);
   qpl(n,k+1,a,p_gs);
   swap(a+k,a+i);
  }
}

void swap(int*p,int*q)
{
 int t=*p;
 *p=*q;
 *q=t;
}

int panduan(int*a,int n)
{
 if(fabs(a[0]*1.0 + a[1]*1.0 / a[2] + (a[3] * 100 + a[4] * 10 + a[5])*1.0 / (a[6] * 100 + a[7] * 10 + a[8]) - 10.00)
  < 0.0000000001)
 {
  output(a,n);
  return 1;
 }
 return 0;
}

void output(int *a,int n)
{
 while(n--)
 {
  printf("%d ",*a++);
 }
 putchar('\n');
}
#endif
#if 0
#include <stdio.h>

void swap(int a[], int i, int j)
{
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}

int partition(int a[], int p, int r)
{
    int i = p;
    int j = r + 1;
    int x = a[p];
    while(1){
        while(i<r && a[++i]<x);
        while(a[--j]>x);
        if(i>=j) break;
        swap(a,i,j);
    }
    printf("%d\n",j);
    return j;
}

void quicksort(int a[], int p, int r)
{
    if(p<r){
        int q = partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}
    
int main()
{
	int i;
	int a[] = {5,13,6,24,2,8,19,27,6,12,1,17};
	int N = 12;
	
	quicksort(a, 0, N-1);
	
	for(i=0; i<N; i++) printf("%d ", a[i]);
	printf("\n");
	
	return 0;
}

#endif

/*

��������
������ȫ����������һ��(n��)���֤���룬ϣ�����������ڶ����ǽ��дӴ�С�����������ͬ���ڣ�
�����֤�����С�����������֤����Ϊ18λ��������ɣ���������Ϊ��7����14λ
�����ʽ
������һ��һ������n����ʾ��n�����֤����
�������µ�n�У�ÿ��һ�����֤���롣
�����ʽ
�������������ڴӴ�С���������֤�ţ�ÿ��һ��
��������
5
466272307503271156
215856472207097978
234804580401078365
404475727700034980
710351408803093165
�������
404475727700034980
234804580401078365
215856472207097978
710351408803093165
466272307503271156
���ݹ�ģ��Լ��
����n<=100000

*/
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void s_to_z(char*s,int n,int*a);
void output(int n,int *a);

int main(void)
{
  int n;
  scanf("%d",&n);
  char s[20];
  int a[n];
  memset(a,0,sizeof(a));
  output(n,a);
  return 0;
}

void s_to_z(char*s,int k,int*a)
{
  int i;
  int zd=1000000;
  for(i=6;i<13;i++)
  {
   a[k]+=(s[i]-'0')*zd;
   zd/=10;
  }
}

void output(int n,int *a)
{
 while(n--)
 {
  printf("%d ",*a++);
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
#if 1
#include <stdio.h>
#include <math.h>
#define zd  100000
void dyzsb(int*,int*,int*);
int q_max(int,int);
void nantg(int*,int,int);

int main(void)
{
  int n;
  scanf("%d",&n);
  int dyb[zd]={0},zsb[zd]={0},ws=0;
  dyzsb(zsb,dyb,&ws);
  nantg(zsb,n,ws);
  return 0;
}

void dyzsb(int*zsb,int*dyb,int*p_ws)//ɸ�� 
{
 int i;
 int zhi=sqrt(zd);
 for(i=2;i<=zhi;i++)
 {
  if(dyb[i]==0)
   {
    zsb[*p_ws]=i;
    ++*p_ws;
    dyb[i]=1; 
   }
  }
}

int q_max(int a,int b)
{
 return a>b?a:b;
}

void nantg(int*zsb,int n,int ws)
{
 int i,k,a[zd];
 for(i=1;i<=n;i++)
 {
  for(k=0;k<ws;k++)
  {
   if(zsb[k]*zsb[k]>i)
   {
    break;
   }
   if(i%zsb[k]==0)
   {
    a[i]=q_max(a[i],a[i-2*zsb[k]]+zsb[k]);
   }
  }
 }
 printf("%d\n",a[n]);
}
#endif
 
 
 
#if 0
#include <stdio.h>
#include <math.h>
#define zd 100000

void q_zsb (int [],int [] ,int *);
void natangguo (int [],int ,int );
int max (int ,int );

int main(void) 
{
	int n;
	scanf ("%d",&n);
	int pd[zd] ={0};
	int zsb[zd] = {0};
	int ws = 0;
	q_zsb (pd,zsb,&ws);
	natangguo (zsb,n,ws);
	return 0;
}

int max (int a,int b)
{
	return a > b ? a : b;
}

void natangguo (int zsb[],int n,int ws)
{
	int a[zd];
	int i,j;
	for (i = 1;i <= n;i ++)
	{
		for (j = 0;j < ws;j ++)
		{
			if (zsb[j] * zsb[j] > i)//P��M��һ�������ڸ�����M��������
			{
				break;
			}
			if (i % zsb[j] == 0)
			{
				a[i] = max (a[i],a[i-2*zsb[j]] + zsb[j]);
			}
		}
	}
	printf ("%d\n",a[n]); 
}

void q_zsb (int pd[],int zsb[],int * p_wei)
{
	int n = sqrt (zd);
	int i;
	for (i = 2;i <= n;i ++)
	{
		if (pd[i] == 0)
		{
			zsb[* p_wei] = i;
			(* p_wei) ++;
			int j;
			for (j = i*i;j <= n;j ++)
			{
				pd[j] = 1;
			}
		}
	}
}

#endif
#if 0
#include <stdio.h>
#include <math.h>
#define zd 100000

void q_zsb (int [],int [] ,int *);
void natangguo (int [],int ,int );
int max (int ,int );

int main(void) 
{
	int n;
	scanf ("%d",&n);
	int pd[zd] ={0};
	int zsb[zd] = {0};
	int ws = 0;
	q_zsb (pd,zsb,&ws);
	natangguo (zsb,n,ws);
	return 0;
}

int max (int a,int b)
{
	return a > b ? a : b;
}

void natangguo (int zsb[],int n,int ws)
{
	int a[zd];
	int i,j;
	for (i = 1;i <= n;i ++)
	{
		for (j = 0;j < ws;j ++)
		{
			if (zsb[j] * zsb[j] > i)//P��M��һ�������ڸ�����M��������
			{
				break;
			}
			if (i % zsb[j] == 0)
			{
				a[i] = max (a[i],a[i-2*zsb[j]] + zsb[j]);
			}
		}
	}
	printf ("%d\n",a[n]); 
}

void q_zsb (int pd[],int zsb[],int * p_wei)
{
	int n = sqrt (zd);
	int i;
	for (i = 2;i <= n;i ++)
	{
		if (pd[i] == 0)
		{
			zsb[* p_wei] = i;
			(* p_wei) ++;
				pd[i] = 1;

		}
	}
}
#endif

