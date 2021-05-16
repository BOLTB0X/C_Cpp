#include <stdio.h>
int main(){
	int arr[10]={7,5,9,0,3,1,6,2,4,8};
	int temp;
	for (int i=0;i<10;i++){
		for (int j=i+1;j<10;j++){
			if (arr[i]>arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for (int k=0;k<10;k++){
		printf("%d ",arr[k]);
	}
}
