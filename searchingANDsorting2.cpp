//Square root of a number using Binary Search
/*
#include<iostream>
using namespace std;
int findsq(int n) {
    //This code is a special case handling for finding the square root of n. If n is 0 or 1, there's no need to perform the binary search because the square root of 0 is 0, and the square root of 1 is 1
     if (n == 0 || n == 1) {
        return n;
    }
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s <= e) {
        int mid = s + (e - s)/2;
        if(mid*mid == n) {
            return mid;
        }
        else if(mid*mid > n) {
            e = mid - 1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    int n;
    cout << "enter the number : "<< endl;
    cin>>n;
    int ans = findsq(n);
    cout << "Square root is : " << ans <<endl;
    return 0;
}
*/
// Square root of a number in floating form using B.S.
/*
#include<iostream>
using namespace std;
int findsq(int n) {
    //This code is a special case handling for finding the square root of n. If n is 0 or 1, there's no need to perform the binary search because the square root of 0 is 0, and the square root of 1 is 1
     if (n == 0 || n == 1) {
        return n;
    }
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s <= e) {
        int mid = s + (e - s)/2;
        if(mid*mid == n) {
            return mid;
        }
        else if(mid*mid > n) {
            e = mid - 1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    int n;
    cout << "enter the number : "<< endl;
    cin>>n;
    int ans = findsq(n);
    cout << "Square root is : " << ans <<endl;
    int precision;
    cout << "Enter the number of floating digit in precision " << endl;
    cin >> precision;
    double finalAns = ans;
    double step = 0.1;
    for(int i = 0;i<precision;i++) {
        for(double j = finalAns;j*j<=n;j+=step) {
            finalAns = j;
        }
        step = step/10;
    }
    cout << "Final Ans is : " << finalAns <<endl;
    return 0;
}
*/
// Binary Search of 2D Matrix
/*
#include<iostream>
using namespace std;
bool find2DMatrix(int arr[][4],int rows,int cols,int target) {
    int s = 0;
    int e = rows*cols - 1;
    int mid = s+(e-s)/2;
    int RowIndex = mid/cols;
    int ColIndex = mid%cols;
    while(s <= e) {
        int mid = s+(e-s)/2;
        int RowIndex = mid/cols;
        int ColIndex = mid%cols;
        int element = arr[RowIndex][ColIndex];
        if ( element == target) {
            return true;
        }
        else if(element < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}
int main() {
    int arr[5][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20} };
    int target = 15;
    int rows = 5;
    int cols = 4;
    bool ans = find2DMatrix(arr,rows,cols,target);
    if(ans) {
        cout << "found" <<endl;
    }
    else {
        cout << "not found" << endl;
    }
    return 0;
}
*/
