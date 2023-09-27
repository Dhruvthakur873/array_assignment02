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
    int max = INT_MIN;
    int smax = INT_MIN;
    int Third_max = INT_MIN;
    for(int i = 0;i<v.size();i++){
        if(max<v[i]){
            Third_max = smax;
            smax = max;
            max = v[i];
        }
        else if(smax<v[i]&& v[i]!=max){
            smax = v[i];
        }
        else if(Third_max<v[i] && v[i]!=smax && v[i]!=max){
            Third_max = v[i];
        }
    }
    if (Third_max!=smax && smax!=max){
        cout<<"Three unique max ele of the array are "<<Third_max<<","<<smax<<" and "<<max;
    }
}