//10662 The Wedding
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t,h,r;
    while(cin>>t){
        cin>>r>>h;
        vector<vector<int>> a(t,vector<int>(r+1,1));
        vector<vector<int>> b(r,vector<int>(h+1,1));
        vector<vector<int>> c(h,vector<int>(t+1,1));

        for(int i=0;i<t;i++){
            for(int j=0;j<=r;j++){
                cin>>a[i][j];
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<=h;j++){
                cin>>b[i][j];
            }
        }
        
        for(int i=0;i<h;i++){
            for(int j=0;j<=t;j++){
                cin>>c[i][j];
            }
        }

        int ag,hotel,rest,min=INT_MAX,total;

        for(int i=0;i<t;i++){
            for(int j=0;j<r;j++){
                for(int k=0;k<h;k++){
                    if(a[i][j+1]==0 && b[j][k+1]==0 && c[k][i+1]==0){
                        total=a[i][0]+b[j][0]+c[k][0];
                        if(min>total){
                            min=total;
                            ag=i;
                            rest=j;
                            hotel=k;
                        }
                    }
                }
            }
        }

        if(min!=INT_MAX){
            cout<<ag<<" "<<rest<<" "<<hotel<<":"<<min<<"\n";
        }
        else{
            cout<<"Don't get married!\n";
        }
    }
    return 0;
}