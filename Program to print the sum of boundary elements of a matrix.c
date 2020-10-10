#include<stdio.h>
#define ROW 3
#define COLUMN 3
void boundarySum();
int main(void)
{
	int matrix[ROW][COLUMN],i,j;
	printf("<-------Enter the elements in the matrix-------->\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("Element at position matrix1[%d][%d] :-",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	boundarySum(matrix);
	
	return 0;
}
void boundarySum(int matrix[][COLUMN])
{
    int i,j;
    int sum=0;
    printf("\n\n<-------Original matrix-------->\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            if(i>=1 && i<=ROW-2 && j>=1 && j<=COLUMN-2){
                continue;
            }
            sum=sum+matrix[i][j];
        }
    }
    printf("sum of all boundary element is :-%d",sum);
}
