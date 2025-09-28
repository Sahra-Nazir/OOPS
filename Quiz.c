#include <stdio.h>

struct Puzzle {
    char question[200];
    char options[4][100];
    char correctOption;
};

int main() {
    struct Puzzle quiz[3] = {
        {"I am a three-digit number. My tens digit is five more than my ones digit, "
         "and my hundreds digit is eight less than my tens digit. What number am I?",
         {"A. 194", "B. 370", "C. 185", "D. 295"}, 'C'},

        {"A farmer has 17 sheep. All but 9 run away. How many are left?",
         {"A. 8", "B. 9", "C. 17", "D. None"}, 'B'},

        {"If you write down all the numbers from 1 to 100, how many times will you write the digit 7?",
         {"A. 10", "B. 19", "C. 20", "D. 21"}, 'C'}
    };

    int score = 0;
    char answer;

    printf("==== PUZZLE QUIZ ====\n");
    printf("Take your notebook and solve each puzzle before typing answer!\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Puzzle %d: %s\n", i + 1, quiz[i].question);
        
        // Encourage offline solving
        printf("Think on paper... Press Enter when ready to see options.");
        getchar(); // wait for Enter

        // Show options
        for (int j = 0; j < 4; j++)
            printf("%s\n", quiz[i].options[j]);

        printf("Enter your option (A/B/C/D): ");
        scanf(" %c", &answer);

        if (answer == quiz[i].correctOption) {
            printf("✅ Correct!\n\n");
            score++;
        } else {
            printf("❌ Wrong! Correct Answer: %c\n\n", quiz[i].correctOption);
        }
        getchar(); // to handle Enter after option
    }

    printf("=== QUIZ OVER ===\nYour Score = %d / 3\n", score);

    if (score == 3) printf("Excellent problem solver! 🎉\n");
    else if (score == 2) printf("Good, but sharpen your logic!\n");
    else printf("Keep practicing puzzles!\n");

    return 0;
}