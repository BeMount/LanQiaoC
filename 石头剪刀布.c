#include <stdio.h>


int main(void) 
{
	int n,m;//0����ʯͷ��1�ǲ��� 
	scanf("%d%d",&n,&m);
	if(n==m)
	{
	 printf("%d\n",0);//ƽ�� 
	}else{
	 if(n-m==1 || n-m == -2)
	 {
	  printf("%d\n",1);//ǰ��Ӯ 
	 }else
	 {
	 printf("%d\n",-1);//ǰ���� 
	 }
	}
	
	return 0;
}
