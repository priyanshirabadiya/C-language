// #include<stdio.h>
// int main()
// {
// 	int i,n,a=0,b=1,c;
// 	printf("enter n:");
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++)
// 	{
// 		c=a+b;
// 		printf("  %d",c);
// 		a=b;
// 		b=c;
// 	}
// 	return 0;
// }


// 	#include <stdio.h>
// 	#include<string.h>

// int main() {
//     char str[100][100];
//     int i, j, count = 0;

//     printf("Enter a 2D string: ");
//     for (i = 0; i < 2; i++) {
//         // scanf("%s", str[i]);
// 		gets(str[i]);
//     }

//     for (i = 0; i < 2; i++) {
//         for (j = 0; j < strlen(str[i]) ; j++) {
//             if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u') {
//                 count++;
//             }
//         }
//     }

//     printf("The number of vowels in the 2D string is: %d", count);

//     return 0;
// }	




#include <stdio.h>

int main() {
  char str[100];
  int i, count = 0;

  printf("Enter a string: ");
  scanf("%s", str);

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
      count++;
    }
  }

  printf("The number of vowels in the string is: %d\n", count);

  return 0;
}