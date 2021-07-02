#include <iostream> 
#include <list> 
using namespace std; 
void main() { 
	int ari[5] = {1,2,3,4,5}; 
	list<int> li(&ari[0], &ari[5]); 
	list<int>::iterator it; 
	for (it = li.begin(); it != li.end(); it++) { 
		printf("%d\n", *it); 
	}
}
