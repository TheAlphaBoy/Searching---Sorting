// Find Pivot element in sorted ans rotated array
/*/
#include<iostream>
#include<vector>
using namespace std;
int findpivot (vector<int>arr) {
    int s =0;
    int e =arr.size() - 1;
    int mid = s+(e-s)/2;
    while (s <= e) {
        if ( s == e) {
            //single element 
            return s;
        }
        if(mid < e && arr[mid] > arr[mid+1] ) {
            return mid;
        }
        if(mid-1 > s && arr[mid-1] > arr[mid] ) {
            return mid-1;
        }
        if (arr[s] > arr[mid] ) {
            e = mid-1;
        }
        else {
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main() {
    vector<int>arr{2,4,6,7,9,10};
    int ans = findpivot(arr);
    if(ans == -1) {
        cout << "error" <<endl;
    }
    else {
        cout << "Ans of Index is : " << ans <<endl;
        cout<< "Value of Index is : " << arr[ans] <<endl;
    }
    return 0;
}
*/