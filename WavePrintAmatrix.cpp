/*
#include<bits/stdc++.h>
using namespace std;
void WavePrintMatrix(vector<vector<int>>v) {
    int m=v.size();
    int n=v[0].size();
    for(int startcol=0;startcol<n;startcol++) {
        //Even No. of columns --> print top to bottom
        if((startcol & 1) == 0) {
           for(int i=0;i<m;i++) {
            cout << v[i][startcol] << " ";
           }
        }
        else {
            for (int i=m-1;i>=0;i--) {
                cout << v[i][startcol] << " ";
            }
        }
    }
}
int main() {
    vector<vector<int>>v {
        {1,2,3,4} ,
        {5,6,7,8},
        {9,10,11,12}
    };
    WavePrintMatrix(v);
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define mod 1000000007

//......There'll be a day,I'll be loved,I'll be admired and they'll respect me......
 
 
void nimit() {
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    
    int minXOR= INT_MAX;
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size()-1;i++) {
        int currentXOR=v[i] ^ v[i+1];
        minXOR=min(currentXOR,minXOR);
    }
    cout<< minXOR <<endl;
    
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
           
        nimit();
    
    }
 
  return 0;
}