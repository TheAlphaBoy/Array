// initialisation of an array
/*nclude<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={2,3,4,5,6};
    int brr[5]={2,3,4,5,6};
    int crr[10]={2,3,4,5,6};
    //error
    // int drr[4]={2,3,4,5,6};
    cout<< "Array is initialised sucessfully" <<endl;
    return 0;
}
*/
// value of array at diff index
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,6,7,8};
    // print value at index 3
    // cout<< arr[3]<<endl;
    // printing all values
    for(int i=0;i<8;i++) {
        cout<< arr[i] <<" ";
    }
    return 0;
}
*/
//input and output kese le array me
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    //taking input of an array
    int arr[10];
    cout<<"Enter the input values in array"<<endl;
    for(int i=0;i<10;i++) {
        cin>> arr[i];
    }
    //printing values of an array
    cout<<"Printing the values of an array "<<endl;
    for( int i=0;i<10;i++) {
        cout<< arr[i]<<" ";
    }
    return 0;
}
*/
//double the input array value
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    // taking input of array
    int arr[500];
    int n;
    cout<<"How many input do you want to add to an array"<<endl;
    cin>>n;
    cout<<"Enter the input numbers of an array"<<endl;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //output of an array
    for (int i=0; i<n;i++) {
        cout<< 2*arr[i] <<" ";
    }
    return 0;
}
*/
//given an array of size 5 with arr[5]={2,7,5,0,2} print all value as 1 in all 5 storage of given array
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[5]={2,7,5,0,2};
    for(int i=0;i<5;i++) {
        arr[i]=1;
    }
    for(int i=0;i<5;i++) {
        cout<< arr[i] <<" ";
    }
    return 0;
}
*/
//if a array of size 10 and first index value is 1 what will be stored in other indexes
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[10]={1};
    for(int i=0;i<10;i++) {
        cout<< arr[i] <<" ";
    }
    return 0;
}
*/
//passing assay to a function to check its pass value by refernce or pass by value
/*
#include<bits/stdc++.h>
using namespace std;
void printARRAY (int arr[] , int size) {
    for (int i=0; i<size;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}
void inc(int arr[],int size){
    arr[0]=arr[0]+10;
    printARRAY(arr,size);
}
int main() {
    int arr[] = {5,6};
    int size = 2;
    inc(arr, size);
    printARRAY(arr,size);
}
*/
//as dono function ki value same ari hai isliye ye pass by referance hai
//LINEAR ARRAY...........
//find a number in Linear Array without passing by a function
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,6,7,8};
    int size = 8;
    //if we want to find number = 8 in the array
    int key = 5;
    bool flag =0;
    //if flag =1  -> Number is found
    //if flag = 0 -> Number is not found

    //applying linear array
    for(int i=0;i<size;i++) {
        if (arr[i]==key) {
            //found
            flag = 1;
            //break lga do if ek bhi baar mil jaye key
            break;
        }
    }
    if(flag) 
        cout<<"Number is found"<<endl;
        else
        cout<<"Number is not found"<<endl;
}
*/
//find a number in Linear Array passing by a function
/*
#include<bits/stdc++.h>
using namespace std;
bool find(int arr[],int size,int key) {
    for(int i=0;i<size;i++) {
        if (arr[i]==key)
    return true;
    }
    return false;
}
int main() {
    int arr[5]={2,4,6,8,5};
    int size = 5;
    cout<<"Enter the key which you want to find"<<endl;
    int key;
    cin>>key;
    if(find(arr,size,key)) {
        cout<<"Key is found"<<endl; 
    }
    else {
        cout<<"Key is not found"<<endl;
    }
}
*/
//finding numbers of 0's and 1's in linear array
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,0,1,1,1,0,0,0,0,1,0,0,1,1,1,0};
    int size = 16;
    int NumZero =0;
    int NumOne =0;
    for(int i=0;i<size;i++) {
        if(arr[i]==0) {
            NumZero++;
        }
        if(arr[i]==1) {
            NumOne++;
        }
    }
    cout << "Number of zero's : " << NumZero <<endl;
    cout <<"Number of one : " << NumOne <<endl;
}
*/
//Find maximum number in an array
/*
 #include<iostream>
// //using limit header file bcz used INT_MIN/INT_MAX
 #include<limits.h>
using namespace std;

// we can also use #include<bits/stdc++.h> 

int main() {
    int arr[] = {2,5,8,3,1,0,55,73,9,1,26,33,77,45,62};
    int size = 15;
    //for maximum we initiallise with INT_MIN for best practice
    int maxi = INT_MIN;
    for(int i=0;i<size;i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    cout << "Maximum number in given linear array is : " << maxi <<endl;
}
*/
//Find minimum number in linear array
/*
#include<bits/stdc++.h> 
using namespace std;
int main() {
    int arr[] = {2,5,8,3,1,0,55,73,9,1,26,33,77,45,62};
    int size = 15;
    //for minimum we initiallise with INT_MAX for best practice
    int mini = INT_MAX;
    for(int i=0;i<size;i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }
    cout << "Minimum number in given linear array is : " << mini <<endl;
}
*/
//exterme numbers in linear array (for even array)
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,5,4,8,3,56,3,7,2,5};
    int size = 10;
    int start = 0;
    int end = size-1;
    //condition kuch bhi daal do aise conditions me isliye true daal diya
    while (true) {
        if(start > end )
        break;
        cout<< arr[start] <<" ";
        cout << arr[end] <<" ";
        start++;
        end--;
    }    
}
*/
//exterme numbers in linear array (for odd array)
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,5,4,8,3,56,3,7,2};
    int size = 9;
    int start = 0;
    int end = size-1;
    //condition kuch bhi daal do aise conditions me isliye true daal diya
    while (true) {
        if(start > end )
        break;
        if( start == end ) {
        cout << arr[start] <<" ";
        }
        else {
        cout<< arr[start] <<" ";
        cout << arr[end] <<" ";
        }
        start++;
        end--;
    }
}
*/
//Reverse an Array(odd and even dono case me same method se ho jayega)
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[8] = {12,41,63,94,68,44,6,1};
    int size = 8;
    int start = 0;
    int end = size-1;
    while(start <= end ) {
        swap( arr[start], arr[end] );
        start++;
        end--;
    }
    //printing array
    for(int i=0;i<size;i++) {
        cout<< arr[i] <<" ";
    }
}
*/
