///*
//��������
//������дһ�����򣬶���һ�����������������ǰ��մ�С�����˳�����еģ�
//���ǵĸ���NҲ�����û�����ģ���಻�ᳬ��20��Ȼ����򽫶�����������ͳ�ƣ�
//�ѳ��ִ��������Ǹ�����Ԫ��ֵ��ӡ���������������Ԫ��ֵ���ֵĴ�����ͬ�������е�һ����ôֻ��ӡ�Ƚ�С���Ǹ�ֵ��
//���������ʽ����һ����һ������N��N? ��? 20����������N�У�ÿһ�б�ʾһ�����������Ұ��մ�С�����˳�����С�
//���������ʽ�����ֻ��һ�У������ִ��������Ǹ�Ԫ��ֵ��
//�����������
//��������
//5
//100
//150
//150
//200
//250
//�������
//150
// 
//*/
//#include <stdio.h>
//typedef
//struct
//{
//  int sz;
//  int cs;
//}shuju_t;
//
//void shuru(shuju_t*,int,int*);
//int q_xb(shuju_t*,int);
//
//int main(void) 
//{
//    int N;
//    scanf("%d",&N);
//    if(N>0)
//    {
//	 shuju_t s[N];
//	 int gs=1;
//     shuru(s,N,&gs);
//     printf("%d\n",s[q_xb(s,gs)]);
//	}
//	return 0;
//}
//
//int q_xb(shuju_t* s,int gs)
//{
//  int i,xb=0;
//  int max=s[xb].cs;
//  for(i=1;i<gs;i++)
//  {
//    if(s[i].cs>max)
//    {
//	 max=s[i].cs;
//	 xb=i;
//	}
//  }
//  return xb;
//} 
//
//void shuru(shuju_t* s,int n,int* p_gs)
//{
//  int xb=0;
//  scanf("%d",&s[xb].sz);
//  s[xb].cs=1;
//  while(--n>0)
//  {
//    int t;
//    scanf("%d",&t);
//    if(t==s[xb].sz)
//    {
//	  s[xb].cs++;
//	}else
//	{
//	 xb++;
//	 s[xb].sz=t;
//	 s[xb].cs=1;
//	 ++*p_gs;
//	}
//  }
//}
/*
�������  
*/
/*
/*
��������
������������[L, R] �� ����������������ĸ�����
�����ʽ
����������L��R��
�����ʽ
����һ�У������������ĸ�����
��������
2 11
�������
5
���ݹ�ģ��Լ��
����2 <= L <= R <= 2147483647 R-L <= 1000000
*/
#if 0
#include <stdio.h>

void input( int [] , int );
void shai( int [] , int );
void output( int [] ,int,int);

int main(void)
{
	int R,L;
	scanf("%d%d",&L,&R);
	int a[R];
	input(a,R);
	shai(a,R);
	output(a,R,L);
	return 0;
}

void output(int*a,int R,int L)
{
	int i;
	for(i=L-1;i<R;i++ )
	{
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}
	}
}

void shai(int a[],int n)
{
	int i;
	for( i = 0 ; i < n ; i ++ )
	{
		if( a[i] == 0 )
		{
			continue ;
		}
		int bs;
		for( bs=i+a[i];bs<n;bs+=a[i])
		{
			a[bs]=0;
		}
	}
}

void input( int a[] , int n )
{
	int i;
	for( i = 0 ; i < n ; i ++ )
	{
		a[i]=i+1;
	}
	a[0]=0 ; 
}
#endif


/*
��������
�������ռҵ�Ժ������һ��ƻ������ÿ���������Ͼͻ���n��ƻ����ƻ�������ʱ��
   ���վͻ���ȥժƻ���������и�30���׸ߵİ�ʣ���������ֱ������ժ��ƻ����ʱ�򣬾ͻ�ȵ�����������ԡ�
����������֪n��ƻ��������ĸ߶ȣ��Լ����հ�����ֱ��ʱ���ܹ��ﵽ�����߶ȡ�
����������ƻ����ƻ���ͻ�����������������һ��,��������ϴ�ٺ�ƻ�����ϻ��м���ƻ����
�����ʽ
������������������ݡ���һ��ֻ��������������n(5<=n<=200)��m(60<=m<=200),
��ʾƻ����Ŀ���������ֿɴﵽ�ĸ߶ȣ�������Ϊ��λ����
�ڶ��а���n��100��200֮�䣨����100��200����������������Ϊ��λ���ֱ��ʾƻ��������ĸ߶ȣ�
�������ڵ�����֮����һ���ո������
�����ʽ
�����������һ�У���һ��ֻ����һ����������ʾ���ղ��ܹ�ժ����ƻ������Ŀ��
��������
10 110
100 200 150 140 129 134 167 198 200 111
�������
5
*/
#if 0
#include<stdio.h>

void input(int* a,int tzs);
int q_xcs(int* a,int tzs,int gd);

int main(void)
{
  int tzs,gd;
  scanf("%d%d",&tzs,&gd);
  int a[tzs];
  input(a,tzs);
  printf("%d\n",q_xcs(a,tzs,gd));
  return 0;
} 

void input(int *a,int n)
{
  while(n-->0)
  {
   scanf("%d",a++);
  }
}

int q_xcs(int *a,int n,int gd)
{
  int i, xcs=n,zdgd=gd+30;
  for(i=0;i<n;i++)
  {
   if(a[i]<=zdgd)
   {
    xcs--;
   }
  }
  return xcs;
}
#endif
#include <stdio.h>

int main(void)
{
  char a;
  char b;
  scanf("%c",&a);
  printf("%d",a);
  return 0;
}

