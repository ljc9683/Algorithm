#include <stdio.h>
int main()
{
    int i,n,tmp,j;
    int arr[8] = {0,5,3,8,4,2,7,1};
    for(i=1;i<=7/2;i++) {
        for (j = 1; j <= 7; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
        if (arr[i] < arr[i * 2] && arr[i] < arr[i * 2 + 1]) {

        }
        else {
            if (arr[i * 2] < arr[i * 2 + 1]) {
                tmp = arr[i];
                arr[i] = arr[i * 2];
                arr[i * 2] = tmp;
            }
            else {
                tmp = arr[i];
                arr[i] = arr[i * 2 + 1];
                arr[i * 2 + 1] = tmp;
            }
        }
    }
    for (j = 1; j <= 7; j++) {
        printf("%d ", arr[j]);
    }
}
