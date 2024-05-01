#include<bits/stdc++.h>
using namespace std;

int main(){
 string s= " Kapoor";

 for(auto c:s){
 // cout<<c<<endl;
 }

vector<int> arr1;
arr1.push_back(2);
arr1.push_back(3);

vector<int>arr2;
arr2.push_back(5);
arr2.push_back(7);

vector<int>arr3;
arr3.push_back(11);
arr3.push_back(13);
arr3.push_back(17);

vector<vector<int>> vec;
vec.push_back(arr1);
vec.push_back(arr2);
vec.push_back(arr3);

for(auto it: vec)
{
  for(auto jt: it){
    cout<<jt<<" ";
  } 
  cout<<endl;
}




  return 0;
}