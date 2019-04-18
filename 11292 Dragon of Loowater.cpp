//11292 Dragon of Loowater
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    while(n!=0 || m!=0){
        vector<int> drag(n);
        vector<int> knight(m);

        for(int i=0;i<n;i++){
            cin>>drag[i];
        }

        for(int i=0;i<m;i++){
            cin>>knight[i];
        }

        sort(drag.begin(),drag.end());
        sort(knight.begin(),knight.end());
        
        int i=0,j=0;
        long price=0;
        while(i<n && j<m){
            if(drag[i]<=knight[j]){
                i++;
                price+=knight[j];
            }
            j++;
        }

        if(i==n){
            cout<<price<<"\n";
        }
        else{
            cout<<"Loowater is doomed!\n";
        }

        cin>>n>>m;    
    }

    return 0;
}