/*
��������
������������ʵ����ӵĽ����
���������ʵ����������Ҫ��: (1)����С����ǰ�������������100λ��(2) С������С���������100λ.
�����ʽ
���������ַ�����ÿ�ж���һ���Ϸ���ʵ�����Ϸ�����˼��ָ:����
�������ֵ�ֵ���������,�����λ���ֱض�������. ����������ֵ�ֵΪ��,����������ֻ��һ����. 
С������β����������������. ����û��С������,������ʱҲû��С����. 
�����С����, ��������Ҫ��һλС������, ����������.
�����ʽ
��ӽ����ע��: С������ĩβ�����������0, �����Ƕ�����Ч����,����
������ȥ. ����������������, ������Ϊ������û��С������.
��������
����һ:
0.0000000000000000000000000000000000000111111111000000000000000000
100000000000000000000000000000000000000000000000000000.0
������:
3
4
������:
3.9
2
�����ģ�
1.001
8.99999999999999999999999

�������


����һ��
100000000000000000000000000000000000000000000000000000.0000000000000000000000000000000000000111111111000000000000000000
��������
7
������:
5.9
�����ģ�
10.00099999999999999999999

*/
#include <stdio.h>


void shuru(int*,int*,int*,int*);
char shuruzs(int * ,int* );
void nixu(int *,int );
void jiaohuan(int * ,int *);
void xjiazs(int * ,int *,int *,int ,int ,int* );
void xjiaxs(int *,int *,int ,int *,int ,int*);
void jinwei(int *,int *);
void shuchuzs(int *,int );
void shuchuxs(int *,int );




int main(void) 
{
	int s_z0[100],wsz0=0;
	int s_x0[100],wsx0=0;
	int s_z1[100],wsz1=0;
	int s_x1[100],wsx1=0;
	int s_hez[101]={0},wshez=0;
	int s_hex[100]={0},wshex=0;
	shuru(s_z0,s_x0,&wsz0,&wsx0);
	shuru(s_z1,s_x1,&wsz1,&wsx1);
	xjiazs( s_z0,s_z1,s_hez,wsz0, wsz1, &wshez);
	xjiaxs(s_x0,s_x1,wsx0,s_hex,wsx1,&wshex);
	shuchuzs(s_hez,wshez);
	shuchuxs(s_hex,wshex);
	return 0;
}

void shuru(int *s_z0,int *s_x0,int *p_wsz0,int *p_wsx0)
{
  if(shuruzs(s_z0,p_wsz0) == '.') 
  {
     shuruzs(s_x0,p_wsx0);
  }
  nixu(s_z0,*p_wsz0);
}

char shuruzs(int * s,int* p_ws)
{
 char c;
 while(c=getchar() ,c  != '.' && c != '\n'&& c != EOF )
 {
  s[*p_ws]=c-'0';
  ++ * p_ws;
 }
 return c;
}


void nixu(int *s_z,int ws)
{
 int low=0;
 int high=ws-1;
 while(high>low)
 {
 jiaohuan(s_z+high,s_z+low);
 }
}

void jiaohuan(int *a ,int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}

void xjiazs(int * s_z0,int *s_z1,int *s_hez,int wsz0,int wsz1,int* p_wshez)
{
  *p_wshez=wsz0>wsz1?wsz0:wsz1;
  int i;
  for(i=0;i<*p_wshez;i++)
  {
   s_hez[i]=s_z0[i]+s_z1[i];
  }
  jinwei(s_hez,p_wshez);

}

void xjiaxs(int *s_x0,int *s_x1,int wsx0,int *s_hex,int wsx1,int* p_wshex)
{
 *p_wshex=wsx0>wsx1?wsx0:wsx1;
  int i;
  for(i=0;i<*p_wshex;i++)
  {
   s_hex[i]=s_x0[i]+s_x1[i];
  }
  jinwei(s_hex,p_wshex);
}

void jinwei(int *s_he,int *p_ws)
{
  int i;
  for(i=0;i<*p_ws;i++)
  {
    s_he[i+1]+=s_he[i]/10;
    s_he[i]%=10;
  }
  *p_ws+=s_he[*p_ws]!=0; 
}

void shuchuzs(int *s_hez,int ws)
{
  int i;
  for(i=ws-1;i>=0;i--)
  {
   printf("%d",s_hez[i]);
  }
  putchar('.');
}

void shuchuxs(int *s_hex,int ws)
{
 int i;
 for(i=0;i<ws;i++)
 {
 printf("%d",s_hex[i]);
 }
}

