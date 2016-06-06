#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num<0)
       printf("number is negative");
    else if(num>0)   
       printf("number is positive");
     else
       printf("number is zero");
    return 0;
}
