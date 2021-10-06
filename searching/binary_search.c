#include <stdio.h>

int binary_search(int array[],int left,int right,int key){
    while(left<=right){
        int mid = left+(right-left)/2;
        if(array[mid]==key){
            return mid;
        }
        if(array[mid]<key){
            left = mid+1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
int arr[] = {2,3,4,5,7};
int n = sizeof(arr)/sizeof(arr[0]);
int key = 10;
int result = binary_search(arr,0,n-1,key);
printf("%d",result);
return 0;
}