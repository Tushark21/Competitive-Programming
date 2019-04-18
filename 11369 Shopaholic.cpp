//11369 Shopaholic
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> price(n);

        for(int i=0;i<n;i++){
            cin>>price[i];
        }

        sort(price.begin(),price.end(),greater<int>());

        long long discount=0;
        for(int i=0;i<n;i++){
            if(i%3==2){
                discount+=price[i];
            }
        }
        cout<<discount<<"\n";
    }

    return 0;
}