//Ϊ������º���DelPack��ɾ�������ַ��������е��ظ�Ԫ�ء����������ظ�Ԫ��ҲҪɾ����
//����Ҫ��д�ɺ����������ڲ�ʹ��ָ�������
//��������
//1223445667889
//�������
//13579
//��������
//else
//�������
//ls
//���ݹ�ģ��Լ��
//�����ַ���������󳤶�Ϊ100��

#include <stdio.h>
#include <string.h>
void pdxd(char [],int);
void shuchu(char[],int);

int main(void) 
{
	char str[180];
	gets(str);
	int len=strlen(str);
	pdxd(str,len);
	shuchu(str,len);
	return 0;
}

void pdxd(char  str[],int len)
{
 int i; 
 for(i=0;i<len;i++)
 {
  int k;
  for(k=len-1;k>i;k--)
  {
   if(str[i]==str[k])//�������������ظ������� 
   {
    str[i]=0;
    str[k]=0;
   }
  }
 }
}

void shuchu(char str[],int len)
{
  int i;
  for(i=0;i<len;i++)
  {
   if(str[i]!=0)
   {
    printf("%c",str[i]);
   }
  }

}


