#include <stdio.h>

#define SIZE 8

int main(){
    int arr[SIZE] = { 0, 1, 0, 1, 0, 0, 1, 0};
    int count0 = 0, count1 = 0;
    int i;

    for(i=0; i<SIZE; i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1) {
            count1++;
        }
    }

    printf("%d\n", count0);
    printf("%d\n", count1);

    return 0;
}