/*��������
������������N��M�ľ��󣬼�����͡����У�
����N��M���ڵ���1��С�ڵ���100������Ԫ�صľ���ֵ������1000��
�����ʽ
�����������ݵĵ�һ�а�����������N��M����ʾ��Ҫ��ӵ����������������������������2*N��ÿ�а���M����������ǰN�б�ʾ��һ�����󣬺�N�б�ʾ�ڶ�������
�����ʽ
������ĳ�����Ҫ���һ��N*M�ľ��󣬱�ʾ����������ӵĽ����ע�⣬�����ÿ�е����Ӧ�ж���Ŀո񣬷�����ĳ����п��ܱ�ϵͳ��Ϊ��Presentation����Error
��������
2 2
1 2
3 4
5 6
7 8

�������


6 8
10 12
*/
#include <stdio.h>
void shuru(int[][100],int n,int m);
void shuchu(int [][100],int n,int m);
void xj(int[][100],int[][100],int[][100],int n,int m);

int main(void) 
{
	int n,m;
	scanf("%d%d",&n,&m);
	int jz0[100][100];
	int jz1[100][100];
	shuru(jz0,n,m);
	shuru(jz1,n,m);
	int jz[100][100];
	xj(jz0,jz1,jz,n,m);
	shuchu(jz,n,m);
	return 0;
}

void shuru(int jz[][100],int n,int m)
{ 
  int i;
  for(i=0;i<n;i++)
  {
   int k;
   for(k=0;k<m;k++)
   {
    scanf("%d",&jz[i][k]);
   }
  }
}

void shuchu(int jz[][100],int n,int m)
{ 
  int i;
  for(i=0;i<n;i++)
  {
   int k;
   for(k=0;k<m;k++)
   {
    printf("%d ",jz[i][k]);
   }
   putchar('\n');
  }
}

void xj(int jz0[][100],int jz1[][100],int jz[][100],int n,int m)
{ 
  int i;
  for(i=0;i<n;i++)
  {
   int k;
   for(k=0;k<m;k++)
   {
   	jz[i][k]= jz0[i][k]+jz1[i][k];
   }
  }
}
