#include <stdio.h>
#include <math.h> 

struct point{
	int x;
	int y;
};

struct rect{
	struct point p1;
	struct point p2;
};

int main(){
	struct rect r;
	int w,h,area,peri;
	
	printf("왼쪽 상단의 좌표 입력:");
	scanf("%d %d",&r.p1.x,&r.p1.y);
	printf("오른쪽하단의 좌표 입력: ");
	scanf("%d %d",&r.p2.x,&r.p2.y);
	
	w=abs(r.p2.x - r.p1.x);
	h=abs(r.p2.y-r.p1.y);
	
	area=w*h;
	peri=2*w+2*h;
	
	printf("사각형의 넓이:%d, 둘레의 길이: %d",area,peri);
	
	return 0;
	
}
