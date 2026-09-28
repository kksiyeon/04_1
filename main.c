#include <stdio.h>

int main() {
    int input_second;
    int minute;
    int second;

    printf("input the second: ");
    scanf("%d", &input_second);
    minute=input_second/60;
    second=input_second%60;
    printf("the time is %d minute and %d second\n", minute, second);
    return 0;
    
}


