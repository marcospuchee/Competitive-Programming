#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int a1, b1;
    if(b == a+1){            
        a1 = (a * 10) + 9;
        b1 = (b * 10);
        cout<<a1<<' '<<b1;
        return 0;
    }
    else if(b == a){
        a1 = (a * 10);
        b1 = (b * 10) + 1;
        cout<<a1<<' '<<b1;
        return 0;
    }
    else if(a == 9 && b == 1){
        a1 = a * 10 + a;
        b1 = b * 100;
        cout<<a1<<' '<<b1;
        return 0;
    }

    cout<<-1;

    return 0;
}