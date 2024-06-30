#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int size)
{
    int i=0;
    
    int count=0;
    int iNo=0;
    for(i=0;i<size;i++)
    {
        iNo=Arr[i];
        while(iNo!=0)
        {
            count++;
            iNo=iNo/10;
        }
        if(count==3)
            {
            printf("%d ",Arr[i]);
            }
    count=0;
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
    Digits(p,iSize);
    
    free(p);
    return 0;

}