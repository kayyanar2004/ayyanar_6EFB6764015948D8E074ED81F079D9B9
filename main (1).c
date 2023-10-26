              #include <stdio.h>
              #include <string.h>

              // Structure to represent a student
              struct Student {
                  char name[100];
                  char roll_number[20];
                  float cgpa;
              };

              // Function to swap two student objects
              void swap(struct Student* a, struct Student* b) {
                  struct Student temp = *a;
                  *a = *b;
                  *b = temp;
              }

              // Function to sort students by CGPA in descending order
              void sort_students(struct Student students[], int numStudents) {
                  int i, j;
                  for (i = 0; i < numStudents - 1; i++) {
                      int maxIndex = i;
                      for (j = i + 1; j < numStudents; j++) {
                          if (students[j].cgpa > students[maxIndex].cgpa) {
                              maxIndex = j;
                          }
                      }
                      if (maxIndex != i) {
                          swap(&students[i], &students[maxIndex]);
                      }
                  }
              }

              int main() {
                  // Example list of student objects
                  struct Student students[] = {
                      {"Alice", "S001", 3.8},
                      {"Bob", "S002", 3.6},
                      {"Charlie", "S003", 3.9},
                      {"David", "S004", 3.7},
                  };

                  int numStudents = 4;

                  // Sort students by CGPA in descending order
                  sort_students(students, numStudents);

                  // Print the sorted list of students
                  printf("Sorted Students by CGPA (Descending Order):\n");
                  for (int i = 0; i < numStudents; i++) {
                      printf("Name: %s, Roll Number: %s, CGPA: %.2f\n", students[i].name, students[i].roll_number, students[i].cgpa);
                  }

                  return 0;
              }
