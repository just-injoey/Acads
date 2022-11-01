#include<iostream>
#include<climits>
using namespace std;
void printDistance(int mat[100][100],int N,int M)
{
	int ans[N][M];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			ans[i][j] = INT_MAX;


	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			
			for (int k = 0; k < N; k++)
				for (int l = 0; l < M; l++) {
					
					if (mat[k][l] == 1)
						ans[i][j]
							= min(ans[i][j],
								abs(i - k) + abs(j - l));
				}
		}

	// Printing the answer.
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			cout << ans[i][j] << " ";
	}
}

int main()
{
	int mat[100][100];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        cin>>mat[i][j];
	    }
	}

	printDistance(mat,n,m);

	return 0;
}
