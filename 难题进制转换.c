/*
��������
��������n��ʮ��������������������Ƕ�Ӧ�İ˽�������

�����ʽ
��������ĵ�һ��Ϊһ��������n ��1<=n<=10����
����������n�У�ÿ��һ����0~9����д��ĸA~F��ɵ��ַ�������ʾҪת����ʮ��������������ÿ��ʮ�����������Ȳ�����100000��

�����ʽ
�������n�У�ÿ��Ϊ�����Ӧ�İ˽�����������

������ע�⡿
���������ʮ��������������ǰ��0������012A��
��������İ˽�����Ҳ������ǰ��0��

��������
����2
����39
����123ABC

�������
����71
����4435274

��������ʾ��
�����Ƚ�ʮ��������ת����ĳ������������ĳ������ת���ɰ˽��ơ�
 */
#include <stdio.h>
#define ZD 100000

void shuru(int [],int*);
int z_to_s(char);
void shuchu(int[],int); 
void q_twcd(int*,int*,int);
int q_zhi(int [],int);
int sc_wei(int [],int);
 
int main(void) 
{
	int n;
	scanf("%d\n",&n);
	while(n--)
	{
	 int shu_16[ZD],ws;
	 shuru(shu_16,&ws);
	 shuchu(shu_16,ws);
	}
	return 0;
}

int sc_wei(int s[],int n)
{
 int i;
 for(i = 0;i < n / 3;i ++,s+=3)
 {
  printf("%04o",q_zhi(s,3));
 }
}

int q_zhi(int s[],int ws)
{
 int zhi=0;
 while(ws --)
 {
  zhi*=16;
  zhi+=*s++;
 }
 return zhi;
}

void qiu_tw(int *p_t,int*p_w,int ws)
{
 *p_t=ws%3==0?3:ws%3;
 *p_w=ws-*p_t;
}

int z_to_s(char z)
{
 if('A' <= z && z <= 'Z')
 {
  return z-'A'+10; 
 }
 return z-'0';
}

void shuru(int s[],int *p_ws)
{
 *p_ws = 0;
 char w;
 while((w=getchar())!= '\n'&&w!=EOF)
 {
  s[*p_ws]=z_to_s(w);
  ++*p_ws;
 }
}

void shuchu(int a[],int ws)
{
  int tou,wei;
  q_twd(&tou,&wei,ws);
  printf("%o",q_zhi(a,tou));
  sc_wei(a + tou,wei);
  putchar('\n');
}

















