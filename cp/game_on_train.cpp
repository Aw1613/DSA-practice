#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int temp;
	vector<int> sol;
	while(t--){
	    int n;
	    cin>>n;
	    while(n--){
	        cin>>temp;
	        sol.push_back(temp);
	    }
	    sort(sol.begin(),sol.end());
	    cout<<(sol[sol.size()-1] - sol[0])+1<<endl;
	    sol.clear();
	}

}
