#include<stdio.h>
int DiffFactor(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
       

int i;
int diff=0;

int addfact=0;
int addnonfact=0;


for(i=1;i<iNo;i++)
{
    if(iNo%i==0)
    {
        
        
      addfact=addfact+i;  
        
    }
    else{
        addnonfact=addnonfact+i;  
    }
    
}
printf("sum of factor= %d\n",addfact);
printf("sum of non factor= %d\n",addnonfact);

diff=addfact-addnonfact;
return diff;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number");
    scanf("%d",&iValue);
    iRet=DiffFactor(iValue);
printf("difference between factors and non factors is %d",iRet);
    return 0;

}