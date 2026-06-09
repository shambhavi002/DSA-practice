#include<iostream>
using namespace std;
// smallest element swap input=n rounds=n-1;
// time complexity-O(n^2)
void electionSort(int arr[], int n){
for(int i=0; i<n-1; i++){
int minIndex=i;
for(int j=i+1;j<n; j++){
if(arr[j]<arr[minIndex]){
minIndex=j;
}
}
if(minIndex!=i){
swap(arr[i],arr[minIndex]);
}
}
}
int main(){
int brr[5]={99,89,78,76,55};
cout<<"Sorted " <<endl;
for(int i=0; i<5; i++){
cout<<brr[i]<<endl;
}
}
