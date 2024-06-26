#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[],int iLength,int no)
{
    int i;
    int count=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==no)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int iSize=0;
    int iRet=0;
    int num=0;
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

    printf("enter the number:");
    scanf("%d",&num);
    
      iRet=Count(p,iSize,num);
        printf("result is %d",iRet);
        free (p);

    return 0;
}