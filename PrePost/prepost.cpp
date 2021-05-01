#include <iostream>
using namespace std;

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
		cout << pre[i] << " ";
	}

	for(int i = N - 1; i >= pivotPoint; i--)
	{
		cout << pre[i] << " ";
	}
	// changed 'pre[i]' to 'pre[0]'
	cout << pre[0];
}

int main()
{
	int N;
    cin >> N;
    int pre[N];
    for(int a_i = 0;a_i < N; a_i++){
       cin >> pre[a_i];
    }
    prepost(pre, N);
    
    return 0;
}