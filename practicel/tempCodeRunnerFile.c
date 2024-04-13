#include <stdio.h>
#include <stdlib.h>
struct Student {
    char enrollmentNumber[20];
    char name[50];
    char address[100];
    char city[50];
    char state[50];
};
void addStudent() {
    struct Student newStudent;
    printf("Enter Enrollment Number: ");
    scanf("%s", newStudent.enrollmentNumber);
    printf("Enter Name: ");
    scanf("%s", newStudent.name);
    printf("Enter Address: ");
    scanf("%s", newStudent.address);
    printf("Enter City: ");
    scanf("%s", newStudent.city);
    printf("Enter State: ");
    scanf("%s", newStudent.state);
    FILE *file = fopen("students.dat", "ab");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(&newStudent, sizeof(struct Student), 1, file);
    fclose(file);
    printf("Student information added successfully.\n");
}
void displayStudents() {
    struct Student student;
    FILE *file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("No student records found.\n");
        return;
 
   }
    printf("\nEnrollment Number\tName\t\tAddress\t\tCity\t\tState\n");
    printf("------------------------------------------------------------------------\n");
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("%s\t\t\t%s\t\t%s\t\t%s\t\t%s\n", student.enrollmentNumber, student.name,
               student.address, student.city, student.state);
    }
    fclose(file);
}
int main() {
    int choice;
    do {
        printf("\n1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }}
  while (choice != 3);
   return 0;
}
