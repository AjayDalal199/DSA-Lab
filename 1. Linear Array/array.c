#include <stdio.h>
#include <conio.h>

int choice = 0;
int arr[100] = {10, 3, 2 , 5, 9, 8, 22, 55, 35, 99};
int size = 10;
int elm = -1;
int pos = -1;
int i = 0;

// ----------------------Function Declarations----------------------------------
void menu();
void choice_system();
void insert();
void delete();
void location();
void display_array();
void again();
void exit_screen();
// ----------------------------------------------------------------------------

void menu() {
    printf("\t\t----------------------------------\n");
    printf("\t\t| Linear Array Operations Center |\n");
    printf("\t\t----------------------------------\n\n");
    printf("[1]Insert a new element\n");
    printf("[2]Delete an element\n");
    printf("[3]Find location of an element\n");
    printf("[4]Display elements of an array\n");
    printf("=======================================================================\n");
}
void choice_system() {
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("-----------------------------------------------------------------------\n");
    switch(choice) {
        case 1: 
            insert();
            break;
        case 2:
            delete();
            break;
        case 3: 
            location();
            break;
        case 4: 
            display_array();
            break;
        default: 
            printf("Please don't enter the trash inside your brain, try again and \n");
            printf("Please enter a valid choice: ");
            choice_system();
            break;
    }
    again();
}

// ------------------------ main() function ---------------------------------------
int main() {
    menu();
    choice_system();
}
// ---------------------------------------------------------------------------------

//-------------------------- Function Definitions -----------------------------------

void insert() {
    printf("Enter the element you want to enter: ");
    scanf("%d", &elm);
    printf("Enter the posittion of new element: ");
    scanf("%d", &pos);
    size++;
    int temp = elm;
    int temp1;
    for(i = pos-1; i < size; i++) {
        temp1 = arr[i];
        arr[i] = temp;
        temp = temp1;
    }
    display_array();
}
void delete() {
    printf("Enter the element you want to delete: ");
    scanf("%d", &elm);
    for (i = 0; i < size; i++) {
        if (elm == arr[i]) {
            pos = i;
            break;
        }
    }
    for (i = pos; i < size; i++) {
        arr[i] = arr[i+1];
    }
    size--;
    display_array();
}
void location() {
    printf("Enter the element you want to search: ");
    scanf("%d", &elm);
    for (i = 0; i < size; i++) {
        if (elm == arr[i]) {
            pos = i + 1;
            break;
        }
        else
            pos = -1;
    }
    if (pos != -1)
        printf("Your required element '%d' is at place number '%d' ", elm, pos);
    else
        printf("Your required element '%d' not found in array.", elm);
    printf("\n-----------------------------------------------------------------------\n");
}
void display_array() {
    printf("Your Array is: ");
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("\n-----------------------------------------------------------------------\n");
}
void again() {
    int ch;
    printf("\nPress [5] to enter another choice or anything else to exit.\n");
    scanf("%d", &ch);
    printf("-----------------------------------------------------------------------\n");
    if (ch == 5)
        choice_system();
    else
        exit_screen();
}
void exit_screen() { 
    printf("\n");
    printf("=======================================================================\n");
    printf("Thank you for Visiting Linear Array Operations Center. Have a Nice day.\n\n");
    printf("THE END\n");
    printf("=======================================================================\n");
}