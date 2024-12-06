#include<stdio.h>
int main()
{
	int i,j,a[5][5],b[5][5],total=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter val:");
			scanf("   %d",&a[i][j]);
		}
	}
	printf("\n");
	printf("sparse matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(a[i][j]==0)
			printf("  ");
		else
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


/*
#include<stdio.h>

int main() {
    int i, j, a[3][3];

    // Input the elements for the 3x3 matrix
    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Display the original matrix
    printf("Original matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Display the sparse matrix representation
    printf("Sparse matrix representation:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] == 0)
                printf("  "); // Print two spaces for zero elements
            else
                printf("%d ", a[i][j]); // Print the non-zero element
        }
        printf("\n");
    }

    return 0;
}*/