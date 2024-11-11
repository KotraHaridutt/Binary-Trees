#include<stdio.h>

int main()
{
    int n,i,low,high,mid,target;

    printf("Enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in sorted order : ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Enter target element : ");
    scanf("%d", &target);
    
    low = 0;
    high = n-1;

    
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid] == target){
            printf("Number found at %d",mid);
            break;}
        else{
            if(arr[mid] < target)
                low = mid+1;
            else
                high = mid-1;
        }
    printf("Element not found");
    }
    
}