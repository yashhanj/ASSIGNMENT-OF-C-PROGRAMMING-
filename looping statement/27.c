/* series program
27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6....n*/

#include <stdio.h>
int main() 
{
    int i;
	int n;
	
    float sum = 0;
    printf("Enter your n: ");
    scanf("%d",&n);
    int x,y;
    printf("\nSeries = ");
    for (x=1;x<=n;x++)
	{
        printf("\t %d / %d", x, y);
        y++;
    }
    for (i=1;i<=n;i++) 
	{
        if (i % 2 != 0) 
		{
            sum += (float)i/(i + 1);
        } else 
		{
            sum -= (float)i/(i + 1);
        }
    }
    printf("\nThe sum of series = %.2f", sum);
    return 0;
}
