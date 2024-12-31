// // // #include <stdio.h>
// // // int main()
// // // {
// // //     int n;
// // //     printf("Enter n:");
// // //     scanf("%d", &n);
// // //     if (n > 18)
// // //     {
// // //         printf("eligible to give vote.");
// // //     }
// // //     else
// // //     {
// // //         printf("NOT eligible to give vote.");
// // //     }
// // //     return 0;
// // // }

// // #include <stdio.h>
// // int main()
// // {
// //     int n, m;
// //     printf("enter n:");
// //     scanf("%d", &n);
// //     printf("enter m:");
// //     scanf("%d", &m);
// //     if (n < m)
// //     {
// //         printf("m is greater");
// //     }
// //     else
// //     {
// //         printf("n is greater");
// //     }
// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter value of n:");
//     scanf("%d", &n);
//     if (n % 5 == 0)
//     {
//         printf("Devided by 5");
//     }
//     else
//     {
//         printf("not Devided by 5");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int income, tax, total;
    printf("Enter income:");
    scanf("%d", &income);
    if (income <= 2500)
    {
        tax = income * 0;
        printf("Tax per income is %d.", tax);
    }
    else if (income > 2500 && income <= 5000)
    {
        tax = (income - 2500) * 0.10;
        printf("Tax per income is %d.", tax);
    }
    else if (income > 5000 && income <= 10000)
    {
        tax = 250 + (income - 5000) * 0.20;
        printf("Tax per income is %d.", tax);
    }
    else
    {
        tax = 250 + 1000 + (income - 10000) * 0.30;
        printf("Tax per income is %d.", tax);
    }
    return 0;
}
