/*
����һ��������N (1
��������
12
�������
6
����˵��
12��Լ��������1,2,3,4,6,12����6��
 
*/
#include <stdio.h>
int qiu_ys(int);

int main(void) 
{
	int n;
	scanf("%d",&n);
	printf("%d\n",qiu_ys(n));
	return 0;
}

int qiu_ys(int n)
{
 int i,count=0;
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   count++;
  }
 }
 return count;
 

}
