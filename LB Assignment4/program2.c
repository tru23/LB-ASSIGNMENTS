#include<stdio.h>

void RevFactor(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
       int i;


for(i=iNo;i>=1;i--)
{
    if(iNo%i==0)
    {
        
        printf(" %d \t", i );
        
    }
    
}

}

int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    RevFactor(iValue);

    return 0;

}