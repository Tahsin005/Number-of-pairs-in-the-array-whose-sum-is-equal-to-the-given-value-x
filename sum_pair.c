#include<stdio.h>
/*Find the total number of pairs in the array 
whose sum is equal to the given value x*/
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int count=0;
    int x=12;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j]==x){
                count++;
                printf("(%d,%d)\n", arr[i],arr[j]);
            }
        }
    }
    printf("Number of pairs: %d", count);
    return 0;
}