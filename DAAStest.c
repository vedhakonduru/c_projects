#include <stdio.h>
#include <string.h> 

int main() {
    int responses[21];
    int i;

    // Question prompts (shortened for simplicity)
    const char *questions[21] = {
        "Q1: I got upset about little things",
        "Q2: I felt dizzy",
        "Q3: I did not enjoy anything",
        "Q4: I had trouble breathing",
        "Q5: I hated my life",
        "Q6: I over-reacted to situations",
        "Q7: My hands felt shaky",
        "Q8: I was stressing about lots of things",
        "Q9: I felt terrified",
        "Q10: Nothing nice to look forward to",
        "Q11: I was easily irritated",
        "Q12: I found it difficult to relax",
        "Q13: I could not stop feeling sad",
        "Q14: I got annoyed when interrupted",
        "Q15: I felt panic",
        "Q16: I hate myself",
        "Q17: I felt like I was no good",
        "Q18: I was easily annoyed",
        "Q19: I could feel my heart beating fast",
        "Q20: I felt scared for no reason",
        "Q21: I felt that life was terrible"
    };

    printf("Enter your response (0 = Not true, 1 = A little true, 2 = Fairly true, 3 = Very true):\n\n");

    for (i = 0; i < 21; i++) {
        do {
            printf("%s: ", questions[i]);
            scanf("%d", &responses[i]);
        } while (responses[i] < 0 || responses[i] > 3);
    }

    // Calculate scores
    int depression = responses[2] + responses[4] + responses[9] + responses[12] + responses[15] + responses[16] + responses[20];
    int anxiety = responses[1] + responses[3] + responses[6] + responses[8] + responses[14] + responses[18] + responses[19];
    int stress = responses[0] + responses[5] + responses[7] + responses[10] + responses[11] + responses[13] + responses[17];
    int total = depression + anxiety + stress;

    // Severity interpretation function
    const char* getSeverity(int score, const char* type) {
        if (strcmp(type, "Depression") == 0) {
            if (score <= 4) return "Normal";
            else if (score <= 6) return "Mild";
            else if (score <= 10) return "Moderate";
            else if (score <= 13) return "Severe";
            else return "Extremely Severe";
        } else if (strcmp(type, "Anxiety") == 0) {
            if (score <= 3) return "Normal";
            else if (score <= 5) return "Mild";
            else if (score <= 7) return "Moderate";
            else if (score <= 9) return "Severe";
            else return "Extremely Severe";
        } else if (strcmp(type, "Stress") == 0) {
            if (score <= 7) return "Normal";
            else if (score <= 9) return "Mild";
            else if (score <= 12) return "Moderate";
            else if (score <= 15) return "Severe";
            else return "Extremely Severe";
        }
        return "";
    }

    // Display results
    printf("\n--- RESULTS ---\n");
    printf("Depression Score: %d (%s)\n", depression, getSeverity(depression, "Depression"));
    printf("Anxiety Score: %d (%s)\n", anxiety, getSeverity(anxiety, "Anxiety"));
    printf("Stress Score: %d (%s)\n", stress, getSeverity(stress, "Stress"));
    printf("Total DASS-Y Score: %d\n", total);

    return 0;
}
