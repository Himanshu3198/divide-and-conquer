// find pivot in rotated sorted array
// time complexity0(logn)


#include<bits/stdc++.h>
using namespace std;





int find_Pivot(int *arr,int low,int high){
    while(low<high){


        int mid=(low+high)/2;

        if(arr[mid]<arr[high]){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }

    return arr[high];
}
int main(){




    // int arr[]={50,10,20,30,40};

    int arr[]={3,4,5,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);


   cout<< find_Pivot(arr,0,n-1)<<"\n";
    return 0;
}