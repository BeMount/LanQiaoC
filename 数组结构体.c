//����һ��ѧ���ṹ������student������4���ֶΣ��������Ա�����ͳɼ���Ȼ�����������ж���һ���ṹ�����飨���Ȳ�����1000����������ÿ��Ԫ�ص�ֵ������ʹ��ð�����򷨽�ѧ�����ճɼ���С�����˳������Ȼ���������Ľ����
//���������ʽ����һ����һ������N��N<1000������ʾԪ�ظ�����������N��ÿ������һ��Ԫ�أ��������Ա��ǳ��Ȳ�����20���ַ���������ͳɼ��������͡�
//���������ʽ�����ɼ���С�����������Ԫ�أ������ѧ���ɼ���ͬ��ɼ���ͬ��ͬѧ֮�䱣��ԭ��������˳��
//���룺����
/*
3
Alice female 18 98
Bob male 19 90
Miller male 17 92
*/
//
//�����
//����Bob male 19 90
//����Miller male 17 92
//����Alice female 18 98


#include <stdio.h>
struct student
{ 
  char name[10];
  char sex[10];
  unsigned age;
  unsigned grade;
};
void shuru(struct student *,int);
void shuchu(struct student *,int);
void bijiaocj(struct student *,int);
void jiaohuan(struct student *,struct student *);

int main(void) 
{
	int n;
	scanf("%d",&n);
	struct student sz[n];
	shuru(sz,n);
	bijiaocj(sz,n);
	shuchu(sz,n);
	return 0;
}

void shuru(struct student *sz,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   scanf("%s%s%d%d",&sz[i].name,&sz[i].sex,&sz[i].age,&sz[i].grade);
  }
}

void shuchu(struct student *sz,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
   printf("%s %s %d %d\n",sz[i].name,sz[i].sex,sz[i].age,sz[i].grade);
  }
}

void bijiaocj(struct student *sz,int n)
{
 int i;
 for(i=1;i<n;i++)
 {
 int k;
 for(k=0;k<n-i;k++)
 {
  if(sz[k].grade>sz[k+1].grade)
  {
   jiaohuan(&sz[k],&sz[k+1]);
  }
  }
 }

}

void jiaohuan(struct student * a,struct student * b)
{
  struct student tmp;
  tmp=*a;
  *a=*b;
  *b=tmp;
}









