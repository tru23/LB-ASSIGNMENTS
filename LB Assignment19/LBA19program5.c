#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
    int i;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%11==0)
        {
            printf("%d\t",Arr[i]);
        }
    }
    return 0;
}
int main()
{
    int iSize=0;
    
    int iCnt=0;
    int *p=NULL;

    printf("enetr the number of elements ");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize *sizeof(int));

    if(p==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter element=");
        scanf("%d",&p[iCnt]);
    }
Display(p,iSize);
free (p);

    return 0;
}