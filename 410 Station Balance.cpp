//410 Station Balance
#include<bits/stdc++.h>

using namespace std;

double mod(double x){
    if(x<0){
        return -1*x;
    }
    return x;
}

int main(){
    
    int c,t=1;

    while(scanf("%d", &c)!=EOF){

        int s;
        cin>>s;

        vector<int> mass(2*c,0);
        int sum=0;

        for(int i=0;i<s;i++){
            cin>>mass[i];
            sum+=mass[i];
        }

        double avg=(double)sum/(double)c;
        sort(mass.begin(),mass.begin()+s,greater<int>());

        cout<<"Set #"<<t<<"\n";
        double imbal=0.0;

        for(int j=0;j<c;j++){
            cout<<" "<<j<<":";
            if(mass[j]!=0){
                cout<<" "<<mass[j];
            }
            
            if(mass[(2*c-j-1)]!=0){
                cout<<" "<<mass[(2*c-j-1)];
            }

            imbal+=mod((mass[j]+mass[(2*c-j-1)]-avg));
            cout<<"\n";
        }

        printf("IMBALANCE = %.5f\n\n",imbal);
        t++;
    }

    return 0;
}