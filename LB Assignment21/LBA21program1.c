#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iLength, int no)
{
    int i;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == no)
        {
            return TRUE;
        }
           
    }
    return FALSE;
}
int main()
{
    int iSize = 0;
    BOOL bRet = FALSE;
    int iCnt = 0;
    int num=0;
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
    printf("enter number to search");
    scanf("%d",&num);
    bRet =Check (p, iSize,num);
    if (bRet == TRUE)
    {
        printf("%d is present",num);
    }
    else
    {
        printf("%d is absent",num);
    }
    free(p);

    return 0;
}