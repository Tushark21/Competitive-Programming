//11054 Wine trading in Gergovia
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;

    while(n!=0){

        vector<long long> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        long long ans=0;
        long long x,y;

        for(int i=0;i<n;i++){
            if(a[i]<0){
                for(int j=i-1;j>=0;j--){
                    x=a[i];
                    y=a[j];

                    if(a[j]>0){
                        ans+=(min((-1)*x,y))*(i-j);
                        a[j]=max((long long)0,x+y);
                        a[i]=min((long long)0,y+x);
                    }

                    if(a[i]==0){
                        break;
                    }
                }

                for(int j=i+1;j<n;j++){
                    if(a[i]==0){
                        break;
                    }
                    x=a[i];
                    y=a[j];
                    if(a[j]>0){
                        ans+=(min((-1)*x,y))*(j-i);
                        a[j]=max((long long)0,x+y);
                        a[i]=min((long long)0,y+x);
                    }
                }
            }
        }

        cout<<ans<<"\n";

        cin>>n;
    }

    return 0;
}