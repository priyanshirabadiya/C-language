// #include<stdio.h>
// int main(){
//     int a = 5 , b = 25 , c = 3;
//     if(a > b && a > c)
//         printf("A");
//     else if(b > a && b > c)
//         printf("B");
//     else
//         printf("C");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, flag = 0, i;

//     printf("Enter n:");
//     scanf("%d", &n);
//     if (n < 2)
//     {
//         flag = 1;
//     }
//     for (i = 2; i * i <= n; i++)
//     {
//         // printf("I is: %d\n",i);
//         if (n % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         printf("Number is prime.");
//     }
//     else
//     {
//         printf("Number is not prime.");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a , b , c;
//     printf("Enter a:");
//     scanf("%d",&a);
//     printf("Enter b:");
//     scanf("%d",&b);
//     c = a;
//     a = b;
//     b = c;
//     printf("A is: %d",a);
//     printf("\nB is: %d",b);
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int a , b , c;
//     printf("Enter a:");
//     scanf("%d",&a);
//     printf("Enter b:");
//     scanf("%d",&b);
//     c =  a + b; // 30  10 + 20
//     b = c - b;  // 30 - 20  = 10
//     c = c - b; // 30 - 10 = 20
//     printf("A : %d",c);
//     printf("\nB : %d",b);
//     return 0;
// }


// C Program for converting
// binary to decimal
#include <stdio.h>

int main()
{
    int N = 10000;

    int a = 1;
    int ans = 0;
    while(N != 0){
        ans = ans + (N % 10) * a;
        N = N / 10;
        a = a * 2;
    } 
    printf("%d", ans);
    return 0;
}

