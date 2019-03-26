//441 Lotto
#include<bits/stdc++.h>

using namespace std;

int main(){

    int k;
    cin>>k;

    while(k){

        vector<int> a(k);
        for(int i=0;i<k;i++){
            cin>>a[i];
        }

        for(int i1=0;i1<k;i1++){
            for(int i2=i1+1;i2<k;i2++){
                for(int i3=i2+1;i3<k;i3++){
                    for(int i4=i3+1;i4<k;i4++){
                        for(int i5=i4+1;i5<k;i5++){
                            for(int i6=i5+1;i6<k;i6++){
                                cout<<a[i1]<<" "<<a[i2]<<" "<<a[i3]<<" "<<a[i4]<<" "<<a[i5]<<" "<<a[i6]<<"\n";
                            }
                        }
                    }
                }
            }
        }

        cin>>k;
        if(k!=0){
            cout<<"\n";
        }
    }

    return 0;
}