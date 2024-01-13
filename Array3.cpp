// 2D array declaration and initialisation
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    //declare 2D array
    int arr[3][3];
    //initialisation of 2D array
    int brr[3][3] ={
        {1,2,3},{4,5,6},{7,8,9}
    };
    cout << brr[2][1]<< endl;

    return 0;
}
*/
//printing rows and columns wise 2D array
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr [3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
    //printing row wise
    cout<<"Printing Row wise" <<endl;
    for(int i=0; i<3 ; i++) {
        for(int j=0;j<3;j++) {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<"Printing column wise"<<endl;
    for(int i= 0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << arr[j][i] <<" ";
        }
        cout<<endl;
    }
}
*/
//taking row's and column's wise input and output (2D array)
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[4][3];
    int row = 4;
    int col = 3;

    //taking row wise input from user
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin >> arr[i][j];
        }
    }
    //output row wise
    cout<<"row wise output"<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}
*/
//row wise printing sum
/*
#include<bits/stdc++.h>
using namespace std;
void PrintRowWiseSum(int arr[][3],int rows,int cols) {
    cout << "Printing Row Wise Sum" <<endl;
    for(int i=0;i<rows;i++) {
        int sum = 0;
        for(int j=0; j<cols;j++) {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
int main() {
    //first take input from user
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    //row wise input
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin >> arr[i][j] ;
        }
    }
    //row wise output
        for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    PrintRowWiseSum(arr,rows,cols);
}
*/
//column wise printing sum
/*
#include<bits/stdc++.h>
using namespace std;
void PrintColumnWiseSum(int arr[][3],int rows,int cols) {
    cout << "Printing column Wise Sum" <<endl;
    for(int i=0;i<rows;i++) {
        int sum = 0;
        for(int j=0; j<cols;j++) {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}
int main() {
    //first take input from user
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    //column wise input
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin >> arr[j][i] ;
        }
    }
    //column wise output
        for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout << arr[j][i] << " ";
        }
        cout<<endl;
    }
    PrintColumnWiseSum(arr,rows,cols);
}
*/
//find the given number (or key ) is present in the 2D array or not
/*
#include<bits/stdc++.h>
using namespace std;
bool findKey(int arr[][3],int rows,int cols,int key) {
    for(int i=0; i<3;i++) {
        for(int j=0;j<3;j++) {
           if( arr[i][j] == key)
           return true;
           //if 1-> true
           //if 0 -> false
        }
    }
    //value or key is not present
    return false;
}
int main() {
    cout << "enter the array input : " <<endl;
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int key;
    for(int i=0; i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin >> arr[i][j];
        }
    }
    cout<<"the given array is : " <<endl;
    for(int i=0; i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<< arr[i][j] <<" ";
        }
        cout <<endl;
    }
    // findKey(arr,rows,cols,key);
    cout << findKey(arr,3,3,4);
}
*/
//Maximum number or value of 2D array
/*
#include<bits/stdc++.h>
using namespace std;
int getMax(int arr[][3],int rows,int cols) {
    int maxi = INT_MIN;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(arr[i][j] > maxi) {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int main() {
    cout << "enter the array input : " <<endl;
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int key;
    for(int i=0; i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin >> arr[i][j];
        }
    }
    cout<<"the given array is : " <<endl;
    for(int i=0; i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<< arr[i][j] <<" ";
        }
        cout <<endl;
    }
    // getMax(arr,rows,cols);
    cout << "Maximum value of given 2D array is : " << getMax(arr,rows,cols);
}
*/
//Minimum value in 2D array
/*
#include<bits/stdc++.h>
using namespace std;
int getMin(int arr[][3],int rows,int cols) {
    int mini = INT_MAX;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(arr[i][j] < mini) {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}
int main() {
    cout << "enter the array input : " <<endl;
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int key;
    for(int i=0; i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin >> arr[i][j];
        }
    }
    cout<<"the given array is : " <<endl;
    for(int i=0; i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<< arr[i][j] <<" ";
        }
        cout <<endl;
    }
    // getMin(arr,rows,cols);
    cout << "Minimum value of given 2D array is : " << getMin(arr,rows,cols);
}
*/
//Transpose of 2D array
/*
#include<bits/stdc++.h>
using namespace std;
void transpose(int arr[][3],int rows,int cols,int transposeArr[][3]) {
    for(int i =0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            transposeArr[j][i] = arr[i][j];
        }
    }
}
    void printArray (int arr[][3],int rows,int cols) {
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {
                cout << arr[i][j] <<" ";
            }
            cout<<endl;
        }
    }
int main() {
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    cout << "Please enter the input array: " <<endl;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin >> arr[i][j];
        }
    }
    cout<<"The given array is : "<<endl;
     for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    cout << "Printing transpose array : " <<endl;
    int transposeArr[3][3];
    transpose(arr,rows,cols,transposeArr);
    cout << " again printing array : " <<endl;
    printArray(transposeArr,rows,cols);
}
*/
//................... using vector in 2D array .....................
//declaring vector in 2D array
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    //declaring vector
    vector<vector<int> >arr;
    vector<int>a{1,2,3};
    vector<int>b{4,5,6};
    vector<int>c{7,8,9};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    for(int i=0;i<arr.size();i++) {
        //if column size is different
        //for(int j=0;j<arr[i].size();j++) here i shows that 'i'th row me kitne column hai
        //if column size is same
        for(int j=0;j<arr[0].size();j++) {
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }
}
*/
//another way of declaring vector

#include<bits/stdc++.h>
using namespace std;
int main() {
    //declaring 3*4 matrix
    int row = 3;
    int col =4;
    //initialising all elements with zero
    vector<vector<int> >arr(row,vector<int>(col,0));
    //row col na declare karke aise bhi kar sakte hai
    //vector<vector<int> >arr(3,vector<int>(4,0));
    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr[0].size();j++) {
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }
}