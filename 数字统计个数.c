/*
����һ���ַ���(������100����)��ͳ�����������ַ����ֵĴ�����
��������
Ab100cd200
�������
6
*/
#if 1
#include <stdio.h>
int  q_cs(char*);
int  q_shz(char);

int main(void) 
{
	char s[180];
	gets(s);
	printf("%d\n",q_cs(s));
	return 0;
}

int  q_shz( char c)
{
 return c <= '9' && c >= '0';
}

int q_cs(char*s)
{
  if(*s == 0)
  {
   return 0;
  }
  return q_shz(*s)+q_cs(s+1);
}
#endif
