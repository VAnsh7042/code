//BINARY SEARCH
#include <stdio.h>
int BS(int arr[],int left, int right, int x){
    if(right >= left) {  
        int mid = left + (right - left)/2; 
        if(arr[mid] == x)  
            return mid;  
        if(arr[mid] >x) 
            return BS(arr,left,mid-1,x);   
        return BS(arr,mid+1,right,x);  
    }   
    return -1;  
} 
int main(){
    int arr[]={2,3,4,5,6,10,40,56};
    int n= sizeof (arr)/sizeof (arr[0]);
    int x=10;
    int result=BS(arr,0,n-1,x);
    if(result==-1)
    printf("element is not present in array\n");
    else
    printf("Element is present at index %d",result);
    return 0;           

    

}
  
    
