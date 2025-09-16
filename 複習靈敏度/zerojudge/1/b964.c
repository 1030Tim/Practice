#include<stdio.h>

void output(int n,int arr[]){ // array output
    int i;
    for (i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("%d\n",arr[n-1]);
}

void sort(int n,int arr[]){ // sort for array O(n)^2
    int i,j;
    for (i = 0; i<n; i++){
        for (j = 0; j<n-i-1; i++){
            if (arr[j]>arr[j+1]){
                int d = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = d;
            }
        }
    }
}


int main(){
    int n,i,j,arr[20];
    int max_flag = -1,min_flag = -1;
    scanf("%d",&n);
    if (n!=0){
        for (i = 0; i<n; i++){ // intput 
            int d;
            scanf("%d",&d);
            arr[i] = d;
        }

        // sort of arr
        sort(n,arr);

        for (i = 0; i<n; i++){
            if (arr[i]<60){
                max_flag = arr[i];
            }
            else if (arr[i]>=60 && min_flag == -1){
                min_flag = arr[i];
            }
        }
        output(n,arr);

        if (max_flag!=-1) printf("%d\n",max_flag);
        else printf("best case\n");

        if (min_flag!=-1) printf("%d\n",min_flag);
        else printf("worst case\n");
    }
    return 0;

}