//10077 The Stern-Brocot Number System
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    long neum,denom;

    cin>>neum>>denom;

    while(neum!=1 || denom!=1){
        double result,currResult;
        long sNeum=0,sDenom=1,eNeum=1,eDenom=0,currNeum,currDenom;

        currNeum=sNeum+eNeum;
        currDenom=sDenom+eDenom;
        string ans="";
        result=(double)neum/(double)denom;
        currResult=(double)currNeum/(double)currDenom;
        
        while(currNeum!=neum || currDenom!=denom){
            if(currResult>result){
                eNeum=currNeum;
                eDenom=currDenom;
                ans+='L';
            }
            else{
                sNeum=currNeum;
                sDenom=currDenom;
                ans+='R';
            }

            currNeum=sNeum+eNeum;
            currDenom=sDenom+eDenom;
            currResult=(double)currNeum/(double)currDenom;
            //cout<<sNeum<<"/"<<sDenom<<" "<<eNeum<<"/"<<eDenom<<"\n";
        }

        cout<<ans<<"\n";
        cin>>neum>>denom;
    }

    return 0;
}