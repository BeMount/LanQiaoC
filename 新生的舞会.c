/*
���԰����ֺ�ѧ�Ŷ������ַ����������԰���������ʵ�֡�

����#include<iostream>
����#include<cstring>
����using namespace std;

����struct tstudent
����{
����char name[21];
����char num[21];
����char sex;
����};

����void readdata(tstudent student[], int n)
����{
����N��ѧ������Ϣ
����}

����int findstudent(tstudent student[], int n, char* data)
����{
����if (data == NULL) return -1;

�ж��Ƿ���ĳ��ѧ����ѧ�Ż����ֵ���data������У��������ظ�ѧ����student�����е���ţ����򷵻�-1
����}

����void solve(tstudent student[], int n, int m)
����{
����char x[21], y[21];
����for (int i=0; i<m; i++) {
���������˵���ϢX��Y��ͨ������findstudent�����ж����������ܷ��Ϊ���
����}
����}

����int main()
����{
����int n, m;
����tstudent student[1010];

����cin>>n;

����readdata(student, n);
����cin>>m;
����solve(student, n, m);
����}
*/
/*
��������
����������Ὺʼ�ˡ�n������ÿ�����������ԣ�������ѧ�š��Ա����У�
�����ó��Ȳ�����20�Ľ��ɴ�Сд��ĸ���ɵ��ַ�����ʾ��ѧ���ó��Ȳ�����10�Ľ������ֹ��ɵ��ַ�����ʾ��
�Ա���һ����д�ַ���F����M����ʾ���������˵�������ѧ�ž�������ͬ��
����֮��ÿ���˿ɱ���������ѧ��Ψһȷ��������m�����˵���Ϣ��������ѧ�ţ���
�ж������Ƿ��ܹ��衣�����ܹ���ĳ�Ҫ����Ϊ�����Ա����졣

����
������һ��һ������n��2<=n<=1000������ʾѧ����������������n��ÿ�����ΰ���һ��������������
ѧ�š��Ա𣬷ֱ���һ���ո������
����֮���һ����һ������m(1<=m<=1000)����ʾѯ�ʵ���Ŀ��
���ŵ�m��ÿ�а���������Ϣ��������ѧ�ţ�����֤������Ϣ������ͬһ�ˣ��м���һ���ո������

���
��������ÿ��ѯ�����һ�У�������˿��Թ��裬���һ����д��ĸ��Y�����������һ����д��ĸ��N����

*/

/*
4
John 10 M
Jack 11 M
Kate 20 F
Jim 21 M
3
John 11
20 Jack
Jim Jack
*/
#include <stdio.h>
#include <string.h>
typedef
struct
{
  char name[10];
  char xh[10];
  char sex[10];
}xs_t;

void shuru(int n,xs_t *a);
void panduan(int,int,int,xs_t*);
void output_solve(int m,int n,xs_t*a);
int find(char *s,int n,xs_t *a);

int main(void) 
{
   int n;
   scanf("%d",&n);
   xs_t a[n];
   shuru(n,a);
   int m;
   scanf("%d",&m);
   output_solve(m,n,a);
   return 0;
}

void shuru(int n,xs_t *a)
{
  int i;
  for(i=0;i<n;i++)
  {
   scanf("%s%s%s",&a[i].name,&a[i].xh,&a[i].sex);
  }
}


void output_solve(int m,int n,xs_t*a)
{
  int i;
  char s_0[10],s_1[10];
  for(i=0;i<m;i++)
  {
   scanf("%s%s",&s_0,&s_1);
   panduan(find(s_0,n,a),find(s_1,n,a),n,a); 
  }
}

void panduan(int xb_0,int xb_1,int n,xs_t *a)
{
 //printf("%d %d",xb_0,xb_1);
 if(xb_0==-1||xb_1==-1)
 {
  putchar('N');
  return;
 }
 printf("%c\n",strcmp(a[xb_0].sex,a[xb_1].sex)==0?'N':'Y');
}

int find(char *s,int n,xs_t *a)
{
 int i;
 if(*s<='9'&&*s>='0')
 {
  int i;
  for(i=0;i<n;i++)
  {
    if(strcmp(s,a[i].xh)==0)
    {
     return i;
	}
  }
 }else
 {
  int k;
  for(k=0;k<n;k++)
  {
    if(strcmp(s,a[k].name)==0)
    {
	 return k;
	}
  }
 }
 return -1;
}

