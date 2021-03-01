#include<bits/stdc++.h>
#define n 3
using namespace std;


int binaryMedian(int mat[n][n]){



    int max=INT_MIN;
    int min=INT_MAX;


    for(int i=0;i<n;i++){

        if(mat[i][0]<min){
            min=mat[i][0];
        }
        if(mat[i][n-1]>max){

            max=mat[i][n-1];
        }
    }


    int desired=(n*n+1)/2;

    while(min<max){
        int mid=min +(max-min)/2;
        int place=0;

        for(int i=0;i<n;i++){
            place+=upper_bound(mat[i],mat[i]+n,mid)-mat[i];
        }

        if(place<desired){
            min=mid+1;
        }
        else{
            max=mid;
        }
    }

    return min;
}
int main(){


    int matrix[n][n]={{1,3,5},{2,4,6},{3,6,5}};


    cout<<binaryMedian(matrix)<<"\n";
    return 0;
}