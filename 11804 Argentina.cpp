//11804 Argentina
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;

    vector<string> name(10);
    vector<int> attackPower(10);
    vector<int> defencePower(10);
    
    vector<string> tempName(10);
    vector<int> tempAPower(10);
    vector<int> tempDPower(10);

    int num=1;
    while(t--){
        for(int i=0;i<10;i++){
            cin>>name[i]>>tempAPower[i]>>tempDPower[i];
            tempName[i]=name[i];
        }

        sort(name.begin(),name.end());

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(name[i]==tempName[j]){
                    attackPower[i]=tempAPower[j];
                    defencePower[i]=tempDPower[j];
                }
            }
        }

        /*
        for(int i=0;i<10;i++){
            cout<<name[i]<<" "<<attackPower[i]<<" "<<defencePower[i]<<"\n";
        }
        */

        int player1,player2,player3,player4,player5;
        int maxAttack=0,maxDefence=0,attackTotal,defenceTotal=0;
        for(int i1=0;i1<6;i1++){
            for(int i2=i1+1;i2<7;i2++){
                for(int i3=i2+1;i3<8;i3++){
                    for(int i4=i3+1;i4<9;i4++){
                        for(int i5=i4+1;i5<10;i5++){
                            attackTotal=attackPower[i1]+attackPower[i2]+attackPower[i3]+attackPower[i4]+attackPower[i5];
                            defenceTotal=0;
                            for(int j=0;j<10;j++){
                                if(j!=i1 && j!=i2 && j!=i3 && j!=i4 && j!=i5){
                                    defenceTotal+=defencePower[j];
                                }
                            }
                            if(maxAttack<attackTotal){
                                maxAttack=attackTotal;
                                maxDefence=defenceTotal;
                                player1=i1;player2=i2;player3=i3;player4=i4;player5=i5;
                            }
                            else if(maxAttack==attackTotal && maxDefence<defenceTotal){
                                maxAttack=attackTotal;
                                maxDefence=defenceTotal;
                                player1=i1;player2=i2;player3=i3;player4=i4;player5=i5;
                            }
                        }
                    }
                }
            }
        }

        cout<<"Case "<<num<<":\n";

        cout<<"("<<name[player1]<<", "<<name[player2]<<", "<<name[player3]<<", "<<name[player4]<<", "<<name[player5]<<")\n";
        
        cout<<"(";
        int cnt=0;
        for(int j=0;j<10;j++){
            if(j!=player1 && j!=player2 && j!=player3 && j!=player4 && j!=player5){
                cout<<name[j];
                cnt++;
                if(cnt<5){
                    cout<<", ";
                }
            }
        }
        cout<<")\n";
        //cout<<maxAttack<<","<<maxDefence;
        num++;
    }

    return 0;
}