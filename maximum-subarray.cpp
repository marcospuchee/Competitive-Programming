#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> dp(n);

    for(int i = 0; i<n; i++)
        cin>>v[i];

    dp[0] = v[0];
    int best = max(dp[0], 0);

    for(int i = 1; i<n; i++){
        dp[i] = max(dp[i-1]+v[i], v[i]);
        best = max(dp[i], best);
    }

    cout<<best<<'\n';

    return 0;
}