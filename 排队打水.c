/*
����������
����N����Ҫ��ˮ����M��ˮ��ͷ����i���˴�ˮ����ʱ��ΪTi���밲��һ������ķ���ʹ�������˵ĵȴ�ʱ��֮�;���С��
�����ʽ
������һ������������N M ������һ��N��������Ti��
����N,M<=1000��Ti<=1000
�����ʽ
������С�ĵȴ�ʱ��֮�͡�������Ҫ�������İ��ŷ�����
��������
7 3
3 6 1 4 2 5 7
�������
11
��ʾ
����һ����Ѵ�ˮ�����ǣ���N���˰���Ti��С�����˳�����η��䵽M����ͷ��ˮ��
�������������У�Ti��С��������Ϊ1��2��3��4��5��6��7�����������η��䵽3����ͷ����ȥ��ͷһ��ˮ��Ϊ1��4��7��ȥ��ͷ����ˮ��Ϊ2,5��ȥ��������ͷ��ˮ��Ϊ3,6��
������һ����ͷ��ˮ�����ܵȴ�ʱ�� = 0 + 1 + (1 + 4) = 6
�����ڶ�����ͷ��ˮ�����ܵȴ�ʱ�� = 0 + 2 = 2
������������ͷ��ˮ�����ܵȴ�ʱ�� = 0 + 3 = 3
���������ܵĵȴ�ʱ�� = 6 + 2 + 3 = 11
 

*/
#if 0
#include<stdio.h>
void shuru(int* a,int n);
void paixu(int* a,int n);
void jiaohuan(int*,int*);
int  q_he(int*,int);
int  q_zxsj(int*,int,int);

int main(void)
{
 int n,m;
 scanf("%d%d",&n,&m);
 int a[n];
 shuru(a,n);
 printf("%d\n",q_zxsj(a,n,m));
 return 0;
}

void shuru(int * a,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
}

void paixu(int*a ,int n)
{
  int i;
  for(i=1;i<n;i++)
  {
   int k;
   for(k=0;k<n-i;k++)
   {
    if(a[k]>a[k+1])
    {
	 jiaohuan(a+k,a+k+1);
	}

   }
  }

}

int  q_zxsj(int*a,int n,int m)
{
  if(n<=m)
  {
  return 0;
  }
  paixu(a,n);
  int count[n];
  int i;
  for(i=0;i<m;i++)
  {
   count[i]=0;
  }
  int k;
  for(k=m;k<n;k++)
  {
    count[k]=count[k-m]+a[k-m];
  } 
  return q_he(count,n);
}


void jiaohuan(int*p_1,int*p_2)
{
  int temp;
  temp=*p_1;
  *p_1=*p_2;
  *p_2=temp;
}

int q_he(int*a,int n)
{
 int i,he=0;
 for(i=0;i<n;i++)
 {
  he+=a[i];
 }
 return he;
}
#endif
/*
��һ�����������������Ŀ�У���Ʒ����MC�������ۣ�DJ����������SL��������һ���ṹ��prut��
���Ա��������������ݡ����������ж���һ��prut���͵Ľṹ�����飬����ÿ��Ԫ�ص�ֵ�����㲢�����������ܽ�
���������ʽ����һ�������������N(N<100)��������ÿһ����һ���������Ʒ���ǳ��Ȳ�����100���ַ�����
����Ϊdouble���ͣ�����Ϊ���͡�
���������ʽ��double���͵��ܽ�
���룺
����4
����book 12.5 3
����pen 2.5 10
����computer 3200 1
����flower 47 5

�����
4
book 12.5 3
pen 2.5 10
computer 3200 1
flower 47 5

����3497.500000
*/
#if 0
#include<stdio.h>
typedef
struct
{
char name[180];
double price;
int amount;
}PRUT_t;

void shuru(PRUT_t *,int );
void shuchu(PRUT_t *,int );

int main(void)
{
  PRUT_t s[100];
  int n;
  scanf("%d",&n);
  shuru(s,n);
  shuchu(s,n);
  return 0;
}

void shuru(PRUT_t *s,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   scanf("%s%lf%d",s[i].name,&s[i].price,&s[i].amount);
  }
}

void shuchu(PRUT_t *s,int n)
{
  int i;
  double he=0.;
  for(i=0;i<n;i++)
  {
   he+=s[i].price*s[i].amount;
  }
  printf("%lf",he);
}
#endif
/*
��������
�����������������ƻ��������֣�P50��5�⡣
����������������һ�����û�һ���ڶ��ڴ���һ���ǰ��հٷֱȸ�ʽ��ʾ�����ʣ�
����һ��������ı�������Ϣ�ܶ˵����
(1) ������������ԪΪ��λ����ȷ���֣�
(2) ��������ʱ������ٷֺţ���������Ϊ3.87%���û�ֱ������3.87��
(3) ���չ��ҷ��ɣ��洢��Ϣ���������5%������˰��������ʱӦ���۳�����˰��(4) ��ʾ�Ľ����ȷ������ҷ֡�
����ע�⣺��������float��ʾ���������뱣�浽һ��float�����У�����printf�����
�����ʽ
����һ�У���һ���ո������������������
�����ʽ
����һ����������
��������
5000.00 5.00
�������
5237.50
���ݹ�ģ��Լ��
��������������ÿһ�����ķ�Χ������<100000000����Ϣ<100
*/

#include<stdio.h>
double q_lr(double,double);

int main(void)
{
  double qs,lx;
  scanf("%lf%lf",&qs,&lx);
  float jieg=q_lr(qs,lx);
   
  printf("%.2lf",jieg);
  return 0;
}

double q_lr(double qs,double lx)
{
   return qs*lx*0.01*(1.-0.05)+qs;
}






