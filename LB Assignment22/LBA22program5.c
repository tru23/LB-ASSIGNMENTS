#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int size)
{
    int i=0;
    
    int iNo=0;
    int sum=0;
    int digit=0;
    for(i=0;i<size;i++)
    {
        iNo=Arr[i];
        while(iNo!=0)
        {
            digit=iNo%10;
            sum=sum+digit;
            iNo=iNo/10;
        }
       printf("%d ",sum);
    sum=0;
    }
    
     
}


int main()
{
  int iSize=0;
 
  int i=0;
  
  int *p=NULL;

  printf("enter the size of array:");
  scanf("%d",&iSize);

 

  p=(int*)malloc(iSize * sizeof(int));

  if(p==NULL)
  {
    printf("Unable to allocate memory");
    return -1;
  }
  printf("Enter %d elements\n ",iSize);

  for(i=0;i<iSize;i++)
  {
    printf("enter number  \n");
    scanf("%d",&p[i]);
    
  }
    DigitsSum(p,iSize);
    
    free(p);
    return 0;

}