#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int size)
{
    int i=0;
    int max=0;
    max=Arr[i];
    for(i=0;i<size;i++)
    {
        
        if(max<Arr[i])
        {
            max=Arr[i];
        }
    }
    return max;
}


int main()
{
  int iSize=0;
  int iRet=0;
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
    iRet=Maximum(p,iSize);
    printf("Largest element is %d",iRet);
    free(p);
    return 0;

}