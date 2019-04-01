//10341 Solve It
#include<bits/stdc++.h>
#define esp 1e-7
using namespace std;


int p,q,r,s,t,u;

float f(float x){
    return ((p*exp((-1)*x))+(q*sin(x))+(r*cos(x))+(s*tan(x))+t*x*x+u);
}

int main(){

    while(cin>>p){
        cin>>q>>r>>s>>t>>u;

        float x,s,e,sol=1;
        s=0.0,e=1.0;
        
        //cout<<f(0)<<" "<<f(1)<<"\n";

        if(f(0)*f(1)>0){
            cout<<"No solution\n";
        }
        else{
            while(s+esp<e){
                x=(s+e)/2.0;
                //cout<<x<<",";

                sol=f(x);
                //cout<<sol<<"\n";
                if(f(s)*sol<=0){
                    e=x;
                }
                else{
                    s=x;
                }
            }
            printf("%.4f\n",x);
            //cout<<x<<"\n";
        }
    }

    return 0;
}