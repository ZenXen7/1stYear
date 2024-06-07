#include <stdio.h>
#include <string.h>

struct Student {
  char firstName[50];
  char lastName[50];
  int age;
};

void sortStudents(struct Student* students, int numStudents) {
  for (int i = 0; i < numStudents; i++) {
    for (int j = i + 1; j < numStudents; j++) {
      if (strcmp(students[i].lastName, students[j].lastName) > 0) {
        struct Student temp = students[i];
        students[i] = students[j];
        students[j] = temp;
      }
    }
  }
}

int main() {
  struct Student students[6] = {
    {"John", "Doe", 21},
    {"Jane", "Smith", 22},
    {"Bob", "Johnson", 23},
    {"Alice", "Brown", 24},
    {"Charlie", "Williams", 25},
    {"Jether", "Omictin", 26}
  };

  int numStudents = 6;

  sortStudents(students, numStudents);

  for (int i = 0; i < numStudents; i++) {
    printf("%s %s\n", students[i].firstName, students[i].lastName);
  }

  return 0;
}
