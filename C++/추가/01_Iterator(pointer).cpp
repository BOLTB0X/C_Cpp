#include <iostream> 
using namespace std; 

void main() { 
	int arr[5] = {1,};
	int *it; 
	for (it=&arr[0];it!=&arr[5];it++) { 
		printf("%d\n",*it); 
	}
	return ;
}
