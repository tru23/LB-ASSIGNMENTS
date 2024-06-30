#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int Start,int End)
{
    int i=0;
   
    for(i=0;i<iLength;i++)
    {
        if((Arr[i]>Start) &&(Arr[i]<End))
        {
            printf("%d\t",Arr[i]);   
        }
    }  
}
int main()
{
    int iSize = 0;
    int iStart=0;
    int iEnd=0;
  
    int iCnt = 0;
    int *p = NULL;
   

    printf("enetr the number of elements ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter element=");
        scanf("%d", &p[iCnt]);
    }
    printf("enter the Start range ");
    scanf("%d",&iStart);

    printf("enter the end range");
    scanf("%d",&iEnd);

    Range (p, iSize,iStart,iEnd);
    
    free(p);

    return 0;
}