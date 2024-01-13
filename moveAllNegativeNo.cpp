//  Move all negative number to left side of an array
// Method 1: sorting method
/*
// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int ans;
    vector<int>arr{2,-3,5,1,-9,0,5};
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++) {
    cout<<  arr[i] <<" ";
    }
    return 0;
}
*/
// Method 2 : 
/*
#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>&arr) {
    int l = 0;
    int h = arr.size() -1;
    int ans=0;
    while(l<h) {
        if(arr[l] < 0) {
            l++;
        }
        else if(arr[h] > 0) {
            h--;
        }
        else{
            swap(arr[h],arr[l]);
        }
        
    }
    return ans;
}
int main() {
    vector<int>arr{2,-3,5,1,-9,0,5};
    int ans = find(arr);
    cout<<"Modifiend array : " <<endl;
    for(int i=0;i<arr.size();i++) {
        cout<< arr[i] <<" ";
    }
    return 0;
}
*/