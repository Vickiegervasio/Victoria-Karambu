//Fxn of area of a circle
#include<stdio.h>
#define pi 3.142
int area(int r);
int main()
{
    int a,b,area;
    printf("enter value of a,a:");
    scanf("%d%d",&a,&a);
    area=pi*a*a;
    printf("the area is %d",area);
    return 0;
}
//Fxn definition
int area(int a)
{
    int area;
    area=pi*a;
    return area;
}
