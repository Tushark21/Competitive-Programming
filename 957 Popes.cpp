//957 Popes
#include<bits/stdc++.h>

using namespace std;

int main(){
    long m;

    while(cin>>m){
        long n;
        cin>>n;

        vector<int> popes(1000001,0);
        int year;
        
        for(int i=0;i<n;i++){
            cin>>year;
            popes[year]++;;
        }

        long max=0,s,e;
        for(int i=0;i<m;i++){
            max+=popes[i];
        }

        s=0;
        e=m-1;

        /*
        for(int i=1;i<32;i++){
            cout<<popes[i]<<",";
        }
        cout<<"\n"<<max<<"\n";
        */
        
        long prev=max;
        for(int i=m;i<1000001;i++){
            if(max<(prev-popes[i-m]+popes[i])){
                max=prev-popes[i-m]+popes[i];
                s=i-m+1;
                e=i;
            }
            prev=prev-popes[i-m]+popes[i];
            //cout<<prev-popes[i-m]+popes[i]<<"\n";
        }

        long firstPope=-1,lastPope=-1;

        for(int i=s;i<=e;i++){
            if(popes[i]>0 && firstPope==-1){
                firstPope=i;
            }
            if(popes[i]>0){
                lastPope=i;
            }
        }

        cout<<max<<" "<<firstPope<<" "<<lastPope<<"\n";
        getchar();
    }

    return 0;
}