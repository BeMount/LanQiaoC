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
	q_jz_ys(2,a,c,n,m);
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
//��b=0����A^b%m=I%m������I��ʾ��λ����
//��bΪż������A^b%m=(A^(b/2)%m)^2%m�����Ȱ�A��b/2�η���m���࣬Ȼ����ƽ�����m���ࡣ
//��bΪ��������A^b%m=(A^(b-1)%m)*a%m��������A��b-1�η���m���࣬Ȼ���ٳ�A���m���ࡣ

void q_jz_ys(long long h,long long a[][2],long long c[][2],long long b,long long m)//
{
  if(b==0)
  {
  q_jz_m( h, a, c, b);
  q_m_yu(c,h,m);
  shuchu(2,c);
  }
  else{
  
  if(b%2==0)
  {
  q_jz_m( h, a, c, b/2);
  q_m_yu(c,h,m);
  q_jz_m(h,c,a,2);
  q_m_yu(a,h,m);
  shuchu(2,a);
  }
  
  else{
  q_jz_m(h,a,c,b-1);
  q_m_yu(c,h,m);
  q_jz_xc(h,a,c);
  q_m_yu(c,h,m);
  shuchu(2,c);
  }
  
  } 

}

void q_jz_xc(long long h,long long a[][2],long long c[][2])
{
  
  long long s[2][2];
  long long i_;
  for(i_=0;i_<h;i_++)
  {
  long long j_;
  for(j_=0;j_<2;j_++)
  {
  long long k_;
  s[i_][j_]=0;
  for(k_=0;k_<2;k_++)
  {
  s[i_][j_]+=c[i_][k_]*a[k_][j_];
  }
  }
  }
  
  long long i_0;
  for(i_0=0;i_0<h;i_0++)
  {
  long long k_0;
  for(k_0=0;k_0<2;k_0++)
  {
  c[i_0][k_0]=s[i_0][k_0];
  }
  }
}

void q_m_yu(long long c[][2],long long h,long long m)
{
  long long i;
  for(i=0;i<h;i++)
  {
   long long k;
   for(k=0;k<2;k++)
   {
    c[i][k]%=m;
   }
  }

}

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




