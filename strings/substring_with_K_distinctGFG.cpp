#include<bits/stdc++.h>
using namespace std;
int atMostKDistinct(string &s,int k){
	int n=s.size();
	int ans=0;
	int l=0;
	int distinctChar=0;
	vector<int> hmap(26,0);
	for(int r=0;r<n;r++){
		if(hmap[s[r]-'a']==0){
			distinctChar++;
		}
		hmap[s[r]-'a']++;
		while(distinctChar>k){
			l++;
			hmap[s[l]-'a']--;
			if(hmap[s[l]-'a']==0){
				distinctChar--;
			}
		}
		ans+=r-l+1;
	}
}
int countSubstr(string& s, int k) {
	return atMostKDistinct(s,k)-atMostKDistinct(s,k-1);
}