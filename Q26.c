//Q26: Program to print numbers from 1 to n.
#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a number n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    printf("%d ", i);

    return 0;
}