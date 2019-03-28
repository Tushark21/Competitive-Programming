//679 Dropping Balls
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t,n,k;
    cin>>t;

    cin>>n;
    while(t>0 && n!=-1){
        cin>>k;
        
        long size=1<<(n-1);
        vector<long> tree(size,0);

        k=k%(1<<(n-1));
        
        if(k==0){
            k=(1<<(n-1));
        }

        k--;

        long l=1,lastIndex=0;

        while(n--){
            if(1&k){
                lastIndex=l;
                l=(l*2)+1;
            }
            else{
                lastIndex=l;
                l=l*2;
            }
            k>>=1;
        }

        cout<<lastIndex<<"\n";
        
        cin>>n;
        t--;
    }

    return 0;
}

//Brute Force O(k*n);
/*
for(int i=1;i<=k;i++){
            long l,r;
            l=1;r=1<<n;
            while(l<r){
                //Traverse Left Subtree
                if(!tree[l]){
                    tree[l]=true;
                    lastIndex=l;
                    l=2*l;
                }
                //Traverse Right Subtree
                else{
                    tree[l]=false;
                    lastIndex=l;
                    l=(2*l)+1;
                }
            }
        }
*/