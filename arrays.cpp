#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
   int  max_sum=INT_MIN;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
                }
            max_sum=max(max_sum,sum);
        }
        cout<<endl;
    }
    cout<<max_sum;
}