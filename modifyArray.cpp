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
    for(int i = 0;i<v.size();i++){
        if(i%2==0){
            v[i] +=10;
        }
        else{
            v[i] *=2;
        }
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<"  ,   ";
    }
}