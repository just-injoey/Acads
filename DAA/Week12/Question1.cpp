#include <bits/stdc++.h>
using namespace std;

bool twoColorUtil(vector<int>G[], int src, int N,
								int colorArr[]) {
	
	colorArr[src] = 1;
	
	queue <int> q;
	q.push(src);
	
	while (!q.empty()){
		
		int u = q.front();
		q.pop();
		
		for (int v = 0; v < G[u].size(); ++v){
	
			if (colorArr[G[u][v]] == -1){
			
				colorArr[G[u][v]] = 1 - colorArr[u];
				q.push(G[u][v]);
			}

			else if (colorArr[G[u][v]] == colorArr[u])		
				return false;
		}
	}
	return true;
}

bool twoColor(vector<int>G[], int N){
	
	int colorArr[N];
	for (int i = 1; i <= N; ++i)
		colorArr[i] = -1;

	for (int i = 1; i <= N; i++)
		if (colorArr[i] == -1)
		if (twoColorUtil(G, i, N, colorArr) == false)
			return false;
		
		return true;
}

bool isOddSum(int info[][3],int n,int m){

	vector<int> G[2*n];
	
	int pseudo = n+1;
	int pseudo_count = 0;
	for (int i=0; i<m; i++){
		
		if (info[i][2]%2 == 1){
			
			int u = info[i][0];
			int v = info[i][1];
			G[u].push_back(v);
			G[v].push_back(u);
		}

		else{
			
			int u = info[i][0];
			int v = info[i][1];

			G[u].push_back(pseudo);
			G[pseudo].push_back(u);
			G[v].push_back(pseudo);
			G[pseudo].push_back(v);

			pseudo_count++;

			pseudo++;
		}
	}
	return twoColor(G,n+pseudo_count);
}

int main() {
	
	int n, m;
	cin>>n>>m;
	int info[4][3];
	for(int i=0; i<m; i++) {
	    for(int j=0; j<3; j++) {
	        cin>>info[i][j];
	    }
	}
	cout<<n<<" "<<m;
	for(int i=0; i<m; i++) {
	    cout<<endl;
	    for(int j=0; j<3; j++) {
	        cout<<info[i][j]<<" ";
	    }
	}
	if (isOddSum(info, n, m) == true)
		cout << "\nNo\n";
	else
		cout << "\nYes\n";
	
	return 0;
}
