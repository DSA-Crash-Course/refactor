#include <bits/stdc++.h>
using namespace std;

/*
vector<int> findMaximumValue(vector<int> prices,vector<int> pos,vector<int> amount)
{
	int n=(int)prices.size(),q=(int)pos.size();
	vector<int> ans (q);
	int en=n-1;
	for(int i=0;i<q;i++){
		int st=pos[i]-1;
		int cnt=0,totAmt=0;
		while(true){
			if(totAmt+prices[st]>amount[i]) break;
			totAmt +=prices[st++];
			cnt++;
			if(st==en) break;
		}
		ans[i]=cnt;
	}
	return ans;
}
*/
int countTeams(int teamSize_1,int teamSize_2,int p){
	if(teamSize_1+teamSize_2<p) return -1;
	if(teamSize_1>teamSize_2) p -=teamSize_1;
	else p -=teamSize_1;
	if(p>0) return 2;
	else return 1;
}


int main() {
	int t1,t2,p; cin>>t1>>t2>>p;
	cout<<countTeams(t1,t2,p)<<endl;
}
