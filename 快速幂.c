/*
��������
��������A, B, P����(A^B) mod P��
�����ʽ
�������빲һ�С�
������һ������������N, M, P��
�����ʽ
���������һ�У���ʾ����
��������
2 5 3
�������
2
���ݹ�ģ��Լ��
������10������
������100%�����ݣ�A, BΪlong long��Χ�ڵķǸ�������PΪint�ڵķǸ�������
 
*/ 
#include <stdio.h>
int q_shu(int,int);

int main(void) 
{
	int N,M,P;
	scanf("%d%d%d",&N,&M,&P);
    printf("%d",q_shu(N,M)%P);
    return 0;
}

int q_shu(int n,int m)
{
  if(m==0)
  {
   return 1;
  }
  return n*q_shu(n,m-1);
}
