#include <stdio.h>

int is_valid_date(int day, int month, int year);

int main() {
    int day, month, year;
    printf("Enter date in the format (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    if (is_valid_date(day, month, year)) {
        printf("The date is valid.\n");
    } else {
        printf("The date is not valid.\n");
    }
    return 0;
}

int is_valid_date(int day, int month, int year) {
    if (year < 0 || month < 1 || month > 12 || day < 1) {
        return 0; // invalid year, month, or day
    }
    if (month == 2) {
        // February has 28 days unless it's a leap year
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            return (day <= 29);
        } else {
            return (day <= 28);
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // April, June, September, and November have 30 days
        return (day <= 30);
    } else {
        // All other months have 31 days
        return (day <= 31);
    }
}
