#include<stdio.h>

int isEven(int a)
{
    return !(a & 1);
}


int main()
{
    int a;
    
    printf("Enter any number: ");
    scanf("%d", &a);
    
    
    if(isEven(a))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}
