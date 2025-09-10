#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]==1){
            continue;
        }
        else{
            cout<<"The missing number is:"<<arr[i]+1;
            break;
        }
    }    
}