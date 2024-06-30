#include <stdio.h>
#include <stdlib.h>

int OddMul(int Arr[], int iLength)
{
    int i=0;
    int product=1;
   
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2!=0)
        {
            product=product*Arr[i];  
        }
    } 
    return product; 
}
int main()
{
    int iSize = 0;
    int iRet=0;
   
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
   

    iRet=OddMul(p, iSize);
    printf("product of elements is %d",iRet);
    
    free(p);

    return 0;
}