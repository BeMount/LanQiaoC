/*
�ҳ�������������������������˵���ָ��ֵM�ĸ�����
����������
������
��һ�У�����M��ֵ,-2^31<M<2^31�� 
�ڶ��У��������ݵĸ���n��1<n<100�� 
�����У�n��������֮���ÿո����������������[-2^31,2^31]��Χ�ڡ�
���������
n��������������˵���ָ��ֵM�ĸ�����ÿ����������������1�Ρ�
����������
479001600
11 
1 10000 159667200 9696 38373635 1000000 479001600 3 1 479001600 1 
���������
3
*/
#include <stdio.h>
void shuru(int*,int);//�ó��� 
int qiu_pd(int*,int,int);
int qiu_pdb(int*,int*,int,int);

int main(void) 
{
	int zhi,gs;
	scanf("%d%d",&zhi,&gs);
	int a[gs];
	shuru(a,gs);
	printf("%d\n",qiu_pd(a,gs,zhi));
	return 0;
}

void shuru(int a[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
}

int qiu_pd(int*a,int n,int zhi)
{
 int count[n];
 int j;
 for(j=0;j<n;j++)
 {
 count[j]=0;
 }
 int i;
 for(i=0;i<n;i++)
 {
  int k;
  for(k=0;k<n;k++)
  { 
   if(a[i]==a[k])
   {
    count[i]++;
   }
  }
 }
 return qiu_pdb(a,count,n,zhi);
}

int qiu_pdb(int*a,int count[],int n,int zhi)
{
  int i;
 for(i=0;i<n;i++)
 {
  int k;
  for(k=0;k<n;k++)
  { 
  if(zhi/a[i]==a[k])
   {
    return count[i]>=count[k]?count[i]:count[i];
   }
  }
 }
}


