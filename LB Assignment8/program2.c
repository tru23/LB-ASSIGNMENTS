#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{

double area=0.0;

area=fWidth*fHeight;
return area;
}

int main()
{
    float fValue1=0.0;
    float fValue2=0.0;
    double dRet=0.0;

    printf("Enter widh");
    scanf("%f",&fValue1);
    printf("Enter height");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("area of circle is:%f",dRet);

    return 0;
}