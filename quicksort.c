#include <stdio.h>
#include <stdlib.h>
int partition(int arr[],int p, int r) {
		int x=arr[r];
		int i =p-1;
		int temp;
		
		for(int j=p;j<r;j++) {
			if(arr[j]<=x) {
				i=i+1;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
		temp=arr[i+1];
		arr[i+1]=arr[r];
		arr[r]=temp;
		return i+1;
		
}


void Quicksort(int arr[],int p,int r) {
		if(p<r) {
			int q=partition(arr,p,r);
			Quicksort(arr,p,q-1);
			Quicksort(arr,q+1,r);
		}
		
	}

int main(){

 int n,arr[20],temp;
 int s=0;
    printf("Enter the len of array:");
    scanf("%d",&n);
    int e=n-1;
    printf("Enter the number in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    Quicksort(arr,s,e);
    printf("***sorted array*****\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }



    return 0;
}
