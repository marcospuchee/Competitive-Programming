#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    vector<int> dp(n);

    for(int i = 0; i<n; i++)
        cin>>v[i];

    for(int i = 0; i<n; i++){
        dp[i] = 1;
        for(int j = 0; j<i; j++)
            if(v[j] < v[i])
                dp[i] = max(dp[i], dp[j] + 1);
    }

    cout<<dp[n-1]<<'\n';

    return 0;
}