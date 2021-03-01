// Find the element that appears once in sorted array 
// time complexity 0(n)

#include<bits/stdc++.h>
using namespace std;


 
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        
        
        if(n==1){
            return arr[0];
        }
        int count=1;
        
        for(int i=0;i<n;i++){
            
            
            if(arr[i]==arr[i+1]){
                
                count++;
            }
            else{
                
                if(count>1){
                    count=1;
                }  
                
                else{
                    
                    return arr[i];
                    
                }
            }
        }
    }
};



int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}  