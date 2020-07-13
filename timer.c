#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void timeFromSeconds(int);

int main(int argc, char *argv[]){
	time_t now = time(NULL);
	struct tm *time = localtime(&now);
	time->tm_mon = 7;
	time->tm_mday = 4;
	time->tm_hour = 6;
	time->tm_min = 0;
	time->tm_sec = 0;
	time_t date = mktime(time);
	timeFromSeconds(mktime(time)-now);
}

void timeFromSeconds(int n){
    int day = n / (24 * 3600);
    n = n % (24 * 3600);
    int hour = n / 3600;
    n %= 3600;
    int minutes = n / 60 ;
    n %= 60;
    int seconds = n;
    printf("%dd %dh %dm %ds till home",day, hour, minutes, seconds );
}
