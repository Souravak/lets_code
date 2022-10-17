#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int min_val = min(a,min(b,c)),count=0;
    for(int i = 1;i<=min_val;i++) if(a%i==0 && b%i==0 && c%i==0) count++;
    cout<<count<<endl;
    return 0;
}
