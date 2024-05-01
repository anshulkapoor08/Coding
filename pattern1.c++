#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<i;
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=n;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout<<" "<<" * ";
        }
        cout<<endl;
    }
}
void pattern3_1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){

        //space
        for(int s=1;s<=n-i;s++){
         cout<<"  ";
        }

        //star
         for(int j=1;j<=i;j++){
            cout<<" "<<" * ";
        }

        //space
        for(int s=1;s<=n-i;s++){
         cout<<"  ";
        }

        //newline
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=1;i<=n;i++){
        
       //space
        for(int s=1;s<=i;s++){
         cout<<"  ";
        }

        //star
         for(int j=1;j<=n-i+1;j++){
            cout<<" "<<" * ";
        }

      
       //space
        for(int s=1;s<=i;s++){
         cout<<"  ";
        } 

        //newline
        cout<<endl;
    }
}
void pattern5_1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int s=0; s<i; s++){
            cout<<" ";
        }
        for(int j=0; j<2*n - (2*i+1); j++)
        {
            cout<<" "<<" * ";
        }
        
        for(int s=0; s<i; s++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=1; i<=2*n-1;i++)
    {
        int st=i;
        if(i>n)
        {
            st=2*n-i;
        }
        for(int j=1; j<=st;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
void pattern7(int n){
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<j;
        }
        for(int s=1;s<=space;s++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<" "<<j;
        }
        cout<<endl;
        space-= 2;
    }
}
void pattern8(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        
        cout<<endl;
    }

}
void pattern9(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
             cout<<j<<" ";
            }
        cout<<endl;
    }

}
void pattern10(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j< 'A'+(n-i);j++ ){
            cout<<" "<<j;
        }
        cout<<endl;
    }
}
void pattern11(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
             cout<<j<<" ";
            }
        cout<<endl;
    }

}
void pattern12(int n){
    char a = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
        }
        a++;
        
        cout<<endl;
    }

}
void pattern13(int n){
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(char j='A';j<'A'+i;j++){
            cout<<" "<<j;
        }
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=0;i<n;i++){

        //space
        for(int s=1;s<=n-i;s++){
            cout<<"  ";
        }

        //character
        for(char j='A';j<'A'+i;j++){
            cout<<" "<<j;
        }

        for(char j='A'+i; j>='A'; j--)
        {
            cout<<" "<<j;
        }

        //space
        for(int s=1;s<=n-i;s++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char j = 'E'-i; j<='E';j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern19(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" * ";
        }
        for(int s=0;s<2*i;s++)
        {
            cout<<"   ";
        }
        for(int j=n-i;j>=1;j--){
            cout<<" * ";
        }
        cout<<endl;
    }
}
void pattern20(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        for(int s=1;s<=2*n-2*i;s++)
        {
            cout<<"   ";
        }
        for(int j=i;j>=1;j--){
            cout<<" * ";
        }
        cout<<endl;

    }
}
void count(int n){
    int q=(n%2);
    cout<<q;
}

int main(){

   double p;
   cin>>p;
   count(p);


}