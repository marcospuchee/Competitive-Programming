// binary search

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, tar;
    cin>>tar>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin>>v[i];
    
    int l = -1, r = n, m;
    while(r > l + 1){
        m = (l+r)/2;
        if(v[m] >= tar)
            r = m;
        else
            l = m;
    }
    if(v[r] == tar)
        cout<<r<<'\n';
    else
        cout<<-1<<'\n';




    return 0;
}