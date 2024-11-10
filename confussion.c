#include<stdio.h>
int main() {
    int readingTime, writingTime, totalTime;

    printf("Enter time spent reading confession posts (in minutes): ");
    scanf("%d", &readingTime);

    printf("Enter time spent writing a confession post (in minutes): ");
    scanf("%d", &writingTime);

    totalTime = readingTime + writingTime;

    if (totalTime > 120) {
        printf("Warning: You have spent %d minutes on confession pages, which is a lot of time. Consider reducing it to avoid wasting precious time.\n", totalTime);
    } else if (totalTime >= 60 && totalTime <= 120) {
        printf("Reminder: You've spent %d minutes on confession pages. Try to control the time you spend on these activities.\n", totalTime);
    } else {
        printf("Good job! You've only spent %d minutes on confession pages. Keep up the good time management!\n", totalTime);
    }

    return 0;
}
