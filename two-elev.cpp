//https://codeforces.com/contest/1729/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        if(b > c){  //only b counts
            if(b > a)
                cout<<1<<'\n';
            else if(a > b)
                cout<<2<<'\n';
            else
                cout<<3<<'\n';
        }
        else{   //b first has to travel to c and then go to 1
            if(a > ((c-b+c))) //a < than the travel from b to c to 1
                cout<<2<<'\n';
            else if(a < ((c-b+c)))
                cout<<1<<'\n';
            else
                cout<<3<<'\n';
        }
    }

    return 0;
}