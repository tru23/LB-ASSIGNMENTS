#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int size)
{
    int i=0;
    int min=0;
    min=Arr[i];
    int max=0;
    max=Arr[i];
    int diff=0;
    for(i=0;i<size;i++)
    {
        
        if(min>Arr[i])
        {
            min=Arr[i];
        }
        if(max<Arr[i])
        {
            max=Arr[i];
        }
    }
    printf("largest:%d\n",max);
    printf("smallest :%d\n",min);
    diff=max-min;
    return diff;
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
    iRet=Difference(p,iSize);
    printf("Difference between largest element and smallest element is %d",iRet);
    free(p);
    return 0;

}