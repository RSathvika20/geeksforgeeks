//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    int findFloor(vector<int>& a, int x) {
        int n=a.size();
       
       int l=0;
       int h=n-1;
       int ans=INT_MAX;
       while(l<=h){
           int mid=(l+h)/2;
           if(a[mid]<=x){
               ans=mid;
               
               l=mid+1;
           }
           else{
               h=mid-1;
           }
       }
       if(ans==INT_MAX){
           return -1;
       }
       else{
           return ans;
       }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int x = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, x);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends