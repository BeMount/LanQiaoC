/*
��������
���������������󣬷ֱ���m*s��s*n��С���������������˵Ľ����
�����ʽ
������һ�У��ո����������������m,s,n����������200����
����������m�У�ÿ��s���ո��������������ʾ����A��i��j����
����������s�У�ÿ��n���ո��������������ʾ����B��i��j����
�����ʽ
����m�У�ÿ��n���ո��������������������ľ���C��i��j����ֵ��
��������
2 3 2
1 0 -1
1 1 -3
0 3
1 2
3 1
�������
-3 2
-8 2

��ʾ
����CӦ����m��n�У�����C(i,j)���ھ���A��i�������������B��j�����������ڻ���
����������C(1,1)=(1,0,-1)*(0,1,3) = 1 * 0 +0*1+(-1)*3=-3
 
*/ 
#if 0
#include <stdio.h>

void shuru(int,int l,long long [][l]);
void q_jz_xc(int,int l0,int,int l1,long long [][l0],long long [][l1],long long  [][l1]);
void shuchu(int,int l,long long [][l]);

int main(void) 
{
	int m,n,s;
	scanf("%d%d%d",&m,&n,&s);
	long long  a[m][n];
	shuru(m,n,a);
	long long sz[n][s];
	shuru(n,s,sz);
	long long arry[m][s];
	q_jz_xc(m,n,n,s,a,sz,arry);
	shuchu(m,s,arry);
	return 0;
}

void shuru(int h,int l,long long a[][l])
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

void q_jz_xc(int h0,int l0,int h1,int l1,long long a[][l0],long long s[][l1],long long arry[][l1])
{
 int i;
 for(i=0;i<h0;i++)
 {
  int j;
  for(j=0;j<l1;j++)
  {
  arry[i][j]=0;
  int k;
  for(k=0;k<l0;k++)
  {
  arry[i][j]+=a[i][k]*s[k][j];
  }
  }
 }
}

void shuchu(int h,int l,long long a[][l])
{
  int i;
  for(i=0;i<h;i++)
  {
   int k;
   for(k=0;k<l;k++)
   {
    printf("%d ",a[i][k]);
   }
   putchar('\n');
  }
}
#endif
/*
��������
������д���������º�����
����void Add (int a[], int m, int b[], int n);
�����ú���������b��ǰn��Ԫ��׷�ӵ�����a��ǰm��Ԫ�غ󣬼ٶ�����a�������ٴ��m+n��Ԫ�صĿռ䡣
���磬�������aΪ{22,33,44,55,66,77,88,99}������bΪ{20,30,40,50,60,70,80,90}��
�����Add(a,5,b,3)�󣬽�������a��Ϊ{22,33,44,55,66,20,30,40}��ע������b��û�иı䣬��������a��ֻ��ı�n��Ԫ�ء�
����
�������룺4�С���һ��Ϊ����������m��n�����Կո�������ֱ��ʾ��Ҫ���������a������b��Ԫ�صĸ�����
�ڶ���Ϊm��������Ϊ����a��Ԫ�أ�������Ϊn��������Ϊ����b��Ԫ�ء�������Ϊ��������m1��n1��
��ʾ������b��ǰn1��Ԫ��׷�ӵ�����a��ǰm1��Ԫ�غ�
���������1�С���һ��Ϊ�������a�е�Ԫ�أ�����Ԫ��֮���Զ��Ÿ��������һ��Ԫ����������һ�����С�
*/

#if 0
#include<stdio.h>
void shuru(int*,int );
void sc_sz(int*,int );
void Add(int [], int , int [], int );

int main(void)
{
int m, n;
scanf("%d%d",&m,&n);
int a[m],b[n];
shuru(a,m);
shuru(b,n);
int m1, n1;
scanf("%d%d",&m1,&n1);
Add(a,m1,b,n1);
if(n1==0)
{
sc_sz(a,m);
return 0;
}
sc_sz(a,m1+n1);
return 0;
}

void shuru(int*a,int n)
{
  while(n-->0)
  {
   scanf("%d",a++);
  }
}

void Add(int a[], int m, int b[], int n)
{
int i,k;
for(i=m,k=0;k<n;i++,k++)
{
a[i]=b[k];
}
}

void sc_sz(int a[],int n)
{
 while(n-->1)
 {
  printf("%d, ",*a++);
 }
 printf("%d ",*a++);
 putchar('\n');
}
#endif

#if 1
#include <stdio.h>

void shuru ( int , int ); 

int main(void) 
{
	int shu1 , shu2 ;
	shuru ( shu1 , shu2 );
	printf("��%d  %d\n", shu1 , shu2 ); 
	return 0;
}

void shuru ( int s1 , int s2 )
{
	scanf ("%d%d", &s1, &s2);
	//printf("һ %d  %d\n",  s1 , s2 );
}
#endif









