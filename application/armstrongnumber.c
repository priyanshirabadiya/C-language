#include <stdio.h>
int main()
{
    int n, i, sum = 0, reminder, len = 0, lenreminder, lenN , mul = 1;
    printf("Enter number:");
    scanf("%d", &n);
    lenN = n;
    while (n != 0)
    {
        n = n / 10;
        len += 1;
    }
    printf("length is: %d", len);
    while (lenN != 0)
    {
        reminder = lenN % 10;
        mul = 1;
        for(i = 1 ; i <= len ; i++)
        {
            mul = reminder * mul;
        }
        sum += mul;
        lenN = lenN / 10;
    }
    printf("\nSum is: %d", sum);
    return 0;
}
