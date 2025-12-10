#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void wait_for_keypress() {
    printf("\n");
    getchar();
}

int main() {
    int choice;
    int badges = 0;
    int question_count = 0;
    
    printf("=== THE 5TH HORSEMAN: FAMINE'S DOMAIN ===\n\n");
    wait_for_keypress();
    
    // Intro
    printf("The player steps into an area where the ground is cracked and dry.\n");
    wait_for_keypress();
    
    printf("No sign of life in sight. The air is heavy with the scent of decay.\n");
    wait_for_keypress();
    
    printf("The sun is the only source of direction.\n\n");
    wait_for_keypress();
    
    printf("Not finding any way out, the player starts walking towards the sun.\n");
    wait_for_keypress();
    
    printf("He realizes he's back at the same place. He looked behind his back and saw someone staring at him.\n");
    wait_for_keypress();
    
    printf("Famine: Not everyday someone dares to step foot in my domain. What are you looking for?\n\n");
    wait_for_keypress();

    printf("Player: I seek your Sigil of Power — I need it to restore balance.\n\n");
    wait_for_keypress();
    
    printf("Famine: Welcome to my domain, a testament to the frailty of this world.\n");
    wait_for_keypress();
//add a famine ascii    
    
    printf("Here, worth is not measured in strength, but in what you can endure when all is stripped away.\n");
    wait_for_keypress();
    
    printf("Do you possess the discipline to conserve the little you have, or will you consume yourself in desperation?\n");
    wait_for_keypress();
    
    printf("My trials will show you. Proceed carefully, for in the Desolate Fields, a single wasted step can mean ruin.\n\n");
    wait_for_keypress();
    
//        /$$$$$$                                  /$$     /$$                             /$$  
//       /$$__  $$                                | $$    |__/                           /$$$$  
//      | $$  \ $$ /$$   /$$  /$$$$$$   /$$$$$$$ /$$$$$$   /$$  /$$$$$$  /$$$$$$$       |_  $$  
//      | $$  | $$| $$  | $$ /$$__  $$ /$$_____/|_  $$_/  | $$ /$$__  $$| $$__  $$        | $$  
//      | $$  | $$| $$  | $$| $$$$$$$$|  $$$$$$   | $$    | $$| $$  \ $$| $$  \ $$        | $$  
//      | $$/$$ $$| $$  | $$| $$_____/ \____  $$  | $$ /$$| $$| $$  | $$| $$  | $$        | $$  
//      |  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$$$$$$/  |  $$$$/| $$|  $$$$$$/| $$  | $$       /$$$$$$
//       \____ $$$ \______/  \_______/|_______/    \___/  |__/ \______/ |__/  |__/      |______/
//            \__/                                                                              
// 
                                                                                                                                                                                       
    printf("=== QUESTION 1 ===\n");
    wait_for_keypress();
    
    printf("Famine: Which is worse: having too many choices and wasting time, or having too few choices and being limited?\n\n");
    wait_for_keypress();
    
    printf("1. Too many choices and wasting time\n");
    printf("2. Too few choices and being limited\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    question_count++;
    
    wait_for_keypress();
    
    if (choice == 1) {
        printf("Famine: Interesting... those with abundance forget the value of scarcity.\n\n");
        wait_for_keypress();
    } else if (choice == 2) {
        printf("Famine: A cautious answer. But know this - limitation breeds desperation.\n\n");
        wait_for_keypress();
    } else {
        printf("Invalid choice. Try again.\n");
        wait_for_keypress();
    }
    
//        /$$$$$$                                  /$$     /$$                            /$$$$$$ 
//       /$$__  $$                                | $$    |__/                           /$$__  $$
//      | $$  \ $$ /$$   /$$  /$$$$$$   /$$$$$$$ /$$$$$$   /$$  /$$$$$$  /$$$$$$$       |__/  \ $$
//      | $$  | $$| $$  | $$ /$$__  $$ /$$_____/|_  $$_/  | $$ /$$__  $$| $$__  $$        /$$$$$$/
//      | $$  | $$| $$  | $$| $$$$$$$$|  $$$$$$   | $$    | $$| $$  \ $$| $$  \ $$       /$$____/ 
//      | $$/$$ $$| $$  | $$| $$_____/ \____  $$  | $$ /$$| $$| $$  | $$| $$  | $$      | $$      
//      |  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$$$$$$/  |  $$$$/| $$|  $$$$$$/| $$  | $$      | $$$$$$$$
//       \____ $$$ \______/  \_______/|_______/    \___/  |__/ \______/ |__/  |__/      |________/
//            \__/                                                                                
//                                                                                                
                                                                                                
    printf("=== QUESTION 2 ===\n");
    wait_for_keypress();
    
    printf("Famine: Would you rather be the one who makes the final decision, or the one who is always well-fed?\n\n");
    wait_for_keypress();
    
    printf("1. Final decision\n");
    printf("2. Well fed\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    question_count++;
    
    wait_for_keypress();
    
    if (choice == 1) {
        printf("Famine: Power without sustenance is hollow. You may regret this path.\n\n");
        wait_for_keypress();
    } else if (choice == 2) {
        printf("Famine: A fool's choice. Comfort blinds many to the suffering around them.\n\n");
        wait_for_keypress();
    }
//
//        /$$$$$$                                  /$$     /$$                            /$$$$$$ 
//       /$$__  $$                                | $$    |__/                           /$$__  $$
//      | $$  \ $$ /$$   /$$  /$$$$$$   /$$$$$$$ /$$$$$$   /$$  /$$$$$$  /$$$$$$$       |__/  \ $$
//      | $$  | $$| $$  | $$ /$$__  $$ /$$_____/|_  $$_/  | $$ /$$__  $$| $$__  $$         /$$$$$/
//      | $$  | $$| $$  | $$| $$$$$$$$|  $$$$$$   | $$    | $$| $$  \ $$| $$  \ $$        |___  $$
//      | $$/$$ $$| $$  | $$| $$_____/ \____  $$  | $$ /$$| $$| $$  | $$| $$  | $$       /$$  \ $$
//      |  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$$$$$$/  |  $$$$/| $$|  $$$$$$/| $$  | $$      |  $$$$$$/
//       \____ $$$ \______/  \_______/|_______/    \___/  |__/ \______/ |__/  |__/       \______/ 
//            \__/                                                                                
//                                                                                                

    printf("=== QUESTION 3 ===\n");
    wait_for_keypress();
    
    printf("Famine: Do you get more annoyed by people who waste food, or people who waste time?\n\n");
    wait_for_keypress();
    
    printf("1. Food (Proceeds normally)\n");
    printf("2. Time (Skips a question)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    wait_for_keypress();
    
    if (choice == 1) {
        printf("Famine: You understand the necessity of sustenance. Good.\n\n");
        wait_for_keypress();
    } else if (choice == 2) {
        printf("Famine: You value efficiency. Admirable. I will spare you one trial.\n\n");
        wait_for_keypress();
    }

//        /$$$$$$                                  /$$     /$$                           /$$   /$$
//       /$$__  $$                                | $$    |__/                          | $$  | $$
//      | $$  \ $$ /$$   /$$  /$$$$$$   /$$$$$$$ /$$$$$$   /$$  /$$$$$$  /$$$$$$$       | $$  | $$
//      | $$  | $$| $$  | $$ /$$__  $$ /$$_____/|_  $$_/  | $$ /$$__  $$| $$__  $$      | $$$$$$$$
//      | $$  | $$| $$  | $$| $$$$$$$$|  $$$$$$   | $$    | $$| $$  \ $$| $$  \ $$      |_____  $$
//      | $$/$$ $$| $$  | $$| $$_____/ \____  $$  | $$ /$$| $$| $$  | $$| $$  | $$            | $$
//      |  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$$$$$$/  |  $$$$/| $$|  $$$$$$/| $$  | $$            | $$
//       \____ $$$ \______/  \_______/|_______/    \___/  |__/ \______/ |__/  |__/            |__/
//            \__/                                                                                
//                                                                                                

    if (choice == 1) {
        printf("=== QUESTION 4 ===\n");
        wait_for_keypress();
        
        printf("Famine: When a valuable new item is released, you feel the strongest urge to:\n\n");
        wait_for_keypress();
        
        printf("1. Immediately buy and keep it for yourself, ensuring you have what others want.\n");
        printf("2. Analyze the market to see if you can buy several and share/trade them later.\n");
        printf("3. Wait a while until everyone else has it, and then decide if you still truly need it.\n");
        printf("4. Focus on the value of what you already own and ignore the new trend.\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        question_count++;
        
        wait_for_keypress();
        
        if (choice == 4) {
            printf("Famine: Contentment with what you possess... This is wisdom in my domain.\n\n");
            wait_for_keypress();
        } else {
            printf("Famine: Your answer reveals your nature in the face of abundance.\n\n");
            wait_for_keypress();
        }
    }
    
//        /$$$$$$                                  /$$     /$$                           /$$$$$$$ 
//       /$$__  $$                                | $$    |__/                          | $$____/ 
//      | $$  \ $$ /$$   /$$  /$$$$$$   /$$$$$$$ /$$$$$$   /$$  /$$$$$$  /$$$$$$$       | $$      
//      | $$  | $$| $$  | $$ /$$__  $$ /$$_____/|_  $$_/  | $$ /$$__  $$| $$__  $$      | $$$$$$$ 
//      | $$  | $$| $$  | $$| $$$$$$$$|  $$$$$$   | $$    | $$| $$  \ $$| $$  \ $$      |_____  $$
//      | $$/$$ $$| $$  | $$| $$_____/ \____  $$  | $$ /$$| $$| $$  | $$| $$  | $$       /$$  \ $$
//      |  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$$$$$$/  |  $$$$/| $$|  $$$$$$/| $$  | $$      |  $$$$$$/
//       \____ $$$ \______/  \_______/|_______/    \___/  |__/ \______/ |__/  |__/       \______/ 
//            \__/                                                                                
//                                                                                                
//                                                                                                

    printf("=== QUESTION 5 ===\n");
    wait_for_keypress();
    
    printf("Famine: I can stop the world's starvation for one week, but it will use up your final reserved healing item. Do you intervene?\n\n");
    wait_for_keypress();
    
    printf("1. Yes\n");
    printf("2. No\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    wait_for_keypress();
    
    if (choice == 1) {
        printf("Famine: A noble sacrifice. You understand that some prices must be paid.\n");
        wait_for_keypress();
        printf(">>> BADGE EARNED: The Compassionate <<<\n\n");
        wait_for_keypress();
        badges++;
    } else if (choice == 2) {
        printf("Famine: You preserve yourself. Practical, but the world's hunger deepens.\n\n");
        wait_for_keypress();
    }

//        /$$$$$$                                /$$           /$$        /$$$$$$                         
//       /$$__  $$                              |__/          | $$       /$$__  $$                        
//      | $$  \__/  /$$$$$$   /$$$$$$   /$$$$$$$ /$$  /$$$$$$ | $$      | $$  \ $$ /$$   /$$  /$$$$$$     
//      |  $$$$$$  /$$__  $$ /$$__  $$ /$$_____/| $$ |____  $$| $$      | $$  | $$| $$  | $$ /$$__  $$    
//       \____  $$| $$  \ $$| $$$$$$$$| $$      | $$  /$$$$$$$| $$      | $$  | $$| $$  | $$| $$$$$$$$    
//       /$$  \ $$| $$  | $$| $$_____/| $$      | $$ /$$__  $$| $$      | $$/$$ $$| $$  | $$| $$_____/    
//      |  $$$$$$/| $$$$$$$/|  $$$$$$$|  $$$$$$$| $$|  $$$$$$$| $$      |  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$
//       \______/ | $$____/  \_______/ \_______/|__/ \_______/|__/       \____ $$$ \______/  \_______/|__/
//                | $$                                                        \__/                        
//                | $$                                                                                    
//                |__/                                                                                    

    printf("=== SPECIAL QUESTION ===\n");
    wait_for_keypress();
    
    printf("Famine: If you were me, what would you do?\n\n");
    wait_for_keypress();
    
    printf("1. Do my best to save everyone\n");
    printf("2. Probably wouldn't ask a stranger random questions?\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    wait_for_keypress();
    
    if (choice == 1) {
        printf("Famine: An answer born of idealism. Perhaps the world needs such mortals.\n");
        wait_for_keypress();
        printf(">>> BADGE EARNED: The Idealist <<<\n\n");
        wait_for_keypress();
        badges++;
    } else if (choice == 2) {
        printf("Famine: Clever. But skepticism will cost you in my realm.\n");
        wait_for_keypress();
        printf("You lose some vitality as the hunger gnaws at you.\n\n");
        wait_for_keypress();
    }
    
    // Skip minesweeper challenge - go to outro
    printf("Famine: Looks like you're not all talk. You have navigated my domain with discipline and wisdom.\n");
    wait_for_keypress();
    
    printf(">>> SIGIL OF FAMINE EARNED <<<\n");
    wait_for_keypress();
    
    printf("Take this sigil. It carries the knowledge of restraint and the strength to endure.\n\n");
    wait_for_keypress();
    
    printf("=== SUMMARY ===\n");
    wait_for_keypress();
    
    printf("Badges Earned: %d\n", badges);
    wait_for_keypress();
    
    printf("Questions Answered: %d\n\n", question_count);
    wait_for_keypress();
    
    printf("The Desolate Fields tremble as the ground beneath you splits apart.\n");
    wait_for_keypress();
    
    printf("Blinding light floods the realm, swallowing dust, decay, and shadow alike.\n");
    wait_for_keypress();
    
    printf("When it fades, you find yourself standing upon cracked, lifeless earth...\n");
    wait_for_keypress();
    
    return 0;
}
