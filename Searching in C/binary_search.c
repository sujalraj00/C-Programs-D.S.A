#include<stdio.h>
int binarySearch(int arr[], int size, int element){
    int mid, low,high;
    low =0;
    high = size -1;
    while(low<=high){
    mid =(low+high)/2;
    if(arr[mid] == element){
        return mid;
    }
    if(arr[mid]<element){
        low = mid+1;
    } else{
        high = mid-1;
    }
}
return -1;
}
int main(){
    int arr[] = {1,34,56,59,64,73,82,90,110};
    int element =   82;
    int size = sizeof(arr)/sizeof(arr[0]) ;
    int searchIndex = binarySearch(arr,size,element);
    printf("element found at index :%d\n", searchIndex);
    return 0;

}