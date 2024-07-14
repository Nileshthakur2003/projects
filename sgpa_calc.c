#include <stdio.h>

char get_grade_from_marks(int marks);
int grade_value_of(char x);
float total_credits();

char letter_grade[] = {'@', 'A', 'B', 'C', 'D', 'P', 'F'};
int grade_point[] = {10, 9, 8, 7, 6, 5, 0};

char subjects[9][100] = {"CHEMISTRY", "WMP", "PPS", "ENGLISH", "MATHEMATICS-I", "CHEMISTRY[P]", "PPS[P]", "WMP[P]", "ENGLISH[P]"};
float subject_credit[9] = {4, 1, 3, 2, 4, 1.5, 2, 2, 1};
int subject_grade[9];

int main() {
    printf("----------------Calculate SGPA SEM-1---------------", subjects[0]); // Moved inside main()

    printf("Enter Grades corresponding to subjects\n");

    for (int i = 0; i < 9; i++) {
        printf("Enter Grade For %s: ", subjects[i]);
        scanf(" %c", &subject_grade[i]); // Read grade as character
    }

    float grade_total = 0;

    for (int i = 0; i < 9; i++) {
        grade_total += (float)grade_value_of(subject_grade[i]) * subject_credit[i];
    }

    printf("Total Grades = %f\n",grade_total);
    printf("Total Credits = %f\n",total_credits());
    float sgpa = (float)grade_total / total_credits();

    printf("Your SGPA is: %f\n", sgpa);

    return 0;
}

char get_grade_from_marks(int marks) {
    char grade = ' ';
    int numerical = marks / 10;

    switch (numerical) {
        case 9:
            grade = '@';
            break;
        case 8:
            grade = 'A';
            break;
        case 7:
            grade = 'B';
            break;
        case 6:
            grade = 'C';
            break;
        case 5:
            grade = 'D';
            break;
        case 4:
        case 3:
        default:
            grade = 'P';
            break;
    }

    return grade;
}

int grade_value_of(char x) {
    int len = sizeof(letter_grade) / sizeof(letter_grade[0]);
    for (int i = 0; i < len; i++) {
        if (x == letter_grade[i]) {
            return grade_point[i];
        }
    }
    return 0; // Handle default case appropriately
}

float total_credits() {
    float total = 0;
    for (int i = 0; i < 9; i++) {
        total += subject_credit[i];
    }
    return total;
}
