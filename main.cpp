//to check the given integer is even /odd , using bool data type
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int num;
    printf("Enter an Integer:");
    scanf("%d",&num);
    bool isEven = true;
    bool isOdd = false;
    isEven = (num%2==0);
    if(isEven)
    {
        printf("The number %d is Even",num);
    }
    else
    {
        printf("The number %d is Odd",num);
    }
    return 0;

}
