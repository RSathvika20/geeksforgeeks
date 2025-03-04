//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &a) {
        int n=a.size();
        
        if(n<2){
            return -1;
        }
        int maxi=a[0];
        int secmax=INT_MIN;
        for(int i=0;i<n;i++){

            if(a[i]>maxi){
                secmax=maxi;
                maxi=a[i];
            }
            else if(a[i]>secmax && a[i]<maxi){
                secmax=a[i];
            }
            
            
        }
        if (secmax== INT_MIN) {
            return -1;
        }
        return secmax;
        // Code Here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends