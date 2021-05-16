#include <stdio.h>

int main(){
	int a,b,n,temp;
	
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		temp=1;
		for (int j=1;j<=b;j++){
			temp *=a;
			temp %=10;
		}
		if (temp==0) {
		printf("10\n");
		}
		else{
            printf("%d\n",temp);
		}
	}
	return 0;
}
