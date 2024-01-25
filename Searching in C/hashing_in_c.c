#include<stdio.h>
int main(){
    int i, arr[10] = {1,2,3,1,2,1,8,9,5,6};
    int hash[100] = {0}; // now hash array ki sari element as a  zero stored hai
    for(i =0; i<10; i++){
        hash[arr[i]]++;
    }
    for(i=0; i<10; i++){
        if(hash[i]!=0){
            printf("number = %d , frequency = %d\n", i, hash[i] );
        }
    }
    return 0;
}