#include <stdio.h>
#include <stdlib.h>

void Index(int Arr[], int iLength, int no)
{
    int i=0;
    int lastIndex=-1;
   
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==no)
        {
            lastIndex=i;
            
        }
       
    }
    if(lastIndex!=-1)
    {
        printf("Last occurance index %d\n",lastIndex);
    }

    else{
        printf("Number not found\n");
    }

    
}
int main()
{
    int iSize = 0;
  
    int iCnt = 0;
    int *p = NULL;
    int iValue=0;

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
    printf("enter the element to find last occurance ");
    scanf("%d",&iValue);
    Index (p, iSize,iValue);
    
    
    free(p);

    return 0;
}