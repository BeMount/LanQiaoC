/*
100 ���Ա�ʾΪ����������ʽ��100 = 3 + 69258 / 714��

�����Ա�ʾΪ��100 = 82 + 3546 / 197��

ע���������������У�����1~9�ֱ������ֻ����һ�Σ�������0����

���������Ĵ�������100 �� 11 �ֱ�ʾ����

�����ʽ
�ӱ�׼�������һ��������N (N<1000*1000)

�����ʽ
�������������������1~9���ظ�����©����ɴ�������ʾ��ȫ��������

ע�⣺��Ҫ�����ÿ����ʾ��ֻͳ���ж��ٱ�ʾ����

��������1
100
�������1
11
��������2
105
�������2
6
*/
//ȫ���У� 
#include <stdio.h>

void swap(int*,int*);
void panduan(int*,int ,int* ,int );
int q_shu(int* ,int ,int );
void qupl(int *,int ,int ,int ,int *);

int main(void) 
{
	int n,cs=0;
	scanf("%d",&n);
	int a[9]={1,2,3,4,5,6,7,8,9};
	qupl(a,9,0,n,&cs);
	printf("%d\n",cs);
	return 0;
}

void panduan(int*a,int n,int* p_cs,int shu)
{ 
 int i;
 int shu1,shu2,shu3;
 for(i=0;i<n;i++)
 {
  shu1=q_shu(a,0,i+1);
  if(shu1>shu)
  {
   return;
  }
  int k;
  for(k=(n-i+1)/2-1;k<n-1;k++)//��n-i+1��/2 -1��Ϊ�����ʱ�õ������� 
  { 
   shu2=q_shu(a,i+1,k+1);
   shu3=q_shu(a,k+1,n);
   if(shu2%shu3==0&&shu2/shu3+shu1==shu)
   {
    (*p_cs)++;
   }
  } 
 } 


}

int q_shu(int* a,int low,int high)
{
	int i,shu=0;
	for(i=low;i<high;i++)
	{
	 shu*=10;
	 shu+=a[i];
	}
	return shu;
}


void qupl(int *a,int n,int k,int shu,int *p_cs)
{
  if(k==n)
  {
   panduan(a,n,p_cs,shu);
   return;
  }
  int i;
  for(i=k;i<n;i++)
  {
   swap(a+k,a+i);//�Ƚ���һ��λ�����п��� 
   qupl(a,n,k+1,shu,p_cs); 
   swap(a+k,a+i);//�ָ�ԭ״ 
  }
}

void swap(int *p_a,int*p_b)
{
  int temp;
  temp=*p_a;
  *p_a=*p_b;
  *p_b=temp;
}


