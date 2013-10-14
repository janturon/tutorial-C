#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(void ) {
    int bday, bmonth;
    
    
    printf("Zadejte datum narozeni ve formatu: dd.mm.:");
    char myBirthday[20] = "1.1.";
    scanf("%s", myBirthday);
    
    
    sscanf(myBirthday, "%d.%d.", &bday, &bmonth);


    time_t timestamp = time(NULL);
    struct tm* now = localtime(&timestamp);
    float tt = mktime( now);
    
    now->tm_mday = bday;
    now->tm_mon = bmonth-1 ;
    
    
    float days = mktime(now);
    

    int f = (days - tt)/3600/24;
    
    
    int result = f;
    if( f < 0) {
        result = f+365;
    }
    
    printf("Vase narozeniny budou za %d dni.", result);
    getch();
    return 0;
}