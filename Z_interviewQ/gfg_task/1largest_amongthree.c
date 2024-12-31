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
// #include <stdio.h>

// int main()
// {
//     int N = 10000;

//     int a = 1;
//     int ans = 0;
//     while(N != 0){
//         ans = ans + (N % 10) * a;
//         N = N / 10;
//         a = a * 2;
//     }
//     printf("%d", ans);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 5, i;
//     for (i = 1; i < 5; i++)
//     {
//         n = n * i;
//     }
//     printf("Factoria is : %d", n);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, originalNum, remainder, result = 0, n = 0, i;
//     int power = 1;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     originalNum = num;
//     while (originalNum != 0)
//     {
//         originalNum /= 10;
//         n++;
//     }
//     originalNum = num;
//     while (originalNum != 0)
//     {
//         remainder = originalNum % 10;
//         for (i = 0; i < n; i++)
//         {
//             power *= remainder;
//         }
//         result += power;
//         originalNum /= 10;
//     }

//     if (result == num)
//     {
//         printf("%d is an Armstrong number.\n", num);
//     }
//     else
//     {
//         printf("%d is not an Armstrong number.\n", num);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int rev = 0, n, org, reminder, i;
//     printf("Enter n:");
//     scanf("%d", &n);
//     org = n;
//     while (n != 0)
//     {
//         reminder = n % 10;
//         rev = rev * 10 + reminder;
//         n /= 10;
//     }
//     printf("Rev is:%d", rev);
//     if (rev == org)
//     {
//         printf("\nPalindrome");
//     }
//     else
//     {
//         printf("\nNot Palindrome");
//     }
//     return 0;
// }

// #include <stdio.h>
// #define n 10
// int main(int val)
// {
//     if (val <= n && printf("%d ", val) && main(val + 1)){}
// }

// #include <stdio.h>
// int main()
// {
//     int n = 5, i, j, sp;
//     for (i = 0; i <= 5; i++)
//     {
//         for (sp = 5; sp >= i; sp--)
//         {
//             printf(" ");
//         }
//         for (j = 0; j <= i; j++)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
// }

// fibonaccie series

// #include <stdio.h>
// int main()
// {
//     int i , n;
//     int t1 = 0, t2 = 1;
//     int nextterm = t1 + t2;
//     printf("Enter n:");
//     scanf("%d", &n);
//     printf("Fibonacci Series: %d, %d ", t1, t2);
//     for (i = 3; i <= n; ++i)
//     {
//         printf(",%d ", nextterm);
//         t1 = t2;
//         t2 = nextterm;
//         nextterm = t1 + t2;
//     }
//     return 0;
// }

// int rec(int n){
//     if(n >= 1)
//         return n * rec(n - 1);
//     else
//         return 1;
// }

// int main(){
//     int n;
//     printf("Enter n:");
//     scanf("%d", &n);
//     printf("Fac is: %d",rec(n));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, i, odd, sum;
//     printf("Enter n:");
//     scanf("%d", &n);
//     for (i = 0; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             sum += i;
//         }
//     }
//     printf("Sum:%d", sum);
// }

#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d", a);
    {
        int a = 20;
        printf("%d", a);
    }
    printf("%d", a);
}
