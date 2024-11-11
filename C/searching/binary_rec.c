#include<stdio.h>

int binary_rec(int arr[],int low,int high,int target){
    if(low >= high)
        return -1;
    int mid;
    mid = (low+high)/2;

    if(arr[mid] == target)
        return mid;
    else
        if(arr[mid] < target)
            return binary_rec(arr,mid+1,high,target);
        else 
            return binary_rec(arr,low,mid-1,target);

}
int main()
{
    int n,i,target,low,high,mid;
    printf("Enter size of an array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements into array : ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    
    printf("Enter target element : ");
    scanf("%d",&target);

    low = 0;high = n-1;

    int result = binary_rec(arr,low,high,target);
    if(result == -1)
        printf("Number not found");
    else
        printf("Number found at loc %d",result);


    
}