#include<bits/stdc++.h>
using namespace std;


 double binary_search_Nth_Root(double x,int n){


     double low=0.0;
     double high=x;
     double el=0.001;


     while(high-low>=el){

         double test=low + (high-low)/2;

         if(test==low || test==high){
             break;
         }


         if(pow(test,n)<x){

             low=test;
         }
         else{
             high=test;
         }
     }

     return (low+(high-low)/2);
 }


int main(){



    cout<<binary_search_Nth_Root(5,3);
    return 0;
}