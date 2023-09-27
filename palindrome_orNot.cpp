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
    bool flag = true;
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i]!=v[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    flag == true ? cout<<"array is a palindrome":cout<<"array is not a palindrome";
}