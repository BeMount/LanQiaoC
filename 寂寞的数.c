/*
��������
��������һ������A,һ���Ǹ�����b��һ��������m����A��b�η���m��������
��������һ��nxn�ľ����m�������õ�������һ��nxn�ľ�����������ÿһ��Ԫ����ԭ�����Ӧλ���ϵ�����m��������
����Ҫ����������⣬���Խ�A����b�Σ�ÿ�ζ���m���࣬�����ַ����ر�������b�ϴ�ʱ�޷�ʹ�á��������һ�ֽϿ���㷨(��A^b��ʾA��b�η�)��
������b=0����A^b%m=I%m������I��ʾ��λ����
������bΪż������A^b%m=(A^(b/2)%m)^2%m�����Ȱ�A��b/2�η���m���࣬Ȼ����ƽ�����m���ࡣ
������bΪ��������A^b%m=(A^(b-1)%m)*a%m��������A��b-1�η���m���࣬Ȼ���ٳ�A���m���ࡣ
�������ַ����ٶȽϿ죬��ʹ�����ַ�������A^b%m������A��һ��2x2�ľ���m������10000��
�����ʽ
���������һ�а�����������b, m���ڶ��к͵�����ÿ������������Ϊ����A��
�����ʽ
����������У�ÿ��������������ʾA^b%m��ֵ��
��������
2 2
1 1
0 1
�������
1 0
0 1
*/ 
#if 0
#include <stdio.h>

void shuru(long long ,long long[][2]);
void q_jz_m(long long ,long long [][2],long long [][2],long long );
void shuchu(long long ,long long [][2]);
void q_jz_ys(long long ,long long [][2],long long [][2],long long ,long long );
void q_m_yu(long long  [][2],long long ,long long );
void q_jz_xc(long long  h,long long  [][2],long long [][2]);

long long main(void) 
{
	long long n,m;
	scanf("%lld%lld",&n,&m);
	long long a[2][2];
	shuru(2,a);
	long long c[2][2];
	q_jz_m(2,a,c,n,m);
	q_cf(2,a,n,m);
	return 0;
}


void shuru(long long h,long long  a[][2])
{
 long long i;
 for(i=0;i<h;i++)
 {
 long long k;
 for(k=0;k<2;k++)
 {
  scanf("%lld",&a[i][k]);
 }
 }
}

void q_cf(long long h, long long a[][2],long long ,c[][2],int n,int m)
{
  int jz[2][2];
  int i;
  for(i=0;i<2;i++)
  {
  	int j;
   for(j=0;j<2;j++)
   {
    jz[i][j]=i==j?1:0;
   }
  }
  while(n)
  {
    if(n&1)
    {
	 q_jz_xc(2,jz,a);
	}
	q_jz_m(2,a,c,2);
	n>>=1;
  }

}

void q_jz_m(long long h,long long a[][2],long long c[][2],long long b)
{
 long long s[2][2];
 long long i;
 for(i=0;i<2;i++)
 {
 long long k;
 for(k=0;k<2;k++)
 {
  s[i][k]=i==k?1:0;
  c[i][k]=i==k?1:0;
 }
 }
 
 while(b--)
 {
 	
  long long i_;
  for(i_=0;i_<h;i_++)
  {
  long long j_;
  for(j_=0;j_<2;j_++)
  {
  long long k_;
  c[i_][j_]=0;
  for(k_=0;k_<2;k_++)
  {
  c[i_][j_]+=s[i_][k_]*a[k_][j_];
  }
  }
  }
  
  long long i_0;
  for(i_0=0;i_0<h;i_0++)
  {
  long long k_0;
  for(k_0=0;k_0<2;k_0++)
  {
  s[i_0][k_0]=c[i_0][k_0];
  }
  }
  }

}

void q_jzxc(int h,long long s[][2],long long a[][2])
{
  long long i_;
  for(i_=0;i_<h;i_++)
  {
  long long j_;
  for(j_=0;j_<2;j_++)
  {
  long long k_;
  c[i_][j_]=0;
  for(k_=0;k_<2;k_++)
  {
  c[i_][j_]+=s[i_][k_]*a[k_][j_];
  }
  }
  }
  long long i_0;
  for(i_0=0;i_0<h;i_0++)
  {
  long long k_0;
  for(k_0=0;k_0<2;k_0++)
  {
  s[i_0][k_0]=c[i_0][k_0];
  }
  }
  }


}

  
//��b=0����A^b%m=I%m������I��ʾ��λ����
//��bΪż������A^b%m=(A^(b/2)%m)^2%m�����Ȱ�A��b/2�η���m���࣬Ȼ����ƽ�����m���ࡣ
//��bΪ��������A^b%m=(A^(b-1)%m)*a%m��������A��b-1�η���m���࣬Ȼ���ٳ�A���m���ࡣ




void shuchu(long long h,long long  c[][2]) 
{
 long long i;
 for(i=0;i<h;i++)
 {
 long long k;
 for(k=0;k<2;k++)
 {
   printf("%lld ",c[i][k]);
 }
 putchar('\n');
 }
}
#endif 
/*

��������
�������¾�Ի��һ���������������������
������������������n�����Ƕ���d(n)��ֵΪΪn�������n�ĸ������ֵĺ͡����磬d(23)=23+2+3=28, 
d(1481)=1481+1+4+8+1=1495��
������ˣ�����������һ��n��Ϊ��㣬����Թ�������һ���������У�n,d(n),d(d(n)),d(d(d(n)))....
���磬��33��ʼ�ĵ�������Ϊ��
����33, 39, 51, 57, 69, 84, 96, 111, 114, 120, 123, 129, 141, ...
�������ǰ�n����d(n)������Ԫ��������������У�33��39������Ԫ��39��51������Ԫ��
�ȵȡ���һЩ����������������������Ԫ������101��������91��100���ɡ���Ҳ��һЩ����û���κ�����Ԫ��
��42�����ǰ����������ֳ�Ϊ��į�����֡�
�����ʽ
����һ�У�һ��������n��
�����ʽ
���������������С��n�����м�į�����֣�ÿ��һ����
��������
40
�������
1
3
5
7
9
20
31
���ݹ�ģ��Լ��
����n<=10000

*/

#include <stdio.h>
#include <stdbool.h>

void q_jms(int,int*);
void pdjms(int,int*);
int q_he(int);

int main(void)
{
  int n;
  scanf("%d",&n);
  int a[100000]={0};
  pdjms(n,a);
  q_jms(n,a);
  return 0;
}

void q_jms(int n,int *a)
{
  int i;
  for(i=1;i<n;i++)
  {
   if(a[i]==0)
   {
    printf("%d\n",i);
   }
  }
}

void pdjms(int n,int *a)
{
  int i;
  for(i=1;i<n;i++)
  {
    a[i+q_he(i)]=1;
  }
}

int q_he(int n)
{
  int he=0;
  do
  {
   he+=n%10;
  }
  while((n/=10)!=0); 
  return he;
}





