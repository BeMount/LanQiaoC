/*
��������
��������һ����λ����ֻҪ���Ǹ���λ�ϵ������ǲ�ȫ��ͬ�ģ����������Ĺ��ɣ�
����1)����ɸ���λ�����ĸ������ɴ�С���У��γ������ĸ����ֹ��ɵ�������λ����
����2)����ɸ���λ�����ĸ�������С�������У��γ������ĸ����ֹ��ɵ���С����λ��(����ĸ����к���0����õ�����������λ)��
����3)���������Ĳ�õ�һ���µ���λ��(��λ�㱣��)��
�����ظ����Ϲ��̣����һ����õ��Ľ����6174��
�������磺4312 3087 8352 6174���������α任���õ�6174
�����ʽ
����һ����λ���������뱣֤��λ���ֲ�ȫ��ͬ
�����ʽ
����һ����������ʾ������־������ٴα任�ܵõ�6174
��������
4312
�������
3
 
*/
 

#include <stdio.h>
void fuzhi(int *,int ,int );
void paixu(int *,int );
void jiaohuan(int*,int*);
int q_shuda(int *,int );
int q_shuxiao(int* ,int );
int q_cs(int,int* );

int main(void ) 
{
	int n;
	scanf("%d",&n);
	int s[4];
	printf("%d\n",q_cs(n,s));
    return 0;
}

int  q_cs(int n,int *s)
{
 if(n==6174)
 {
  return 0;
 }
 fuzhi(s,4,n);
 paixu(s,4);
 int cha=q_shuda(s,n)-q_shuxiao(s,n);
 return q_cs(cha,s)+1;
}


void fuzhi(int *s,int n,int zhi)
{
   do 
   {
    n--;
	s[n]=zhi%10;
   }
   while((zhi/=10)!=0);
}

void paixu(int *s,int n)
{
  int i;
  for(i=1;i<n;i++)
  {
   int k;
   for(k=0;k<n-i;k++)
   {
     if(s[k]<s[k+1])
     {
	  jiaohuan(s+k,s+k+1); 
	 }
   }
  }
}

void jiaohuan(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

int q_shuda(int *s,int n)
{
 return  s[0]*1000+s[1]*100+s[2]*10+s[3];
}

int q_shuxiao(int *s,int n)
{
 return s[3]*1000+s[2]*100+s[1]*10+s[0];
}
