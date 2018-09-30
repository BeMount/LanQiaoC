typedef struct{
    int n;
    int maxLength;
    int *element;
}SeqList;


void Init(SeqList*,int);
void Find(SeqList ,int );
void Insert(SeqList*,int ,int );
void Delete(SeqList*,int ); 
void meanu();
void Destroy(SeqList*);
void Output(SeqList*);
void makeChoice(int,SeqList*);

int main(void) 
{
    SeqList list;
    int size;
    printf("�����������С\n"); 
    scanf("%d",&size);
    Init(&list,size); 
    meanu();
    printf("���������ѡ��\n"); 
    int choice;
    scanf("%d",&choice);

    while(choice)
    {
     makeChoice(choice,&list);  
     printf("���������ѡ��\n"); 
     scanf("%d",&choice);
    }           
    return 0;
}


void makeChoice(int choice,SeqList *p_list)
{
    int digital,index;
    switch(choice)
    {
        case 0:
           break; 
        case 1:
            printf("��������Ҫ��ѯ��ֵ:\n");
            scanf("%d",&digital); 
            Find(*p_list,digital);
        break;
        case 2:
            printf("��������Ҫ�����λ�ã��Ͳ����ֵ\n");
            scanf("%d%d",&index,&digital); 
            Insert(p_list,index,digital); 
//          printf("%d \n",p_list->n);
        break;
        case 3:
             printf("��������Ҫɾ����λ��\n");
             scanf("%d",&index); 
             Delete(p_list,index);
        break;
        case 4:
             Output(p_list);
        break;
        case 5:
             Destroy(p_list);
        break;
        default:
            printf("û�и�ѡ��\n");
        break;
    }
}

void meanu()
{
    printf("*************\n");
    printf("****0.�˳�***\n");
    printf("****1.��ѯ***\n");
    printf("****2.����***\n");
    printf("****3.ɾ��***\n");
    printf("****4.���***\n");
    printf("****5.���***\n"); 
}

void Init(SeqList*L,int mSize)
{
    L->maxLength=mSize;
    L->n=0;
    L->element=malloc(sizeof(int)*mSize);
}


void Find(SeqList L,int x)
{
    int i;
    for(i=0;i<L.n;i++)
    {
        if(x==L.element[i])
        {
            printf("�������и�Ԫ��\n"); 
            return;
        }
    }
    printf("������û�и�Ԫ��\n"); 
}

void Insert(SeqList*L,int i,int x)
{
    int j;
//  if(i<0||i>L->n-1) ��������� 
//  {
//      printf("����ʧ��\n");
//      return; 
//  }
    if(L->n==L->maxLength)
    {
        printf("����ʧ��\n");
        return; 
    }
    for(j=L->n-1;j>i-1;j--)//����ѭ����λ 
    {
        L->element[j+1]=L->element[j];
    } 
    L->element[i]=x;
    L->n++;
}

void Delete(SeqList*L,int i)
{
    int j;
    if(i<0||i>L->n - 1)
    {
        printf("ɾ��ʧ��\n");
        return; 
    }
    if(!L->n)
    {
        printf("ɾ��ʧ��\n");
        return; 
    }
    for(j=i+1;j<L->n;j++)
    {
        L->element[j-1]=L->element[j];//����ѭ����λ 
    }
    L->n--;
}


void Output(SeqList *L)
{
    int i;
    if(!(L->n))
    {
//      printf("%d",L->n);
        printf("������û��Ԫ��\n"); 
        return; 
    }
    for( i=0;i<L->n;i++)
    {
        printf("%d ",L->element[i]);
    }
    printf("\n"); 
}

void Destroy(SeqList* L)
{
    L->n=0;
    L->maxLength=0;
    free (L->element);
}
