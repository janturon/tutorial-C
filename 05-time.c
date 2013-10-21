#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(void ) {
    int bday, bmonth;
    
    printf("Zadejte datum narozeni ve formatu: d.m.y:");
    scanf("%d.%d.", &bday, &bmonth); // ignore the year

    // get current time
    time_t timestamp = time(NULL); // in unix timestamp
    tm* now = localtime(&timestamp); // in tm structure
    
    // set the date to user's birthday
    now->tm_mday = bday;
    now->tm_mon = bmonth-1; // 0=january, 11=december, see documentation
    
    // unix timestamp of the user's birtday this year
    time_t birthday = mktime(now);
    int result = (birthday - timestamp)/3600/24; // seconds to days
    
    // if the user alreary had the birthday this year, wait till next year
    if(result < 0) result+= 365;
    
    printf("Vase narozeniny budou za %d dni.", result);
    getch();
    return 0;
}