/*
��������
�����жϸ�������λ���Ƿ� ˮ�ɻ� ������ν ˮ�ɻ� ����ָ��ֵ���������� ÿλ���������͵������� 153 ����һ�� ˮ�ɻ� ���� 153=13+53+33
�����ʽ
����һ��������
�����ʽ
������ˮ�ɻ���,���"YES",�������"NO"(����������)
��������
123
�������
NO
���ݹ�ģ��Լ��
����һ����λ������,�������"NO"
*/
#if 0
#include <stdio.h>

int pdsxhs(int);
int q_cf(int);

int main(void) 
{
	int n;
	scanf("%d",&n);
	printf("%s",pdsxhs(n)==n?"YES":"NO");
	return 0;
}

int pdsxhs(int n)
{
  int he=0;
  if(n) 
  {
  he=q_cf(n%10);
  return he+pdsxhs(n/10) ; 
  }
  return he;
}

int q_cf(int n)
{
  return n*n*n;
}
#endif
/*
���Լ�ʵ��һ���Ƚ��ַ�����С�ĺ�����Ҳ��ʵ��strcmp������������int myStrcmp(char *s1,char *s2) 
����ASCII˳��Ƚ��ַ���s1��s2����s1��s2��ȷ���0��s1>s2����1��s1<s2����-1��������˵��
�����ַ���������������ַ���ȣ���ASCIIֵ��С��Ƚϣ���ֱ
�����ֲ�ͬ���ַ�����'\0'Ϊֹ��ע��'\0'ֵΪ0��С������ASCII�ַ�����
 �磺
����"A"<"B"
����"a">"A"
����"computer">"compare"
����"hello"<"helloworld"
�������

���ݹ�ģ��Լ��
�����ַ�������<100��
 

*/
#if 1
#include<stdio.h>

int compare(char*,char*);

int main (void)
{
 char s0[100];
 char s1[100];
 gets(s0);
 gets(s1);
 printf("%d",compare(s0,s1));
 return 0;
}

int compare(char*s0,char*s1)
{
	if(*s0>*s1)
	{
	 return 1;
	}
	if(*s0<*s1)
	{
	 return -1;
	}
	if(*s0==*s1)
	{
	 return 0;
	}
   return compare(s0+1,s1+1);
}
#endif
