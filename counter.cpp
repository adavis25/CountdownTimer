#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
void timeFromSeconds(int);

int main(int argc, char *argv[]){
	time_t now = time(0);
	cout << now << endl;
	tm *toTime = localtime(&now);
	toTime->tm_mon = 7;
	toTime->tm_mday = 4;
	toTime->tm_hour = 6;
	time_t date = mktime(toTime);
	double secondsTill = date-now;
	cout << secondsTill << endl;
	timeFromSeconds(secondsTill);
}

void timeFromSeconds(int n){
	int day = n / (24 * 3600); 
  
    n = n % (24 * 3600); 
    int hour = n / 3600; 
  
    n %= 3600; 
    int minutes = n / 60 ; 
  
    n %= 60; 
    int seconds = n; 
      
    cout << day << " " << "days " << hour  
         << " " << "hours " << minutes << " " 
         << "minutes " << seconds << " " 
         << "seconds "  << endl; 
}
