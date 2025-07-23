#include <stdio.h>
#include <ctype.h>

int main() {
    char questions[20][256] = {
        "1. What excites you the most?\n a) Cracking puzzles\n b) Designing outfits\n c) Organizing events\n d) Spending time with animals",
        "2. What would you prefer to learn?\n a) Quantum physics\n b) Film-making\n c) Political science\n d) Psychology",
        "3. You are stuck in a lift. What do you do?\n a) Find a way to open it\n b) Draw how you feel\n c) Calm others and lead\n d) Talk to ease everyone's fear",
        "4. What's your ideal weekend?\n a) Visiting a science fair\n b) Going to an art gallery\n c) Attending a leadership seminar\n d) Volunteering at an old age home",
        "5. How do you usually spend alone time?\n a) Solving math problems\n b) Writing poems\n c) Planning future goals\n d) Reflecting on relationships",
        "6. What motivates you to keep going?\n a) Solving complex issues\n b) Exploring imagination\n c) Making an impact\n d) Understanding human emotions",
        "7. Which activity do you enjoy?\n a) Coding\n b) Acting in a play\n c) Hosting debates\n d) Taking care of plants",
        "8. If given a journal, what would you write?\n a) Scientific theories\n b) Short stories\n c) Inspirational ideas\n d) Personal thoughts and emotions",
        "9. Which skill would you love to master?\n a) Data analysis\n b) Music composition\n c) Public speaking\n d) Counseling",
        "10. What do you value the most?\n a) Intelligence\n b) Creativity\n c) Ambition\n d) Compassion",
        "11. If you could visit any place, it would be:\n a) CERN in Switzerland\n b) Broadway in New York\n c) UN Headquarters\n d) Spiritual retreat in Rishikesh",
        "12. Your dream project involves:\n a) Building a robot\n b) Creating a graphic novel\n c) Starting a youth movement\n d) Running a free help center",
        "13. You often get compliments for:\n a) Being sharp\n b) Being original\n c) Being confident\n d) Being supportive",
        "14. What makes you angry?\n a) Illogical thinking\n b) Lack of originality\n c) Unfair leadership\n d) Insensitivity",
        "15. How do you recharge after stress?\n a) Solving riddles\n b) Painting or sketching\n c) Journaling your vision\n d) Meditating quietly",
        "16. What role would you play in a film crew?\n a) Screenwriter\n b) Cinematographer\n c) Director\n d) Production support",
        "17. How would you like to be remembered?\n a) As a genius\n b) As a visionary\n c) As a changemaker\n d) As a healer",
        "18. What frustrates you most?\n a) Inaccurate facts\n b) Creative blocks\n c) Inaction\n d) People not opening up",
        "19. Pick a symbol that speaks to you:\n a) A lightbulb\n b) A paintbrush\n c) A flag\n d) A heart",
        "20. Your dream career would involve:\n a) Researching future tech\n b) Directing films or comics\n c) Leading a social revolution\n d) Healing or listening to people"
    };

    int thinker = 0, creator = 0, leader = 0, healer = 0;
    char answer;

    printf("=== Career Personality Test ===\n\n");

    for (int i = 0; i < 20; i++) {
        printf("%s\n", questions[i]);
        printf("Your answer (a/b/c/d): ");
        scanf(" %c", &answer);
        answer = tolower(answer);

        switch(answer) {
            case 'a': thinker++; break;
            case 'b': creator++; break;
            case 'c': leader++; break;
            case 'd': healer++; break;
            default:
                printf("Invalid input. Counting as 'a'.\n");
                thinker++;
        }

        printf("\n");
    }

    printf("=== Your Result ===\n");
    if (thinker >= creator && thinker >= leader && thinker >= healer) {
        printf(">> You are a THINKER: Logical, analytical and curious.\n");
        printf(">> Suitable Careers: Scientist, Engineer, Coder, Analyst\n");
    } else if (creator >= thinker && creator >= leader && creator >= healer) {
        printf(">> You are a CREATOR: Imaginative, expressive and artistic.\n");
        printf(">> Suitable Careers: Artist, Writer, Filmmaker, Designer\n");
    } else if (leader >= thinker && leader >= creator && leader >= healer) {
        printf(">> You are a LEADER: Confident, strategic and inspiring.\n");
        printf(">> Suitable Careers: Lawyer, Politician, Entrepreneur, Manager\n");
    } else {
        printf(">> You are a HEALER: Empathetic, patient and supportive.\n");
        printf(">> Suitable Careers: Psychologist, Social Worker, Doctor, Listener\n");
    }

    return 0;
}
