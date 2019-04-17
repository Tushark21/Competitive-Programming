//10670 Work Reduction
#include<bits/stdc++.h>

using namespace std;

void swap(long* a, long* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(vector<string> &name,vector<long> &a,int low, int high){
    long pivot=a[high];
    int i=(low-1);
  
    for (int j=low;j<=high-1;j++){
        if (a[j]<pivot){
            i++;
            string temp=name[i];
            name[i]=name[j];
            name[j]=temp;
            swap(&a[i],&a[j]);
        }
    }

    string temp=name[i+1];
    name[i+1]=name[high];
    name[high]=temp;
    swap(&a[i+1],&a[high]);
    
    return (i + 1);
} 

void quickSort(vector<string> &name,vector<long> &a,int low,int high){
    if(low<high){
        int pi = partition(name,a,low,high);

        quickSort(name,a,low,pi-1);
        quickSort(name,a,pi+1,high);
    }
}

int find(int x,int xp,int y,int yp){
    int count=0;
    
    long onePrice=(x-y)*xp,halfPrice=0,actualPrice=onePrice;
    int prev=x;
    while((x/2)>=y){
        x/=2;
        count++;
        halfPrice=(count*yp);
        onePrice-=(prev-x)*xp;
        actualPrice=min(actualPrice,onePrice+halfPrice);
        prev=x;
    }

    return actualPrice;
}

int main(){
    
    int t,tc=1;
    cin>>t;

    while(t--){

        int n,m,l;
        cin>>n>>m>>l;

        string s;

        vector<string> name(l);
        vector<int> a(l);
        vector<int> b(l);

        for(int i=0;i<l;i++){
            cin>>name[i];
        }

        sort(name.begin(),name.end());

        for(int i=0;i<l;i++){
            string temp="";
            for(int j=0;j<name[i].length();j++){
                if(name[i][j]==':'){
                    s=temp;
                    temp="";
                }
                else if(name[i][j]==','){
                    a[i]=stoi(temp);
                    temp="";
                }
                else{
                    temp+=name[i][j];
                }
            }
            b[i]=stoi(temp);
            name[i]=s;
        }
        
        vector<long> sol(l);
        for(int i=0;i<l;i++){
            sol[i]=find(n,a[i],m,b[i]);
        }

        quickSort(name,sol,0,l-1);

        cout<<"Case "<<tc<<"\n";
        for(int i=0;i<l;i++){
            cout<<name[i]<<" "<<sol[i]<<"\n";
        }
        tc++;
    }

    return 0;
}