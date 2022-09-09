// You are given array consisting of n integers. Your task is to find the maximum length of an increasing subarray of the given array.

// A subarray is the sequence of consecutive elements of the array. Subarray is called increasing if each element of this subarray strictly greater than previous.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> dp (n);
    vector<int> v (n);
    for(int i = 0; i<n; i++)
        cin>>v[i];

    dp[0] = 1;
    int best = 1;
    for(int i = 1; i<n; i++){
        if(v[i] > v[i-1])
            dp[i] = dp[i-1]+1;
        else
            dp[i] = 1;
        best = max(best, dp[i]);
    }

    cout<<best<<'\n';

    return 0;
}