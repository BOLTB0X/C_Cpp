#include <stdio.h>
int main(){
	int arr[10]={7,5,9,0,3,1,6,2,4,8};
	int temp;
	for (int i=1;i<10;i++){
		for (int j=i;j>=0;j--){
			if (arr[j] < arr[j-1]){
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}else{
				break;
			}
		}
	}
	for (int k=0;k<10;k++){
		printf("%d ",arr[k]);
	}
}
