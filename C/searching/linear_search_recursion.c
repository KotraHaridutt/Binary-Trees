#include<stdio.h>

int linear_rec(int arr[],int index,int target,int n){
    if(index == n)
        return -1;
    
    if(arr[index] == target)
        return index;
    else
        return linear_rec(arr,index+1,target,n);
}
int main()
{
    int n,i,target,index=0,result;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements into array : ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Enter target element : ");
    scanf("%d", &target);

    result = linear_rec(arr,index,target,n);
    if(result == -1)
        printf("Number not found");
    else
        printf("Number is found at loc %d", result);
}