#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string usr;
        cin>>n;
        cin>>usr;
        int points=0;
        string temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp.compare("CONTEST_WON")==0){
                int rank;
                cin>>rank;
                points += 300+(20-rank);
            }
            else if(temp.compare("CONTRIBUTOR")==0) points += 300;
            else if(temp.compare("PROJECT")==0){
                int project_val;
                cin>>project_val;
                points += project_val;
            }
            else if(temp.compare("EVENT_HOSTED")==0) points+=50;
            else continue;
        }
        if(usr.compare("PRO")==0) cout<<points/200<<endl;
        else cout<<points/400<<endl;
        
    }
    return 0;
}
