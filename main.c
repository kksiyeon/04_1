#include <stdio.h>

int main() {
    int input_second;
    int hour, minute, second;

    printf("input the second: ");
    scanf("%d", &input_second);

    hour=input_second/3600;
    minute=(input_second%3600)/60;
    second=input_second%60;

    printf("The time for %d second is %d : %d: %d\n", input_second, hour, minute, second);
    return 0;

}





