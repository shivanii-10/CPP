#include<iostream>
using namespace std;
//j=column
//i=row
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
    int x=i;
        while(j<=i){
            cout<<x<<" ";
           x=x+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}