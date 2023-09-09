//Searching of a number using Binary search
/*
#include<bits/stdc++.h>
using namespace std;
int binary_search (int arr[],int size,int target) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        // int mid = (start + end)/2 isliye use nhi kiya bcz integer overflow ho rha tha
        int mid = start + (end - start)/2;
        int element = arr[mid];
        if ( element == target ) {
            return mid;
        }
        else if (target < element) {
            end = mid - 1;
        }
        else {
            start = mid +1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    //jis bhi number ko search karna hai
    int target = 2;
    int IndexOfTarget = binary_search(arr,size,target);
    if (IndexOfTarget == -1 ) {
        cout << "Target not found" <<endl;
    }
    else {
        cout<<"Target found at "<< IndexOfTarget << " index" <<endl;
    }
    return 0;
}
*/
// Using pre-defined function of Binary search for searching an element
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v{3,5,6,7,8,9};
    if (binary_search(v.begin(),v.end(),3)) {
        cout<<"found the element" <<endl;
    }
    else {
        cout << "Element not found" << endl;
    }
}
*/
//searching an array using pre-defined fuction of Binary search
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    //this array is not working bcz array should be sorted as binaary search is working only on sorted order
    // int arr[] = {5,8,2,1,0,2,4};
    int arr[] = {2,5,6,7,8,9};
    int size = 6;
    if(binary_search(arr,arr+size,7)) {
        cout << "Element found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }
    return 0;
}
*/
// Find the first occurance of an element 
/*
#include<bits/stdc++.h>
using namespace std;
int firstOccurance (vector<int> arr, int target) {
    int s =0;
    int e = arr.size() - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s <= e) {
        if(arr[mid] == target) {
            //store answer
            ans = mid;
            e = mid - 1; // Move left to find the first occurrence
        }
        else if (target > arr[mid]) {
            s = mid+1;
        }
        else if (target < arr[mid]) {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    vector<int>v{2,3,3,3,4,5,6,7,8};
    int target = 7;
    int ans = firstOccurance(v,target);
    cout << "ans is : " << ans <<endl;
    return 0;
}
*/
// Find the last occurance of an element 
/*
#include<bits/stdc++.h>
using namespace std;
int lastocc(vector<int>arr,int target) {
    int s=0;
    int e=arr.size() - 1;
    // int mid = s + (e-s)/2;  ye loop ke ander use karo taki har iteration me mid updated rhe
    int ans = -1;
    while(s<=e) {
        int mid = s + (e-s)/2;
        if(arr[mid]==target) {
            ans = mid;
            s = mid+1;
        }
        else if (arr[mid] < target) {  // Use '<' instead of '<=' here
            s = mid+1;
        }
        else  { // No need for the 'else if' condition
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    vector<int>v{2,3,3,4,4,4,5,5,5,5,7,8,9};
    int target = 5;
    int ans = lastocc(v,target);
    cout << "ans is " << ans << endl;
    return 0;
}
*/
// First occurance using in-build fuctions
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>v{2,3,3,4,4,4,5,5,5,5,7,8,9};
    int target = 5;
    //lower bound ka use karke first occurance nikalte hai
    auto ans = lower_bound(v.begin() , v.end(),target);
    cout << "ans is " << ans - v.begin() <<endl;
    return 0;
}
*/
//  last occurance using in-build fuctions
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>v{2, 3, 3, 4, 4, 4, 5, 5, 5, 5, 7, 8, 9};
    int target = 5;
    //for last occurance using upper bound
    auto ans = upper_bound(v.begin(),v.end(),target);
    //upper bound me 1 index jyada deta hai usko 1 se subtract kar do
    cout << "ans is : " << (ans - v.begin() ) <<endl;
    return 0;
}
*/
// Total number of occurance 
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>v{2,4,4,4,4,4,4,6,8,10};
    int target = 4;
    //last occurance
    auto ans1 = upper_bound(v.begin(),v.end(),target);
    //first occurance
    auto ans2 = lower_bound(v.begin(),v.end(),target);
    int totalOccurance = ans1 - ans2 ;
    cout <<"total occurance = " << totalOccurance <<endl;
    return 0;
}
*/
// Missing Element in a sorted array (increasing order)
/*
#include<iostream>
#include<vector>
using namespace std;
int MissingElement (const vector<int>&nums) {
    int s = 0;
    int e = nums.size() -1;
    while ( s<=e) {
        int mid = s + (e-s)/2;
        if (nums[mid] != mid+1) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return s+1;
}
int main () {
    vector<int>nums{1,2,3,4,6,7,8,9};
    int findMissingElement = MissingElement(nums);
    cout << "Missing Element is : " << findMissingElement <<endl;
    return 0;
}
*/
