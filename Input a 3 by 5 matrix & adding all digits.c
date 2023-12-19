#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k=0;
    int a[3][5];
	
	printf("Enter the Elements of the matrix: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=4; j++)
        {
            k=k+a[i][j];
        }
    }
    printf("%d", k);
    return 0;
}
