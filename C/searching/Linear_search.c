#include<stdio.h>

int main()
{
    int n,target,i,element_found;
    printf("Enter size of an array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements into the array : ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    
    printf("Enter target element : ");
    scanf("%d", &target);

    for(i=0;i<n;i++){
        if(arr[i] == target){
            element_found = 1;
            break;
        }
    }
    if(element_found == 1)
        printf("Number is found at %d location\n",i);
    else
        printf("Element is not found");
}