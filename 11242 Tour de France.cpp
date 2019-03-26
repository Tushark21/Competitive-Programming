//11242 Tour de France
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int fClusterN,rClusterN;
    cin>>fClusterN;

    while(fClusterN){
        cin>>rClusterN;

        vector<int> fTeeth(fClusterN);
        vector<int> rTeeth(rClusterN);

        for(int i=0;i<fClusterN;i++){
            cin>>fTeeth[i];
        }

        for(int i=0;i<rClusterN;i++){
            cin>>rTeeth[i];
        }

        vector<double> driveRatio;

        for(int i=0;i<fClusterN;i++){
            for(int j=0;j<rClusterN;j++){
                driveRatio.push_back((double)rTeeth[j]/(double)fTeeth[i]);
            }
        }

        sort(driveRatio.begin(),driveRatio.end());

        double spread=0,tempSpread;
        for(int i=1;i<driveRatio.size();i++){
            tempSpread=driveRatio[i]/driveRatio[i-1];
            if(spread<tempSpread){
                spread=tempSpread;
            }
        }

        printf("%.2f\n",spread);

        cin>>fClusterN;
    }

    return 0;
}