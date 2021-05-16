#include <stdio.h>
int main(){
	int cnt[5] = {0,0,0,0,0}; 
	int arr[20] = { 1,4,2,5,3, 
					2,3,4,5,2, 
					2,2,3,4,1, 
					4,2,5,5,1 };
 for(int i=0; i<20; i++){ 
 cnt[arr[i]-1]++; 
 }  
 for(int i=0; i<5; i++){ 
 	if(cnt[i] != 0){ 
  		for(int j=0; j<cnt[i]; j++) { 
  			printf("%d ", i+1); 
  	        } 
  		} 
	} 
  return 0;
}
