#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float percentage;
};

struct Student s[100];
int n = 0;

// Add Student
void addStudent() {
    int i;

    if (n >= 100) {
        printf("\nRecord limit reached!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &s[n].roll);

    // Check duplicate roll number
    for (i = 0; i < n; i++) {
        if (s[i].roll == s[n].roll) {
            printf("Roll Number already exists!\n");
            return;
        }
    }

    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Marks in 3 Subjects: ");
    scanf("%d %d %d", &s[n].m1, &s[n].m2, &s[n].m3);

    s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
    s[n].percentage = s[n].total / 3.0;

    n++;

    printf("\nStudent Record Added Successfully.\n");
}

// Display Students
void displayStudents() {
    int i;

    if (n == 0) {
        printf("\nNo Records Found.\n");
        return;
    }

    printf("\n=================================================================================\n");
    printf("%-6s %-20s %-6s %-6s %-6s %-8s %-10s\n",
           "Roll", "Name", "M1", "M2", "M3", "Total", "Percent");
    printf("=================================================================================\n");

    for (i = 0; i < n; i++) {
        printf("%-6d %-20s %-6d %-6d %-6d %-8d %-10.2f\n",
               s[i].roll,
               s[i].name,
               s[i].m1,
               s[i].m2,
               s[i].m3,
               s[i].total,
               s[i].percentage);
    }
}

// Search Student
void searchStudent() {
    int roll, i;

    if (n == 0) {
        printf("\nNo Records Available.\n");
        return;
    }

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("\nStudent Found\n");
            printf("---------------------------\n");
            printf("Roll Number : %d\n", s[i].roll);
            printf("Name        : %s\n", s[i].name);
            printf("Marks       : %d %d %d\n",
                   s[i].m1, s[i].m2, s[i].m3);
            printf("Total       : %d\n", s[i].total);
            printf("Percentage  : %.2f%%\n", s[i].percentage);
            return;
        }
    }

    printf("\nStudent Not Found.\n");
}

// Sort Students
void sortStudents() {
    int i, j;
    struct Student temp;

    if (n == 0) {
        printf("\nNo Records to Sort.\n");
        return;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (s[j].total < s[j + 1].total) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\nRecords Sorted Successfully (Highest Total First).\n");
}

// Main Function
int main() {

    int choice;

    do {
        printf("\n");
        printf("=========================================\n");
        printf("     STUDENT RESULT PROCESSING SYSTEM\n");
        printf("=========================================\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student\n");
        printf("4. Sort by Total Marks\n");
        printf("5. Exit\n");
        printf("-----------------------------------------\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                sortStudents();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while (choice != 5);

    return 0;
}