#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength){
    int evenSum=0;
    int oddSum=0;
    int Diff=0;
    int i=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            evenSum=evenSum+Arr[i];

        }
        else
        {
            oddSum=oddSum+Arr[i];
        }

    }
    printf("sum of even number is %d\n",evenSum);
    printf("sum of odd number is %d\n",oddSum);

    Diff=evenSum-oddSum;
    return Diff;

}
int main(){
    int iSize=0;
    int iRet=0;
    int iCnt=0;
    int *p=NULL;

    printf("enter number of elements  ");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("unable to allocate memory");
        return-1;
    }
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter element:");
        scanf("%d",&p[iCnt]);
    }
    iRet=Difference(p,iSize);
    printf("Difference is %d",iRet);
    free(p);
    return 0;

}