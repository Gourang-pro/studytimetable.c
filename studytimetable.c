#include <stdio.h>
#include<string.h>
int main()
 {
    int day, hour;
    char subjects[7][10] = {"Maths", "English", "Science", "History", "Geography", "Art", "Music"};
    char timetable[7][6][10];

    // Initialize the timetable
    for (day = 0; day < 7; day++) {
        for (hour = 0; hour < 6; hour++) {
            strcpy(timetable[day][hour], "Free");
        }
    }

    // Update the timetable
    strcpy(timetable[0][0], subjects[0]); // Monday 9:00 Maths
    strcpy(timetable[0][1], subjects[0]); // Monday 10:00 Maths
    strcpy(timetable[0][2], subjects[1]); // Monday 11:00 English
    strcpy(timetable[0][3], subjects[2]); // Monday 12:00 Science
    strcpy(timetable[1][0], subjects[3]); // Tuesday 9:00 History
    strcpy(timetable[1][1], subjects[4]); // Tuesday 10:00 Geography
    strcpy(timetable[1][2], subjects[2]); // Tuesday 11:00 Science
    strcpy(timetable[1][3], subjects[5]); // Tuesday 12:00 Art
    strcpy(timetable[2][0], subjects[6]); // Wednesday 9:00 Music

    // Display the timetable
    printf(" Timetable\n");
    printf("----------------\n");
    printf("Day\t9:00\t10:00\t11:00\t12:00\n");
    for (day = 0; day < 7; day++) {
        printf("%s\t%s\t%s\t%s\t%s\n", subjects[day], timetable[day][0], timetable[day][1], timetable[day][2], timetable[day][3]);
    }

    return 0;
}
