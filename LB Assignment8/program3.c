#include<stdio.h>

int KMtoMeter(int iNo)
{
int km=1000;
int cov=0;
cov=iNo*km;

return cov;
}

int main()
{
    int iValue=0;
   int bRet=0;

    printf("Enter km");
    scanf("%d",&iValue);
   

    bRet=KMtoMeter(iValue);
    printf("area of circle is:%d",bRet);

    return 0;
}