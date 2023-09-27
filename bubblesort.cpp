#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=1;i<n;i++){
        bool swapped=false;    // for optimisation
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;   //for optimisation
            }
        }
        if(swapped==false)  //for optimisation
        break;              //
    }
}
int main(){
    int arr[8]={1,5,3,0,45,34,65,32};
    bubblesort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}