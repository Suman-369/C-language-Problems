#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

int sameDepartment(struct Student s1, struct Student s2) {
    if (strcmp(s1.department, s2.department) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct Student students[2];
    for (int i = 0; i < 2; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].yearOfJoining);
    }
    if (sameDepartment(students[0], students[1])) {
        printf("Both students are from the same department.\n");
    } else {
        printf("Students are from different departments.\n");
    }

    return 0;
}

