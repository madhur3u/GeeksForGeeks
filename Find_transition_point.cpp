// https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() 
{
    int a[n] = {0,0,0,0,0,1,1,1}; // {0,0,0,0} //{1,1,1} //{0,1,1,1}
    int n = 8;
    cout << transitionPoint(a, n) << endl;
    return 0;
}

// this fn find the transition point
// we use binary search here
int transitionPoint(int a[], int n) {
    
    int low = 0;
    int high = n - 1;
    
    while (low <= high){
        
        int mid = (low + high) / 2;           // initialize mid
        
        if (a[mid] == 1 && a[mid - 1] == 0){  // it will be a tr point if mid has 1 and its previous element has 0
            return mid;
        }
        else if (a[mid] == 0){  // if mid had zero discard left half so inc low          
            low = mid + 1;
        }
        else{                   // discard right half dec high
            high = mid - 1;
        }
    }
    return -1;                  // if tr point never found return -1
}
