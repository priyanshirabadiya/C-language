 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	char c,i;
	clrscr();
	for(c=65;c<=90;c++)
	{
		i=c+32;
		printf("\n %c-%c",c,i);
	}
	getch();
 }