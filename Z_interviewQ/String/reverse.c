// #include <stdio.h>
// int main()
// {
//     char str1[20], str2[20];
//     int i, j, k = 0;
//     printf("Enter string:");
//     gets(str1);
//     printf("Entered string is: %s", str1);
//     i = 0;
//     while (str1[i] != '\0')
//     {
//         i++;
//     }
//     j = i - 1;
//     while (k <= i)
//     {
//         str2[k] = str1[j];
//         j--;
//         k++;
//     }
//     str2[k] = '\0';
//     printf("\nReverse is : %s", str2);
//     return 0;
// }

#include <stdio.h>
int main()
{
    char str1[20], str2[20];
    int k = 0, n = 0, e , s = 0;
    gets(str1);
    gets(str2);

    while (str1[n] != '\0')
    {
        n++;
    }
    e = n - 1;
    while (s < e)
    {
        str1[n++] = str2[k];
        k++;
    }
    str1[n] = '\0';
    printf("Merged string is : %s", str1);
    return 0;
}
