// // #include <stdio.h>
// // int main()
// // {
// //     int n;
// //     printf("Enter n:");
// //     scanf("%d", &n);
// //     if (n > 18)
// //     {
// //         printf("eligible to give vote.");
// //     }
// //     else
// //     {
// //         printf("NOT eligible to give vote.");
// //     }
// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     int n, m;
//     printf("enter n:");
//     scanf("%d", &n);
//     printf("enter m:");
//     scanf("%d", &m);
//     if (n < m)
//     {
//         printf("m is greater");
//     }
//     else
//     {
//         printf("n is greater");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    printf("enter value of n:");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        printf("Devided by 5");
    }
    else
    {
        printf("not Devided by 5");
    }
    return 0;
}
