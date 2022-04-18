//Approach 1 uses the sorting approach even though its explicitly written tht sorting algo cannot be usedtherefore 3 pointer approach is better 
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int nums[], int n)
    {
        // coode here 
         int i = 0, j = 0, k = n- 1;
        
        while(i<=k){
			//if curr ele is 0 then we swap curr ele with ele just after last 0
            if(nums[i] == 0){
                swap(nums[i], nums[j]);
                i++, j++;
            }
			//if curr ele is 2 then we swap curr ele with last unsorted ele
            else if(nums[i] == 2){
                swap(nums[i], nums[k]);
                k--;
            }
			// If not 0/2 then its 1 then we continue
            else
                i++;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends

