#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
// 프렌드 클래스 두개의 클래스가 있을때 상대방의 private 멤버변수에 접근해야할 때
//시간 클래스 정의
class Time {
	friend class Date; //Date 클래스에서 Time 클래스를 이용할 수 있음
private:
	int hour, min, sec;
public:
	void setCurrentTime() {
		time_t currentTime = time(NULL);
		struct tm* p = localtime(&currentTime);
		hour = p->tm_hour;
		min = p->tm_min;
		sec = p->tm_sec;
	} //현재시간으로 설정
};

//날짜 클래스 정의
class Date {
private:
	int year, month, day;
public:
	Date(int year,int month,int day): year(year),month(month),day(day) {}
	void show(const Time &t) {
		cout << "지정된 날짜: " << year << "년 " << month << "월 " << day << "일 " << "\n";
		cout << "현재 시간: " << t.hour << ":" << t.min << ":" << t.sec << "\n";
	}
};

int main(void) {
	Time time;
	time.setCurrentTime();
	Date date = Date(2019, 12, 22);
	date.show(time);
	system("pause");
}