// alg to find the lower bound in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int lb, n;
    cin>>lb>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin>>v[i];

    sort(v.begin(), v.end());

    int l = -1, r = n, m;
    while(r > l+1){
        m = (l+r)/2;
        if(v[m] >= lb)
            r = m;
        else 
            l = m;
    }
    if(r == n)
        cout<<-1<<'\n';
    else
        cout<<v[r]<<'\n';

    return 0;
}