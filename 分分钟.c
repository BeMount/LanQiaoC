/*
��������
������ǰ�и����ӣ����ַ��Ӷ��������������������ͷ֮�����������ϵ�ġ������ڱ������¼ÿһ����ͷ����
�ü�ͷ���������ͷ����Դ��֮ǰ����һ����ͷ������������ӣ���һ���ᱻ���ഩ��ļ�ͷ�����Σ�
������ϣ�����ó���������Щ��ͷ�����һ���������
��������ͷ��1��n��ţ���ͷi��Դ����ͷfrom[i]����֤from[i]<i��from[i]=0��ʾ����ͷû����Դ��ͷ��ֻ���Դ�һ�飬���һ�֡�
�����ʽ
������һ��һ��������n��ʾ��ͷ������
����������n�����θ���from[1]��from[2]������from[n]
�����ʽ
������һ�У�һ��������L��ʾ�����ͷ������е���ͷ����
��������
8
0
1
0
3
2
4
2
4
�������
3
����˵��
�������������У�
����1->2->5 (from[5]=2,from[2]=1,from[1]=0)
����1->2->7 (from[7]=2,from[2]=1,from[1]=0)
����3->4->6 (from[6]=4,from[4]=3,from[3]=0)
����3->4->8 (from[8]=4,from[4]=3,from[3]=0)
���ݹ�ģ��Լ��
����1<=n<=1000
*/

#include <stdio.h>
int q_cd(int*,int);
void shuru(int*,int);

int main(void) 
{
  int n;
  scanf("%d",&n);
  int from[n+1];
  shuru(from,n+1);
  int i;
  int ygl=1;
  for(i=1;i<=n;i++)
  {
    int length=q_cd(from,i);
	if(ygl<length)
	{
	 ygl=length;
	}
  }
  printf("%d\n",ygl);
  return 0;
}

int q_cd(int* from ,int i)
{
  int ygl=1;
  int xb=from[i];
  while(xb)
  {
   xb=from[xb];
   ygl++;
  }
  return ygl;
}

void shuru(int* from ,int n)
{
  int i;
  for(i=1;i<n;i++)
  {
   scanf("%d",&from[i]);
  }

}
