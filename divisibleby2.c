// 2. check number is divisible by 2//

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    if ((num & 1) ==0)
    {
        printf("%d is divisible by 4\n", num);

    }
    else
    {
        printf("%d is not divisible by 4\n",num);

    }

    return 0;
}