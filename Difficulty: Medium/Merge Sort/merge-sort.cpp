//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   void MS(vector<int>& a, int l,int mid, int h){
        vector<int>temp;
        
        int p1=l;
        int p2=mid+1;
        
        while(p1<=mid && p2<=h){
            if(a[p1]<=a[p2]){
                temp.push_back(a[p1]);
                p1++;
            }
            else{
                 temp.push_back(a[p2]);
                 p2++;
                
            }
        }
        while(p1<=mid){
             temp.push_back(a[p1]);
                p1++;
            
        }
        while(p2<=h){
             temp.push_back(a[p2]);
                 p2++;
            
        }
        for (int i=l;i<=h;i++){
            a[i]=temp[i-l];
        }
        
    }
    void mergeSort(vector<int>& a, int l, int h) {
        // code here
        
        if(l>=h){
           
            return;
        }
        int mid=l+(h-l)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        MS(a,l,mid,h);
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
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends