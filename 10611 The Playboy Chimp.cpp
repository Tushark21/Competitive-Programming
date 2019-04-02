//10611 The Playboy Chimp
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;

    set<long> heightSet;
    vector<long> heights;

    for(int i=0;i<n;i++){
        long h;
        cin>>h;
        heightSet.insert(h);
    }

    set<long> :: iterator itr;

    n=0;
    for (itr = heightSet.begin(); itr != heightSet.end(); ++itr){
        heights.push_back(*itr);
        //cout<<*itr<<"\n";
        n++;
    }

    //cout<<n;
    int q;
    cin>>q;

    sort(heights.begin(),heights.end());
    
    while(q>0){
        long x;
        cin>>x;

        int index=-1;

        int s=0,e=n-1,mid;
        while(s<=e){
            mid=(s+e)/2;
            if(heights[mid]==x){
                break;
            }
            else if(heights[mid]>x){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        if(heights[mid]==x){
            if(mid-1>=0){
                cout<<heights[mid-1]<<" ";
            }
            else{
                cout<<"X ";
            }
            
            if(mid+1<n){
                cout<<heights[mid+1]<<"\n";
            }
            else{
                cout<<"X\n";
            }
        }

        else{
            if(heights[mid]<x){
                cout<<heights[mid]<<" ";
                if(mid+1<n){
                    cout<<heights[mid+1]<<"\n";
                }
                else{
                    cout<<"X\n";
                }
            }
            else{
                if(mid-1>=0){
                    cout<<heights[mid-1]<<" ";
                }
                else{
                    cout<<"X ";
                }
                cout<<heights[mid]<<"\n";
            }
        }
        q--;
    }

    return 0;
}