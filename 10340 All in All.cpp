//10340 All in All
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string s,t;
    
    while(cin>>s){
        cin>>t;

        int j=0;
        for(int i=0;i<t.length();i++){
            if(t[i]==s[j]){
                j++;
            }
        }

        if(j==s.length()){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }

        //getline(cin,s);
    }

    return 0;
}