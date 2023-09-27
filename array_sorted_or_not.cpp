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
     bool sorted = true;
    for (int i = 0; i < v.size() - 1; i++) {  // Fix: loop up to v.size() - 2
        if (v[i] > v[i + 1]) {
            sorted = false;
            break;  // Optimization: exit early if unsorted element is found
        }
    }
    if(sorted){
        cout<<"The array  is sorted";
    }else{
        cout<<"The array  is not sorted";
    }
}