
/*

��������
������1999��10��1�տ�ʼ���������֤������15λ��������18λ��(18λ���֤������)����������Ϊ��
����1����15λ���֤�����е������2λ(7,8λ)��Ϊ��λ��
����2��������һλ��֤�롣��֤��ļ��㷽����
������ǰ 17 λ�ֱ���Զ�Ӧϵ�� (7 9 10 5 8 4 2 1 6 3 7 9 10 5 8 4 2) ����ӣ�
    Ȼ����� 11 ȡ������0-10 �ֱ��Ӧ 1 0 x 9 8 7 6 5 4 3 2��
�������дһ�������û�����15λ���֤���룬��������18λ���֤���롣��������Ҫ���������֤����λ��ݶ���19������
�����ʽ
����һ��15λ�����ִ�����Ϊ���֤����
�����ʽ
����һ��18λ���ַ�������Ϊ����������֤����
��������
110105491231002
�������
11010519491231002x
���ݹ�ģ��Լ��
���������ж������15λ�ַ����Ƿ����
 
*/
#if 0
#include <stdio.h>

void change(char*);
char select(int);
void output(char*,int);
int test(int*,int,char*);

int main(void)
{
  char s[19];
  gets(s);
  int xs[17]={7 ,9 ,10 ,5 ,8 ,4 ,2 ,1 ,6 ,3 ,7 ,9 ,10 ,5 ,8 ,4 ,2};
  change(s);
  output(s,test(xs,17,s));
  return 0;
}

void change(char*s)
{
 int i;
 for(i=16;i>=8;i--)
 {
  s[i]=s[i-2];
 }
 s[6]='1';
 s[7]='9';
}

int test(int*a,int n,char*s)
{
 int i,sum=0;
 for(i=0;i<18;i++)
 {
  sum+=((s[i]-'0')*a[i]);
 }
 return sum%11;
}


void output(char*s,int n)
{
 int i;
 for(i=0;i<17;i++)
 {
  putchar(s[i]);
 }
 putchar(select(n));
}

char select(int n)
{
 switch(n)
 {
  case 0: return '1';
  break;
  case 1: return '0';
  break;
  case 2: return 'x';
  break;
  case 3: return '9';
  break;
  case 4: return '8';
  break;
  case 5: return '7';
  break;
  case 6: return '6';
  break;
  case 7: return '5';
  break;
  case 8: return '4';
  break;
  case 9: return '3';
  break;
  case 10: return '2';
  break;
  }
}
#endif
/*

��������

С��������һ������Ӳ�ҡ�����Ϸ��

���Ϸ����ų�һ�ŵ�����Ӳ�ҡ������� * ��ʾ���棬�� o ��ʾ���棨��Сд��ĸ�������㣩��

���磬���������ǣ�**oo***oooo

���ͬʱ��ת��ߵ�����Ӳ�ң����Ϊ��oooo***oooo

����С���������ǣ������֪�˳�ʼ״̬��Ҫ�ﵽ��Ŀ��״̬��
ÿ��ֻ��ͬʱ��ת���ڵ�����Ӳ��,��ô���ض��ľ��棬����Ҫ�������ٴ��أ�

����Լ�����ѷ������ڵ�����Ӳ�ҽ���һ����������ôҪ��
�����ʽ

���еȳ����ַ������ֱ��ʾ��ʼ״̬��Ҫ�ﵽ��Ŀ��״̬��ÿ�еĳ���<1000
�����ʽ

һ����������ʾ��С����������
��������1
**********
o****o****
�������1
5
��������2
*o**o***o***
*o***o**o***
�������2
1

*/
#if 0
#include <stdio.h>
#include <string.h>
#define zd 1000

int min_step(char*,char*);

int main(void)
{
  char a[zd],b[zd];
  gets(a);
  gets(b);
  printf("%d\n",min_step(a,b));
  return 0;
}

int min_step(char*a,char*b)
{
 int len=strlen(a);
 int i,step=0;
 for(i=0;i<len;i++)
 {
  if(a[i]==b[i])
  {
   continue;
  }else
  {
   b[i+1]=b[i+1]=='*'?'o':'*';
   step++;
  }
 }
 return step;
}
#endif
#if 0
# include <stdio.h>  
int turn(int a[], int b[])  
{  
    int n = 0;
	int i;  
    for( i = 0; a[i] != EOF; i++) {  
        if(a[i] == b[i]) {  
            continue;  
        } else {  
            b[i + 1] = (b[i + 1] == '*' ? 'o' : '*');  
            n++;  
        }  
    }  
    return n;  
}  
int main(void)  
{  
    int a[1000];  
    int b[1000];  
    int c;  
    int i;  
    i = 0;  
    while((c = getchar()) != '\n') {  
        a[i++] = c;  
    }  
    a[i] = EOF;  
    i = 0;  
    while((c = getchar()) != '\n') {  
        b[i++] = c;  
    }  
    b[i] = EOF;  
    printf("%d\n", turn(a, b));  
}  
#endif
/*

���⣺̰���߳���


|                                                 |
|    H#############  ##  ## T# ###  ################## ######################################### #######@########################################### # ####@#######@######################@################
|                                           |
|                      |
|                      |
|                   |
|                           |
|                           |
|                       |
|                       |
|        |
|       |
|        |
|                      |
|          |
|                    |
|                      |
+-------------------------------------------------+

    С����үү��˽���ղع����ҵ�һ̨��ʽ���ԡ���Ȼû��ͼ�ν��棬ֻ���ÿ���̨��̡�
����С����һ���������������Ƴ��˿���̨�ϵ�̰ʳ����Ϸ��

    ����ͼ������Ϸʱ�����ͼ��
    ���У�H��ʾ��ͷ��T��ʾ��β��#��ʾ�ߵ����壬@��ʾ���彻���ص��ĵط���
    ����˵�����ڵ�̰���߳����Ƕ�����

    ��ʵ��ֻҪ����#����Ŀ��1������@����Ŀ����2���ټ���ͷβ����1�ͼ�����ˡ�

    �˹���һ�£�̫���۾��ˣ���������Ϊʲô���ü������æ�أ�

    �����Ҫ����ǣ� ����д��ͼ��̰ʳ�ߵĳ����Ƕ��٣�

    ע�⣺��Ҫ�ύ����һ����������Ҫ����κζ������ݣ�����˵����ע�ͣ�



*/
#include <stdio.h>
#include <string.h>
#define zd 10000

int main(void)
{
 char s[zd];
 int xb=0;
 char c;
 while((c=getchar())!='1')
 {
  s[xb]=c;
  xb++;
 }
 int len=strlen(s);
 int i,sum=0;
 for(i=0;i<len;i++)
 {
  if(s[i]=='#'||s[i]=='T'||s[i]=='H')
  {
   sum++;
  }
  if(s[i]=='@')
  {
   sum+=2;
  }
 }
 printf("%d\n",sum);
 return 0;
} 

