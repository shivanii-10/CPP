#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int x;
       
        while (j<=n){
             x=n-j+1;
            cout<<x;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
   
    }
}