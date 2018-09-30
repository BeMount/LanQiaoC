/*
问题描述
　　每年冬天，北大未名湖上都是滑冰的好地方。北大体育组准备了许多冰鞋，可是人太多了，每天下午收工后，常常一双冰鞋都不剩。
　　每天早上，租鞋窗口都会排起长龙，假设有还鞋的m个，有需要租鞋的n个。现在的问题是，这些人有多少种排法，可以避免出现体育组没有冰鞋可租的尴尬场面。（两个同样需求的人（比如都是租鞋或都是还鞋）交换位置是同一种排法）
输入格式
　　两个整数，表示m和n
输出格式
　　一个整数，表示队伍的排法的方案数。
样例输入
3 2
样例输出
5
数据规模和约定
　　m,n∈［0,18］
　　问题分析
*/
#include <stdio.h>
int q_fa(int,int );
int main(void) 
{
	int hx,zx;
	scanf("%d%d",&hx,&zx);
	printf("%d\n",q_fa(hx,zx));
	return 0;
}

int q_fa(int hx,int zx)
{
 if(hx<zx)
 {
 return 0;
 }
 if(zx==0)
 {
 return 1;
 }
 return q_fa(hx-1,zx)+q_fa(hx,zx-1);
}
