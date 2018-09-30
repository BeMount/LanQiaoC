/*
��������
��������һ���ŷ⣬��N��1��N��100����λ�ÿ�������Ʊ��ÿ��λ��ֻ����һ����Ʊ������������M(M<=100)�ֲ�ͬ���ʵ���Ʊ����ֵΪX1,X2��.Xm�֣�Xi��������1��Xi��255����ÿ�ֶ���N�š�

������Ȼ���ŷ���������������Сֵ��min(X1, X2, ��, Xm)�����ֵ�� N*max(X1, X2, ��,����Xm)�������������õ�������ֵ���γ�һ�����ϣ�������û���ظ���ֵ����Ҫ���������������Ƿ���ڴ�1��ĳ��ֵ�������������У����������е����ֵ��

�������磬N=4��M=2����ֵ�ֱ�Ϊ4�֣�1�֣������γ�1��2��3��4��5��6��7��8��9��10��12��13��16�����У�����1��ʼ��������������Ϊ1��2��3��4��5��6��7��8��9��10�����������������е����ֵΪ10�֡�
�����ʽ
������һ�У��������ճ������Ʊ����N���ڶ��У���Ʊ����M�������У��ո������M�����֣���ʾ��Ʊ����ֵXi��ע�⣺Xi���в�һ���Ǵ�С����ģ�
�����ʽ
������1��ʼ�������������е����ֵMAX���������ڴ�1�ֿ�ʼ�����У����������Ʊ��û��1��������Ʊ���������0.
��������

����һ��
4
2
4 1
��������
10
5
2 4 6 8 10


�������

����һ��
10
��������
0
*/
#if 1 
#include <stdio.h>

void input(int*,int);
int q_max(int*,int);
void q_table(int*,int,int*,int,int,int);
void output(int*,int);
void chushih(int*,int);
void fyp(int*,int*,int,int);

int main(void) 
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[m];
	input(a,m);
	int max=q_max(a,m);
	int table[n*max+1];//����ֵ��Ϊ�±�
	table[0]=1;
	chushih(table,n*max+1);
	q_table(table,n*max+1,a,m,n,max);
	output(table,n*max+1);
	return 0;
}

void q_table(int*table,int table_cd,int *a,int m,int n,int max)
{
  int i;
  for(i=0;i<n;i++)
  {
  	int k;
  	for(k=max*i;k>=0;k--)
  	{
	 if(table[k]==1)
     {
      fyp(table,a,m,k);
     }
	}
 }
  
}


void output(int *a,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(a[i]==0)
    {
	 printf("%d ",i-1);
	 break;
	}
  } 
}

void fyp(int* table,int *a,int m,int xb)
{
 int i;
 for(i=0;i<m;i++)
 {
  table[xb+a[i]]=1;
 }
}

void input(int*a,int n)
{
  while(n--)
  {
   scanf("%d",a++);
  }
}

int q_max(int*a,int n)
{
  int i;
  int max=a[0];
  for(i=1;i<n;i++)
  {
   if(max<a[i])
   {
    max=a[i];
   }
  }
  return max;
}

void chushih(int *a,int n)
{
  int i;
  for(i=1;i<n;i++)
  {
    a[i]=0;
  }
}

#endif

/*

��������

���һ����Ȼ��N��K���Ʊ�ʾ����������ڵ���λ���������ڵ����֣�
��ô���Ǿ�˵�������K��������LλK��������K��������Ŀ������K = 4��L = 2��ʱ��
����K����Ϊ11��13��20��22��30��31��33 ��7�������������Ŀ�ܴ������������1000000007ȡģ���ֵ��
�����ʽ

�������������������K��L��
�����ʽ
���һ����������ʾ�𰸶�1000000007ȡģ���ֵ��
��������
4 2
�������
7
���ݹ�ģ��Լ��

����30%�����ݣ�KL <= 106��

����50%�����ݣ�K <= 16�� L <= 10��

����100%�����ݣ�1 <= K,L <= 100��
 
*/
#if 0
#include <stdio.h>
#include <stdlib.h>
#define zd (1000000007)
void q_cs(int,int,int khs[][107]);
int q_he(int,int,int[][107]);
int main(void)
{
  int K,L;
  scanf("%d%d",&K,&L);
  int khs[107][107]={0};
  int i;
  for(i=0;i<=K-1;i++)
  {
    khs[1][i]=1;
  }
  q_cs(K,L,khs);
  printf("%d\n",q_he(K,L,khs));
  return 0;
}

int q_he(int k,int l, int khs[][107])
{
  int sum=0;
  int i;
  for(i=1;i<=k-1;i++)
    {
        sum+=khs[l][i];
        sum%=zd;
    }
   return sum;
}

void q_cs(int k,int l,int khs[][107])
{
int i,j,t;
for(i=2;i<=l;i++)
{
  for(j=0;j<k;j++)
  {
    for(t=0;t<k;t++)
    {
     if(abs(t-j)!=1)
     {
        khs[i][j]+=khs[i-1][t];
        khs[i][j]%=zd;
     }
    }
   }
}
}
#endif
  

