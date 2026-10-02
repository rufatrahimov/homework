#include <stdio.h>

int main() {
    int birthMonth, birthDay, birthYear;
    int currentMonth, currentDay, currentYear;
    int age;
    int maxHeartRate;
    double lowerTarget;
    double upperTarget;

    printf("Enter your birthday (month day year): ");
    scanf("%d %d %d", &birthMonth, &birthDay, &birthYear);

    printf("Enter the current date (month day year): ");
    scanf("%d %d %d", &currentMonth, &currentDay, &currentYear);

    age = currentYear - birthYear;

    /* If the birthday has not occurred yet this year */
    if (currentMonth < birthMonth ||
        (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    maxHeartRate = 220 - age;

    lowerTarget = maxHeartRate * 0.50;
    upperTarget = maxHeartRate * 0.85;

    printf("\nAge: %d years\n", age);
    printf("Maximum heart rate: %d beats per minute\n", maxHeartRate);
    printf("Target heart rate range: %.0f - %.0f beats per minute\n",
           lowerTarget, upperTarget);

    return 0;
}