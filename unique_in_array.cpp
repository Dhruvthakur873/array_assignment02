#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the "<<i<<" ele  of vector: ";
        cin>>x;
        v.push_back(x);
    }
    int unique;
    for(int i=0;i<v.size();i++){
        bool flag = true;
        for(int j = 0;j<v.size();j++){
            if(i==j){
                continue;
            }
            if(v[i]==v[j]){
                flag = false;
                break;
            }
        }
        if(flag == true){
            unique = v[i];
            cout<<unique;
        }
    }
}