#include<stdio.h>

int main() {

    printf("-------------------Report Card ---------------------");

    printf("\n1)English\n2)Maths\n3)Physics\n4)Drawing\n5)Computer's");

    int Subject, marks;

    Subject = 0;
    while(Subject < 1 || Subject > 5) {
        printf("\nEnter Which Subject Grade you want to check: ");
        scanf("%d", &Subject);
    if(Subject < 1 || Subject > 5) {
        printf("Invalid choice. Try again\n");
        }
    }
    marks = 0;

    if(Subject == 1) {
        printf("\nYou selected English Subject: ");
        }
    if(Subject == 2) {
        printf("\nYou selected Maths Subject: ");
        }
    if(Subject == 3) {
        printf("\nYou selected Physics Subject: ");
        }
    if(Subject == 4) {
        printf("\nYou selected Drawing Subject: ");
        }
    if(Subject == 5) {
        printf("\nYou selected Computers Subject: ");
        }

    while(marks < 1 || marks > 100) {
        printf("\nEnter Your marks: ");
        scanf("%d", &marks);
    if(marks < 1 || marks > 100) {
        printf("The Entered Marks are Not Valid.\n");
        printf("\nPlese Enter Marks Between (1 - 100):");
        }
    }
    switch(Subject) {
        case 1: 
                if(marks <= 100 && marks >= 90) {
                    printf("Grade A");
                }else if(marks <= 89 && marks >= 75) {
                    printf("Grade B");
                }else if(marks <= 74  && marks >= 61) {
                    printf("Grade C");
                }else if(marks <= 60 && marks >= 46) {
                    printf("Grade D");
                }else if(marks <= 45 && marks >= 25) {
                    printf("Grade E");
                }

                break;
        case 2: 
                if(marks <= 100 && marks >= 90) {
                    printf("Grade A");
                }else if(marks <= 89 && marks >= 75) {
                    printf("Grade B");
                }else if(marks <= 74  && marks >= 61) {
                    printf("Grade C");
                }else if(marks <= 60 && marks >= 46) {
                    printf("Grade D");
                }else if(marks <= 45 && marks >= 25) {
                    printf("Grade E");
                }if(marks > 100) {
                printf("The Entered Marks are Not Valid.\n");
                printf("Plese Enter Marks Between (1 - 100) :");
                }
                break;
        case 3: 
                if(marks <= 100 && marks >= 90) {
                    printf("Grade A");
                }else if(marks <= 89 && marks >= 75) {
                    printf("Grade B");
                }else if(marks <= 74  && marks >= 61) {
                    printf("Grade C");
                }else if(marks <= 60 && marks >= 46) {
                    printf("Grade D");
                }else if(marks <= 45 && marks >= 25) {
                    printf("Grade E");
                }if(marks > 100) {
                printf("The Entered Marks are Not Valid.\n");
                printf("Plese Enter Marks Between (1 - 100) :");
                }
                break;
        case 4: 
                if(marks <= 100 && marks >= 90) {
                    printf("Grade A");
                }else if(marks <= 89 && marks >= 75) {
                    printf("Grade B");
                }else if(marks <= 74  && marks >= 61) {
                    printf("Grade C");
                }else if(marks <= 60 && marks >= 46) {
                    printf("Grade D");
                }else if(marks <= 45 && marks >= 25) {
                    printf("Grade E");
                }if(marks > 100) {
                printf("The Entered Marks are Not Valid.\n");
                printf("Plese Enter Marks Between (1 - 100) :");
                }
                break;
        case 5: 
                if(marks <= 100 && marks >= 90) {
                    printf("Grade A");
                }else if(marks <= 89 && marks >= 75) {
                    printf("Grade B");
                }else if(marks <= 74  && marks >= 61) {
                    printf("Grade C");
                }else if(marks <= 60 && marks >= 46) {
                    printf("Grade D");
                }else if(marks <= 45 && marks >= 25) {
                    printf("Grade E");
                break;
                }if(marks > 100) {
                printf("The Entered Marks are Not Valid.\n");
                printf("Plese Enter Marks Between (1 - 100) :");
                }
                break;
    }
    return 0;
}