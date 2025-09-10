#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of sorted array: ";
    cin>>n;
    int a[100];
    cout<<"Enter the elements of sorted array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the number to be inserted: ";
    int x;
    cin>>x;
    int pos=n;
    for(int i=0;i<n;i++){
        if(a[i]>x){
            pos=i;
            break;
        }
    }
    for(int i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=x;
    cout<<"Array after insertion: ";
    for(int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}