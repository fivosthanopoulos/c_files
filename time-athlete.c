#include <stdio.h>


int main()
{
    int seconds1;
    int seconds2;
    int seconds3;
    int mintime;
    
    char athlete1;
    char athlete2;
    char athlete3;
    char bestathlete;
    
    
    printf("Put athletes' letters: ");
    scanf("%c %c %c",&athlete1, &athlete2, &athlete3);
    
    printf("Now put their time: ");
    scanf("%d %d %d", &seconds1, &seconds2, &seconds3);
    
    if (seconds1 < seconds2 && seconds1 < seconds3) {
        mintime =  seconds1;
        bestathlete = athlete1;
    }
    
    else if (seconds2 < seconds1 && seconds2 < seconds3) {
        mintime = seconds2;
        bestathlete = athlete2; 
    }
    
    else {
        mintime = seconds3;
        bestathlete = athlete3;
    }
    
    printf("Best athlete is %c with time %d seconds", bestathlete, mintime);
    
    

    return 0;
}
