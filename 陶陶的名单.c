/*

��������
����by ZBY... :) �����õ���һ���������������������ֽ��д�������һЩ��������֣�����������æ��
�������Թ�ע�������֣�
���������������ǡ�WYS������ϣ����ĳ��������KXZSMR����
���������������ǡ�CQ������ϣ����ĳ��������CHAIQIANG����
���������������ǡ�LC������ϣ����ĳ��������DRAGONNET����
���������������ǡ�SYT����SSD����LSS����LYF������ϣ����ĳ��������STUDYFATHER����
���������������������������ֶ�����ͬ����ϣ����ĳ��������DENOMINATOR����
�����ʽ
������һ����һ������N����ʾ���������������������
����������N�У�ÿ����һ���ַ��������������������
�����ʽ
�������N�У�ÿ�����ÿ���������жϽ����
��������
9
WYS
CQ
WYS
LC
SYT
SSD
LSS
LYF
ZBY
�������
KXZSMR
CHAIQIANG
KXZSMR
DRAGONNET
STUDYFATHER
STUDYFATHER
STUDYFATHER
STUDYFATHER
DENOMINATOR

9
WYS
KXZSMR
CQ
CHAIQIANG
WYS
KXZSMR
LC
DRAGONNET
SYT
STUDYFATHER
SSD
STUDYFATHER
LSS
STUDYFATHER
LYF
STUDYFATHER
ZBY



���ݹ�ģ��Լ��
�������� 50% ���ݣ�N <= 1000���������е����ֽ�����Ϊ��WYS��,��CQ��,��LC������֮һ��û�����������֡�
�������� 100% ���ݣ�N <= 10000���������ɴ�д��ĸ��ɣ����Ȳ�����5��
 
*/

#include <stdio.h>
#include <string.h>

void select_output(char*);

int main(void) 
{
    int n;
    scanf("%d",&n);
    char name[10];
    while(n--)
	{
	 scanf("%s",name);
	 select_output(name);
	} 
	return 0;
}


void select_output(char *a)
{
	 if(strcmp(a,"WYS")==0)
	 {
	  printf("KXZSMR\n");
	 }else{if(strcmp(a,"CQ")==0)
	 {
	  printf("CHAIQIANG\n");
	 }else{if(strcmp(a,"LC")==0)
	 {
	  printf("DRAGONNET\n");
	 }else{if(strcmp(a,"SYT")==0 
	 || strcmp(a,"SSD")==0 
	 || strcmp(a,"LSS")==0 
	 || strcmp(a,"LYF")==0){ printf("STUDYFATHER\n");
	 }else{printf("DENOMINATOR");
	 }
	 }
	 }
	 }
}
