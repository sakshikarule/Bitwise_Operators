/*8. print binary of given num*/

#include<stdio.h>

int main()
{
    unsigned int n;
    int i;

    printf("Enter number :");
    scanf("%u", &n);

    for (i = 31; i>=0; i--)
    {
        if ((n >> i) & 1)
        printf("1");
    
        else
        printf("0");    
    }
    printf("\n");

    return 0;
}

