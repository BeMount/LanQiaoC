/*

��������
����Ħ��˹�������롣���������ֽ̲ĵ�213ҳ����6.5��Ҫ������Ħ��˹�룬����Ӣ�ġ��벻Ҫʹ��"zylib.h"��
   ֻ��ʹ�ñ�׼�⺯������' * '��ʾ' . '���м�ո���' | '��ʾ��ֻת���ַ���

����Ħ��˹�붨�����http://baike.baidu.com/view/84585.htm?fromId=253988��

��ʾ
������Ƚ�������ʱ����������EOF��β�ģ������ǻ��з�����EOF����һ���ַ�������EOF��β��
   ��һ��ͨ�׵����Ͻ���˵��������˿���ͨ�����·�ʽ֮һ��ȡ���룺

����1. һ�ζ��������ַ������ٽ��к���������

����2. ʹ��getchar��scanfһ�ζ���һ���ַ���ͨ�����ǵķ���ֵ�ж����������
�������

*/
#include<stdio.h>  
#include<string.h>
#include<time.h> 
#define zd 10000
void compare(char*);
void output_password(char*);

int main(void)  
{  
    char s[zd];        
    scanf("%s",s);  
    output_password(s);
    printf("%.2lf",(double)clock()/CLOCKS_PER_SEC);
    return 0;  
} 

void output_password(char * p)
{
	char str[10];
	int i=0;
    while(*p)  
    {  
        if(*p=='|')  
        {  
            str[i]='\0';  
            compare(str);  
            i=0;  
        }  
        else  
        {  
            str[i++]=*p;  
        }  
        p++;  
    }  
    str[i]='\0';  
    compare(str);  
    putchar('\n');   

}

void compare(char str[])  
{  
    if(strcmp(str,"*-")==0) 
	{
	 printf("a");
	}
	   
    if(strcmp(str,"-***")==0)
	{
	  printf("b");
	} 
	   
    if(strcmp(str,"-*-*")==0)
	{
	 printf("c");
	} 
	   
    if(strcmp(str,"-**")==0)
	{
	  printf("d");
	}
	    
    if(strcmp(str,"*")==0)
	{
	  printf("e");
	} 
	 
    if(strcmp(str,"**-*")==0)
	{
	  printf("f");
	} 
	   
    if(strcmp(str,"--*")==0)
	{
	  printf("g");
	}
	    
    if(strcmp(str,"****")==0)
	{
	 printf("h");
	}
	  
    if(strcmp(str,"**")==0)
	{
	  printf("i");
	} 
	   
    if(strcmp(str,"*---")==0)
	{
	 printf("j");
	} 
	   
    if(strcmp(str,"-*-")==0)
	{
	   printf("k");
	} 
	   
    if(strcmp(str,"*-**")==0)
	{
	  printf("l");
	}
	   
    if(strcmp(str,"--")==0)
	{
	  printf("m");
	}  
         
    if(strcmp(str,"-*")==0)
	{
	  printf("n");
	}  
          
    if(strcmp(str,"---")==0)
	{
	  printf("o");
	}  
          
    if(strcmp(str,"*--*")==0)
	{
	  printf("p");
	}  
         
    if(strcmp(str,"--*-")==0)
	{
	  printf("q");
	}  
          
    if(strcmp(str,"*-*")==0)
	{
	   printf("r");
	}  
        
    if(strcmp(str,"***")==0)
	{
	  printf("s");
	}  
          
    if(strcmp(str,"-")==0) 
	{
	  printf("t");
	} 
         
    if(strcmp(str,"**-")==0)
	{
	   printf("u");
	}  
         
    if(strcmp(str,"***-")==0) 
	{
	 printf("v");
	} 
          
    if(strcmp(str,"*--")==0)
	{
	 printf("w");
	}  
          
    if(strcmp(str,"-**-")==0)
	{
	  printf("x");
	}  
         
    if(strcmp(str,"-*--")==0)
	{
	 printf("y");
	}  
          
    if(strcmp(str,"--**")==0) 
	{
	   printf("z");
	} 
        
}    
