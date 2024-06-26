#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iPos=-1;
    int i=0;

    for(i=iLength-1;i>=0;i--)
    {
        if(Arr[i]==iNo)
        {
            iPos=i;
           
        }
    }
    return iPos;

}

int main()
{
    int iSize=0;
    int iRet=0;
    int iCnt=0;
    int iValue=0;
   
    int *p=NULL;

    printf("enter number of elements");
    scanf("%d",&iSize);

    printf("the length is %d",iSize);
    

    p=(int *)malloc(iSize *sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return-1;
    }
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter element \n");
        scanf("%d",&p[iCnt]);

    }
    printf("enter the number to find last occurance");
    scanf("%d",&iValue);

    iRet=LastOcc(p,iSize,iValue);

    if(iRet==-1)
    {
        printf("THERE IS NO SUCH NUMBER");
    }
    else{
        printf("last occurance of number is %d",iRet);
    }

    free(p);
    return 0;

}