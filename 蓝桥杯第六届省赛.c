/* 
���������

StringInGrid��������һ��ָ����С�ĸ����д�ӡָ�����ַ�����
Ҫ���ַ�����ˮƽ����ֱ���������϶����С�
����ַ���̫�����ͽضϡ�
�������ǡ�þ��У���������ƫ�����ƫ��һ�㡣

����ĳ���ʵ������߼�������д���߲���ȱ�ٵĴ��롣
*/
#if 0
#include <stdio.h>
#include <string.h>

void StringInGrid(int width, int height, const char* s)
{
	int i,k;
	char buf[1000];
	strcpy(buf, s);
	if(strlen(s)>width-2) buf[width-2]=0;
	
	printf("+");
	for(i=0;i<width-2;i++) printf("-");
	printf("+\n");
	
	for(k=1; k<(height-1)/2;k++){
		printf("|");
		for(i=0;i<width-2;i++) printf(" ");
		printf("|\n");
	}
	
	printf("|");


	
	printf("%*s%s%*s","     ",buf,"     ");  //���
	          
	printf("|\n");
	
	for(k=(height-1)/2+1; k<height-1; k++){
		printf("|");
		for(i=0;i<width-2;i++) printf(" ");
		printf("|\n");
	}	
	
	printf("+");
	for(i=0;i<width-2;i++) printf("-");
	printf("+\n");	
}

int main()
{
	StringInGrid(20,6,"abcd1234");
	return 0;
}

#endif
#if 0 
int f(char s[], int begin, int end)
{
	int mid;
	if(end-begin==1) return s[begin] - '0';
	mid = (end+begin) / 2;
	return f(s,mid,end)+f(s,begin,mid);  //���
}
	
int main()
{
	char s[] = "4725873285783245723";
	printf("%d\n",f(s,0,strlen(s)));
	return 0;
}
#endif 
/*
���������

С��������һ����������֡�����ƽ�����������ð�0~9��10������ÿ������ֻ����һ�Ρ�
���ܲ³���������Ƕ�����

����д�����֣���Ҫ��д�κζ�������ݡ�
*/
#if 0
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int cap=n,sum=0;
	while(1)
	{
		if(cap/3==0)
		{
		 break;	
		} 
		sum+=cap/3;
		int cap_=cap;
		cap/=3;
	    cap+=cap_%3;
	}
	printf("%d ",sum+n);
	return 0;
}
#endif

    #include <stdio.h>    
    int main()    
    {    
        int sum = 1225;  
        int tmp=0;  //��ʱ�������ڳ����б����м���   
        int res=0;  //�������潫��+���ı�ɡ�*���ź�Ľ��
		int i;   
        for(i=2; i<=47; ++i)  
         {    
            tmp = res = sum-(i+(i-1))+i*(i-1); 
			int j;   
              
            for(j=i+2; j<=49; ++j)   
            {    
                res = tmp-(j+(j-1))+j*(j-1);    
                if(res == 2015)  
                {    
                    printf("(i= %d ,j= %d)\n", i-1,j-1);    
                }      
            }    
        }    
    }  



