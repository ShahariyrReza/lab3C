#include<stdio.h>
int max(int a, int b)
{
    return (a > b)? a : b;
}


int knapSack(int maxweight, int weights[], int values[], int n)
{
    int i, j;
    int subset[n+1][maxweight+1];


    for (i = 0; i <= n; i++)
    {
	for (j = 0; j <= maxweight; j++)
	{
		if (i==0 || j==0)
			subset[i][j] = 0;
		else if (weights[i-1] <= j)
				subset[i][j] = max(values[i-1] + subset[i-1][j-weights[i-1]], subset[i-1][j]);
		else
				subset[i][j] = subset[i-1][j];
	}
    }

    return subset[n][maxweight];
}

// Here Main function
int main()
{
        // Test case for the program :
	int values[] = {30, 20, 60, 80, 10};
	int weights[] = {10, 20, 30, 40, 50};
        // Maximum Weight here
	int MaxWeight = 80;
	int n = sizeof(values)/sizeof(values[0]);
        // Display the Result
	printf("%d\n", knapSack(MaxWeight, weights, values, n));
        // Result is 170 for test case given initially.

	return 0;
}
