#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5,6,7,8,9,10};
    int x ;
    cout<<"enter x: ";
    cin>>x;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count<<" elements are greater than x";
}
