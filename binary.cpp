#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int linearSearch(vector<int>& arr,int key){
    int n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]==key) return i;
        }
        return -1;      
}
int binarySearch(vector<int>& arr, int key){
    int n=arr.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return start;
}


int main() {
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,key);
    return 0;
}