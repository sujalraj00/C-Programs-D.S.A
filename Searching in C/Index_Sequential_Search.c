#include<stdio.h>
#define size 12
int indexseq(int arr[], int s, int num){
    int valarr[size],  indxarr[size], indx =0, i; 
    int found=0, maybe =0, start, end;
    for(i=0; i<s; i+=3){
        valarr[indx]=arr[i];
        indxarr[indx]=i;
        indx++;
    }
    if(num<valarr[0])
        return found;
    for(i=0; i<indx; i++){
        if(num<= valarr[i]){
            start = indxarr[i-1];
            end = indxarr[i];
            maybe =1;
            break;
        }
    }    
    if(maybe==0){
        start=i;
        end=s;
    }
    for(i=start; i<=end; i++){
        if(arr[i]==num){
            found =1;
            break;
        }
    }
    return found;
}
int main(){
    int arr [size] = {10,20,30,40,50,60,70,80,90,100,110,120};
    int num;
    printf("enter number for search");
    scanf("%d",&num);
    int rv = indexseq(arr,size,num);
    if(rv==1)
       printf("\nelement found");
    else
       printf("\nelement not found");
       return 0;   
}