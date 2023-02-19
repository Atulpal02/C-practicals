#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Address {
  char street[50];
  char city[50];
  char district[50];
  char state[50];
};

struct Employee {
  char name[50];
  long int mobile;
  int age;
  char degree[50];
  float exp;
  struct Address address;
};

void input_employee(struct Employee* emp) {
  printf("Enter employee details:\n");
  printf("Name: ");
  scanf("%s", emp->name);
  printf("Mobile: ");
  scanf("%ld", &emp->mobile);
  printf("Age: ");
  scanf("%d", &emp->age);
  printf("Degree: ");
  scanf("%s", emp->degree);
  printf("Experience: ");
  scanf("%f", &emp->exp);
  printf("Address:\n");
  printf("Street: ");
  scanf("%s", emp->address.street);
  printf("City: ");
  scanf("%s", emp->address.city);
  printf("District: ");
  scanf("%s", emp->address.district);
  printf("State: ");
  scanf("%s", emp->address.state);
}

void print_employee(struct Employee emp) {
  printf("Name: %s\n", emp.name);
  printf("Mobile: %ld\n", emp.mobile);
  printf("Age: %d\n", emp.age);
  printf("Degree: %s\n", emp.degree);
  printf("Experience: %f\n", emp.exp);
  printf("Address:\n");
  printf("Street: %s\n", emp.address.street);
  printf("City: %s\n", emp.address.city);
  printf("District: %s\n", emp.address.district);
  printf("State: %s\n", emp.address.state);
}

int main() {
  struct Employee employees[20];
  int num_employees = 0;
  
  while (1) {
    int choice;
    printf("Menu:\n");
    printf("1. Add employee\n");
    printf("2. Retrieve employee by mobile number\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
      if (num_employees == 20) {
        printf("Error: Maximum number of employees reached.\n");
        continue;
      }
      input_employee(&employees[num_employees]);
      num_employees++;
    } else if (choice == 2) {
      long int mobile;
      printf("Enter mobile number: ");
      scanf("%ld", &mobile);
      
      int found = 0;
      for (int i = 0; i < num_employees; i++) {
        if (employees[i].mobile == mobile) {
          printf("Employee found:\n");
          print_employee(employees[i]);
          found = 1;
          break;
        }
      }
      
      if (!found) {
        printf("Employee not found.\n");
      }
    } else if (choice == 3) {
      break;
    } else {
      printf("Invalid choice.\n");
    }
  }
  
  return 0;
}
