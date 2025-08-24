/*
    ! --- Exercise: Quiz Game ---

    GOAL:
    - Create a small multiple-choice quiz using arrays.
    - The program should:
        1. Store questions
        2. Store multiple answer options
        3. Store the correct answer key
        4. Ask user each question
        5. Compare user’s answer with the correct one
        6. Keep track of score

    WHAT WE LEARN:
    - How to use arrays of strings
    - How to store related data in arrays
    - How loops help avoid repeating code
    - How to compare user input with correct answers

    CONCEPTS:
    - questions[] → array of strings (quiz questions)
    - options[][] → 2D array of strings (choices)
    - answers[] → array of chars (correct options like 'A', 'B', 'C')
    - userAnswer → variable to store player’s input

    IMPROVEMENTS YOU CAN TRY LATER:
    - Add scoring percentage
    - Use structs for more complex quiz systems
    - Add input validation
*/


/*
    ! --- Try to solve the exercise  ---
*/





//!  --- Solution ---

// #include <stdio.h>
// #include <ctype.h>   // for toupper()

// int main() {
//     char questions[][100] = {
//         "1. What is the capital of France?",
//         "2. Which language is used to write operating systems?",
//         "3. Who developed the C programming language?"
//     };

//     char options[][4][50] = {
//         {"A. Berlin", "B. Madrid", "C. Paris", "D. Rome"},
//         {"A. Python", "B. C", "C. Java", "D. HTML"},
//         {"A. Bjarne Stroustrup", "B. James Gosling", "C. Dennis Ritchie", "D. Guido van Rossum"}
//     };

//     char answers[3] = {'C', 'B', 'C'};

//     int numberOfQuestions = 3;
//     int score = 0;
//     char userAnswer;

//     printf("===== QUIZ GAME =====\n\n");

//     for(int i = 0; i < numberOfQuestions; i++) {
//         printf("%s\n", questions[i]);
//         for(int j = 0; j < 4; j++) {
//             printf("%s\n", options[i][j]);
//         }

//         printf("Your answer (A/B/C/D): ");
//         scanf(" %c", &userAnswer);
//         userAnswer = toupper(userAnswer);  // accept lowercase too

//         if(userAnswer == answers[i]) {
//             printf("✅ Correct!\n\n");
//             score++;
//         } else {
//             printf("❌ Wrong! Correct answer was %c\n\n", answers[i]);
//         }
//     }

//     printf("===== QUIZ FINISHED =====\n");
//     printf("Your Score: %d/%d\n", score, numberOfQuestions);

//     return 0;
// }

