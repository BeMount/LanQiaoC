/*

��������
����0��1��2�������ֵ�ȫ���������֣�������ĸ���������£�
����012��021��102��120��201��210
��������һ����n
������0~9ʮ������ȫ�����еĵ�n������1��Ϊ0123456789����
�����ʽ
����һ�У�����һ������n
�����ʽ
����һ�У�����һ��10�����ֵ�ȫ����
��������
1
�������
0123456789
���ݹ�ģ��Լ��
����0 < n <= 10!

01234
 
15 15/3 15%3=3 3/2 3%2(�ݹ��ϵ�� 
*/ 

#include<stdio.h>

void q_dncpl(int*a,int,int,int);
int q_jc(int);
void output(int*,int);
void xhyw(int*,int,int);

int main(void)
{
  int n;
  scanf("%d",&n);
  int a[10]={0,1,2,3,4,5,6,7,8,9};
  q_dncpl(a,9,n-1,q_jc(9));
  output(a,10);
  return 0;
} 
void output(int *a,int n)
{
  while(n-->0)
  {
   printf("%d",*a++);
  }
}

void xhyw(int*a,int end,int jw)
{
 int i,t=a[end];
 for(i=end;i>0;i--)
 {
  a[i]=a[i-jw];
 }
 a[0]=t;
} 

void q_dncpl(int *a,int n,int m,int jc)
{
 if(n==0)
 {
  return;
 }
 xhyw(a,m/jc,1);
 q_dncpl(a+1,n-1,m%jc,jc/n);//������һ�ν׳� 
}

int q_jc(int n)
{
 if(n==0)
 {
  return 1;
 }
 return q_jc(n-1)*n;
}
