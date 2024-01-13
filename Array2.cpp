//vector or dynamic array
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    //creating vector
    vector<int>arr;

    //size of vector
    cout<< arr.size() <<endl;
    //capacity of container
    cout<< arr.capacity() <<endl;
    //adiing elements to array
    arr.push_back(6);
    arr.push_back(3);
    //printing array
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] <<" ";
    }
    cout<<endl;
    //for removing a element from array
    arr.pop_back();
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] <<" ";
    }
    //for n size vector
    int n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    //taken another array names as brr
    vector<int>brr(n);
    for(int i=0;i<brr.size();i++) {
        cout << brr[i] <<" ";
    }
    cout<<endl;
    //size of brr array
    cout<< brr.size() <<" "<<endl;
    //capacity
    cout<< brr.capacity() <<" "<<endl;
    //array with element value is -101
    vector<int>crr(n,-101);
    for(int i=0;i<crr.size();i++) {
        cout << crr[i] <<" "<<endl;
    }
    //another way of initialising array
    vector<int>drr{10,58,42,74,32,72};
    for(int i=0;i<drr.size();i++) {
        cout << drr[i] <<" "<<endl;
    }
    //for checking vector is empty or not
    //if 0 -> not empty
    //if 1-> empty
    cout << "vector is empty or not : " << drr.empty() <<endl;
    //for err array checking empty or not
    vector<int>err;
    cout << "Vector is empty or not : " << err.empty() <<endl;
}
*/
//find unique element
/*
#include<bits/stdc++.h>
using namespace std;
int findUnique(vector<int>arr) {
    // ans = 0 se isliye initialise kiya hai bcz XOR ka use karnge and kisi number ka XOR loge zero se to vhi number aa jayega koi fark nhi padeg auss number ko
    int ans = 0;
    for(int i = 0; i<arr.size();i++) {
        ans = ans^arr[i];
    }
    return ans;
}
int main() {
    int n;
    cout << "enter the size of array : " ;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<arr.size(); i++) {
        cin >> arr[i];
    }
    int UniqueElement = findUnique(arr);
    cout << UniqueElement <<endl;
}
*/
// Union of 2 array
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {5,8,3,7,3,1};
    int sizea = 6;
    int brr[] = {2,9,5,4,1};
    int sizeb = 5;
    vector<int>ans;
    for(int i=0;i<sizea;i++) {
        ans.push_back(arr[i]);
    }
    for(int i = 0;i<sizeb;i++) {
        ans.push_back(brr[i]);
    }
    for(int i = 0; i<ans.size();i++) {
        cout << ans[i] <<" ";
    }
}
*/
//Intersection of 2 array
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int>arr{3,4,6,2,9,1,3};
    vector<int>brr{3,3,5,7};

    vector<int>ans;
    //outer loop on arr vector
    for(int i=0;i<arr.size();i++) {
        int element = arr[i];
        //for every element run loop on brr
        for(int j = 0;j<brr.size();j++) {
            if(element == brr[j]) {
                //mark lga do bcz el se jayda same number wala element repeat na ho
                brr[j]=-1;
                ans.push_back(element);
            }
        }
    }
    //print ans
    for(auto value:ans) {
        cout<< value <<" ";
    }
}
*/

// Union of 2 array with duplicates ( H.W.)

// 2 Pair kese bnaye kisi array ka
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr{10,20,40,60,70};
    //printing all the pairs
    for(int i=0;i<arr.size();i++) {
        int element = arr[i];
        for(int j=i+1;j<arr.size();j++) {
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
    }
}
*/

//two pair sum
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr{10,20,40,60,70};
    //agar sum = 80  ka pair nikalna hai tab
    int sum = 80;
    //printing all the pairs
    for(int i=0;i<arr.size();i++) {
        int element = arr[i];
        for(int j=i+1;j<arr.size();j++) {
            if(element + arr[j] == sum) {
                cout << "pair found " << "(" << element << "," << arr[j] << ")" << endl;
            }
        }
    }
}
*/
//Triplets ka pair nikalo and sum=80 ka pair found karo
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr{10,20,30,40};
    //as question ke accourding sum =80 hai
    int sum = 80 ;
    for(int i=0;i<arr.size();i++) {
        int element1 = arr[i];
        for(int j=i+1;j<arr.size();j++) {
            int element2 = arr[j];
            for(int k=j+1;k<arr.size();k++) {
                int element3 = arr[k];
                if(element1 + element2 + element3 == sum) {
                    cout << "triplet pair sum found " << "(" << element1 << "," << element2 << "," << element3 << ")" << endl;
                }
            }
        }
    }
}
*/
//Sort 0's and 1's
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr{0,1,0,1,1,0,1,0,1,1};
    int start =0;
    int end = arr.size()-1;
    int i=0;
    while(start!=end) {
        if(arr[i] == 0) {
            swap (arr[start] , arr[i]);
            start++;
            i++;
        }
        if(arr[i] == 1) {
            swap( arr[end] , arr[i]);
                end--;
        }
        }
        //printing
        for(auto val : arr) {
            cout << val <<" ";
    }
    return 0;
}
*/
