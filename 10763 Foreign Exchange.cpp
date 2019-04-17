//10763 Foreign Exchange
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;

    while(n!=0){

        vector<int> freq(1000000,0);
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            freq[a]++;
            cin>>a;
            freq[a]++;
        }

        bool possible=true;
        for(int i=0;i<1000000;i++){
            if(freq[i]%2!=0){
                possible=false;
                break;
            }
        }

        if(possible){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        cin>>n;
    }

    return 0;
}