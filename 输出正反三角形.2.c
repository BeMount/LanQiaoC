//ʹ��ѭ���ṹ��ӡ����ͼ�Σ���ӡ����n���û����롣ͼ��ÿ����ʵ�ϰ��������֣��м����ո��ַ���mҲ���û����롣
//��������n,m: 
//5  4
//�������:
//    *    *********
//   ***    *******
//  *****    *****
// *******    ***
//*********    *
//
//ע�⣺����֮��û�п��С�
#include <stdio.h>

void shuchu(int,int);
void dashu(int,int);

int main(void) 
{
	int n,m;
	scanf("%d%d",&n,&m);
	shuchu(n,m);
	return 0;
}

void shuchu(int n,int m)
{
  int i,j,g;
  for(i=1,j=n-1;i<=n;i++,j--)
  {
  	for( g = 0 ; g < j ; g ++ )
	{
		putchar(' '); 
	}
  
  int k;
  for(k=0;k<2*i-1;k++)
  {
   putchar('*');
  }
  int h;
  for( h = 0 ; h < m ; h ++ )
	{
		putchar(' '); 
	}
  dashu(n,i);
  putchar('\n');
  }
}

void dashu(int n,int i)
{
  int k;
  for(k=0;k<2*(n-i+1)-1;k++)
  {
   putchar('*');
  }
}


