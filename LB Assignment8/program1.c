#include<stdio.h>

double CircleArea(float fRadius)
{
double pi=3.14;
double area=0.0;

area=pi*fRadius*fRadius;
return area;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter Radius");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("area of circle is:%f",dRet);

    return 0;
}