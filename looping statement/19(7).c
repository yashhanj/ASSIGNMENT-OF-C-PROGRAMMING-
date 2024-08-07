//pattern spiral
#include<stdio.h>
#define A 10
int main()
{
	int arr[A][A] = {0};
	int i,j;
	
	int n = 1;
	//for row
	int top = 0,bottom = A-1;
	//for col
	int left = 0,right = A-1;
	
	while(top<=bottom && left<=right)
	{
		//left to right
		for(i=left;i<=right;i++)
		{
			arr[top][i]= n++;
		}
		top++;
		
		//right to bottom
		for(i=top;i<=bottom;i++)
		{
			arr[i][right] = n++;
		}
		right--;
		
		if(top<=bottom)
		{
			//bottom to left 
			for(i=right;i>=left;i--)
			{
				arr[bottom][i] = n++;
			}
			bottom--;
		}
		if(left<=right)
		{
			//left to top
			for(i=bottom;i>=top;i--)
			{
				arr[i][left] = n++;
			}
			left++;
		}
	}
	//2D array
	for(i=0;i<A;i++)
	{
		for(j=0;j<A;j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
