#include <stdio.h>

void prepost(int pre[], int N)
{
	int pivotPoint = 0;

	for(int i = 1; i < N; i++)
	{
		// changed '>=' to '<='
		if (pre[0] <= pre[i])
		{
			pivotPoint = i;
			break;
		}
	}
	// changed 'pivotPoint' to 'pivotPoint-1'
	for(int i = pivotPoint - 1; i > 0; i--)
	{
		printf("%d ", pre[i]);
	}

	for(int i = N - 1; i >= pivotPoint; i--)
	{
        printf("%d ", pre[i]);
	}
	// changed 'pre[i]' to 'pre[0]'
    printf("%d", pre[0]);
}

int main()
{
	int N;
    scanf("%d",&N);
    int *pre = malloc(sizeof(int) * N);
    for(int a_i = 0; a_i < N; a_i++){
       scanf("%d",&pre[a_i]);
    }
	
	prepost(pre, N);
	
	return 0;
}