#include <stdio.h>
int main() {
    printf("welcome career guidence program by KLEF college\n");
    printf("in this program you will be give few choices now \n");
    printf("1. Engineering\n");
    printf("2. BCA\n");
    printf("3. law\n");
    printf("4. BBA\n");

    int choice;
    printf("enter the number of your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("you have chosen Engineering\n");
            printf("Engineering is a field that involves the application of scientific and mathematical principles to design, build, and maintain structures, machines, and systems.\n");
            printf("it has many branches like CSE, ECE, EEE, MECH, CIVIL etc.\n");
            printf("adavatages : high demand for engineers, good salary prospects, and opportunities for innovation.\n");
            printf("disadvantages : can be stressful, requires continuous learning, and may involve long hours.\n");
            break;
        case 2:
            printf("you have chosen BCA\n");
            printf("BCA (Bachelor of Computer Applications) is an undergraduate degree in computer applications.\n");
            printf("it is basically one step bellow engeneering in computer science.\n");
            printf("adavatages : good job opportunities in IT, practical knowledge of programming, and a foundation for further studies.\n");
            printf("disadvantages : may not be as recognized as an engineering degree, and limited scope in some areas.\n");
            break;
        case 3:
            printf("you have chosen law\n");
            printf("Law is a system of rules that are created and enforced through social or governmental institutions to regulate behavior.\n");
            printf("it is a field that involves the study of legal systems, principles, and practices.\n");
            printf("adavatages : diverse career options, intellectual challenge, and the ability to make a difference in society.\n");
            printf("disadvantages : can be competitive, requires strong analytical skills, and may involve long hours.\n");
            break;
        case 4:
            printf("you have chosen BBA\n");
            printf("BBA (Bachelor of Business Administration) is an undergraduate degree in business management.\n");
            printf("it provides a foundation in business principles, management, and entrepreneurship.\n");
            printf("adavatages : broad understanding of business, good job prospects in various sectors, and opportunities for leadership roles.\n");
            printf("disadvantages : may not be as specialized as other degrees, and competition in the job market.\n");
            break;
        default:
            printf("invalid choice\n");
            return 0;
    }

    printf("thank you for using the career guidance program by KLEF college\n");
    return 0;   
}