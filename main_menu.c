
int main_menu(){
    //Sleep(10000); // Pause for 10 seconds to view the title screen
    //system("cls"); // Clear the console screen

    printf(BOLD_GREEN "::::    ::::      :::     ::::::::::: ::::    :::      ::::    ::::  :::::::::: ::::    ::: :::    :::\n" RESET);
    printf(BOLD_GREEN "+:+:+: :+:+:+   :+: :+:       :+:     :+:+:   :+:      +:+:+: :+:+:+ :+:        :+:+:   :+: :+:    :::\n" RESET);
    printf(BOLD_GREEN "+:+ +:+:+ +:+  +:+   +:+      +:+     :+:+:+  +:+      +:+ +:+:+ +:+ +:+        :+:+:+  +:+ +:+    +:+\n" RESET);
    printf(BOLD_GREEN "+#+  +:+  +#+ +#++:++#++:     +#+     +#+ +:+ +#+      +#+  +:+  +#+ +#++:++#   +#+ +:+ +#+ +#+    +:+\n" RESET);
    printf(BOLD_GREEN "+#+       +#+ +#+     +#+     +#+     +#+  +#+#+#      +#+       +#+ +#+        +#+  +#+#+# +#+    +#+\n" RESET);
    printf(BOLD_GREEN "+#        #+# #+#     #+#     #+#     #+#   #+#+#      #+#       #+# #+#        #+#   #+#+# #+#    #+#\n" RESET);
    printf(BOLD_GREEN "###       ### ###     ### ########### ###    ####      ###       ### ########## ###    ####  ########\n\n\n\n\n" RESET);

    printf(BOLD_GREEN"      1. Start Adventure        \n"RESET); 
    printf(BOLD_GREEN"      2. Instructions           \n"RESET);
    printf(BOLD_GREEN"      3. Quit                   \n"RESET);
    printf(BOLD_GREEN"                                 \n"RESET);

        printf(BOLD_YELLOW"\nChoose an option (1, 2, or 3):\n> "RESET);

        int choice = 0;
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                user_info();
                printf("\n\n\nHello, %s! Welcome to The fifth horseman.\n", name);
                typeText(BOLD_WHITE"Loading..."RESET);
               Sleep(1000);

                war_background();
                break; 
            case 2: 
                typeText(BOLD_GREEN"                   *** INSTRUCTION ***\n"RESET);
                typeText(GREEN"\n\nThe user need to seek the four Sigils to restore Hope and save the world.\n"RESET);
                typeText(GREEN"Beware: Your choices reflect your moral balance and determine if you earn the Horseman's Sigil.\n"RESET);
                main_menu();
                break;
            case 3:
                typeText(BOLD_GREEN"Thank you for playing. Goodbye.\n"RESET);
                //horseman_starting();
            default:
                typeText("Invalid choice. Please enter 1, 2, or 3.\n");
                break;
        }

    return 0;
}
