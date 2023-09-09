//Search in a nearly sorted array
/*
#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>arr,int target) {
    int s=0;
    int e=arr.size()-1;
    int mid = s + (e-s)/2;
    while(s <= e) {
        mid = s+(e-s)/2;
        if(arr[mid] == target) {
            return mid;
        }
        // else if(arr[mid-1] == target)
        // in optimized way 
        else if( mid-1 >= s && arr[mid-1] == target )
         {
            return mid-1;
        }
        // else if(arr[mid+1] == target) 
        // in optimized way 
        else if( mid-1 >= e && arr[mid-1] == target )
        {
            return mid+1;
        }
        else if(arr[mid] >= target) {
            e = mid-2;
        }
        else if (arr[mid] <= target) {
            s=mid+2;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main () {
    vector<int>arr{10,3,40,20,50,80,70};
    int target = 20;
    int ans = BinarySearch(arr,target);
    cout<< "index of " << target << " is " << ans <<endl;
    return 0;
}
*/
//Divide 2 no.'s using Binary search (for only +ve no.'s )
/*
#include<iostream>
using namespace std;
int solve(int dividend,int divisor) {
    int s = 0;
    int e = dividend;
    //kisi se bhi initialise kardo ans ko
    int ans = 0;
    int mid = s+ (e-s)/2;
    while (s <= e) {
        mid = s+(e-s)/2;
        if(mid*divisor == dividend) {
            return mid;
        }
        if(mid*divisor >= dividend) {
            e=mid-1;
        }
        else {
            ans =mid;
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    int dividend = 28;
    int divisor = 4;
    int ans = solve(dividend,divisor);
    cout << "Ans is " << ans <<endl;
    return 0;
}
*/
//Divide 2 no.'s using Binary search (for all +ve and -ve numbers )
/*
#include<iostream>
using namespace std;
int solve(int dividend,int divisor) {
    int s = 0;
    //absolute value lelo end index ka bcz starting index to 0 se hi start ho rha hai
    int e = abs(dividend);
    //kisi se bhi initialise kardo ans ko
    int ans = 0;
    int mid = s+ (e-s)/2;
    while (s <= e) {
        mid = s+(e-s)/2;
        //abs value lo
        if(abs(mid*divisor) == abs(dividend)) {
            //stor answer in ans rather than returning the value
            ans = mid;
            //ab agar answer aa gye hai to aage loop chalana bekar hai isliye break lga do
            break;
        }
        if(abs(mid*divisor) >= abs(dividend)) {
            e=mid-1;
        }
        else {
            ans =mid;
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    if((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0 ) ) 
        return ans;

    else {
        return -ans;
    }
}
int main() {
    int dividend = -28;
    int divisor = 4;
    int ans = solve(dividend,divisor);
    cout << "Ans is " << ans <<endl;
    return 0;
}
*/
//Divide 2 no.'s using Binary search (for all +ve and -ve numbers ) for decimal numbers too
// H.W. ha kar lena....
/*
#include<iostream>
using namespace std;
int solve(int dividend,int divisor) {
    int s = 0;
    //absolute value lelo end index ka bcz starting index to 0 se hi start ho rha hai
    int e = abs(dividend);
    //kisi se bhi initialise kardo ans ko
    int ans = 0;
    int mid = s+ (e-s)/2;
    while (s <= e) {
        mid = s+(e-s)/2;
        //abs value lo
        if(abs(mid*divisor) == abs(dividend)) {
            //stor answer in ans rather than returning the value
            ans = mid;
            //ab agar answer aa gye hai to aage loop chalana bekar hai isliye break lga do
            break;
        }
        if(abs(mid*divisor) >= abs(dividend)) {
            e=mid-1;
        }
        else {
            ans =mid;
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    if((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0 ) ) 
        return ans;

    else {
        return -ans;
    }
}
int main() {
    int dividend = -28;
    int divisor = 4;
    int ans = solve(dividend,divisor);
    cout << "Ans is " << ans <<endl;
    return 0;
}
*/
//