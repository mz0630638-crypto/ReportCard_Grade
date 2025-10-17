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
    printf("\nEnter Your marks: ");
    scanf("%d", &marks);

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
                }if(marks > 100);
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
                }if(marks > 100);
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
                }if(marks > 100);
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
                }if(marks > 100);
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
                }if(marks > 100);
                break;
    }
    return 0;
}