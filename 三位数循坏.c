/*
��������
������1��2������9��9�����ֳ����飬�ֱ����������λ������ʹ��������λ������
����1��2��3�ı������������������������������λ����
�������磺������λ��192��384��576��������������
�����ʽ
�����������ļ�
�����ʽ
�������ÿ������������Ϊ����������λ��������Ϊ����Ҫ��Ĳ�ͬ�⡣
 
*/

#include <stdio.h>

void tjcs(int ,int []);
int panduan(int*,int);

int main(void) 
{
	int shu1;
	for(shu1=100;3*shu1<1000;shu1++)
	{
	int shu2=2*shu1;
	int shu3=3*shu1;
	int s[10]={0};
	tjcs(shu1,s);
	tjcs(shu2,s);
	tjcs(shu3,s);
    if(panduan(s,10))
	{
	 printf("%d %d %d\n",shu1,shu2,shu3);
	}
	}
	return 0;
}

void tjcs(int shu,int s[])
{
  do 
  {
   s[shu%10]++;
  }
  while((shu/=10)!=0);
}

int panduan(int s[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(s[i]>1)
  {
   return 0;
  }
  if(s[0]!=0)
  {
   return 0;
  }
 }
 return 1;
}

//192 384 576
//219 438 657
//273 546 819
//327 654 981
//
//192 384 576
//219 438 657
//267 534 801
//273 546 819
//327 654 981
