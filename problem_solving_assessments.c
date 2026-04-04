// Started this portfolio on 08 March 2026
// Each assessment completed through personal study outside of class
// All code written manually — no copy-paste, no AI generation
// Total lines of code          : 1594
// Total assessments            : 9
// Submission due on or before  : 10th of June 2026 before 4pm

// ========================================================================================================================
// QH0305 — Problem Solving
// Assessment Portfolio
// Author : Mehmet Kaygusuz
// Solent University — Computer Science Foundation 2025/2026
// ========================================================================================================================
// Week 3  — Assessment 1     : Weekly Screen-Time Tracker
// Week 4  — Assessment 2     : City Aquarium Ticketing
// Week 5  — Assessment 3     : Hydration Tracker Loop Challenge
// Week 6  — Assessment 4     : Energy Usage Logger
// Week 6  - Assessment 4 NEW : Calendar Printer (It's been updated it on 31 March 2026)
// Week 8  — Assessment 5     : Temperature Logger
// Week 9  — Assessment 6     : Book Organizer
// Week 11 — Assessment 7     : Media Lab Equipment Loan Manager
// Week 12 - Assessment 8     : Word document — 1000 words
// ========================================================================================================================

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ========================================================================================================================
// ASSESSMENT 1 — Weekly Screen-Time Tracker
// Week 3 | Topic: Variables and Operators
// ========================================================================================================================

// 1-D Grade (40-49) — Basic Weekly Total
// - Three categories, values assigned directly in code (no user input)
// - Calculate and print total screen time for one week (in minutes)
// - Display a clear label for each category and the total

void assessment1_d() {printf("Assessment 1 - D Grade (40-49) completed 08 March 2026 15:35\n");
   int social_media=120;
   int youtube=250;
   int games=450;
   int total_minutes;
   total_minutes=social_media+youtube+games;

   printf("Total Weekly Screen Time :%d Minutes\n", total_minutes);
   printf("-------------------------------------");
   printf("\nSocial Media             :%d Minutes\nYouTube                  :%d Minutes\nGames                    :%d Minutes",social_media, youtube, games);
 printf("\n-------------------------------------");
}

// 1-C Grade (50-59) — User Input and Daily Average Check
// - User inputs minutes for three categories
// - Calculate daily average
// - Compare with recommended limit
// - Print whether within or above recommended limit
// - Validate: if any input is negative, show error and stop

void assessment1_c() {printf("Assessment 1 - C Grade (50-59) completed 08 March 2026 16:25\n\n");
    int social_media;
    int youtube;
    int games;
    int daily_limit=120;
   
    printf("Enter your Daily Screen Time for Social Media    (Minutes):"); 
    scanf(" %d",&social_media);
    if (social_media<0)
    {
       printf("Error!!! Negative numbers are invalid! Please enter valid numbers...\n********************************************************************");
       return;
    }
   
    printf("Enter your Daily Screen Time for YouTube         (Minutes):"); 
    scanf(" %d",&youtube);
    if (youtube<0)
    {
       printf("Error!!! Negative numbers are invalid! Please enter valid numbers...\n********************************************************************");
       return;
    }
   
    printf("Enter your Daily Screen Time for Games           (Minutes):"); 
    scanf(" %d",&games);
    if (games<0)
    {
       printf("Error!!! Negative numbers are invalid! Please enter valid numbers...\n********************************************************************");
       return;
    }
    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n");
   
   int weekly_total_minutes_social_media=7*social_media;
   int weekly_total_minutes_youtube=7*youtube;
   int weekly_total_minutes_games=7*games;
   int weekly_total_minutes= weekly_total_minutes_social_media+ weekly_total_minutes_youtube+ weekly_total_minutes_games;
   
    printf("Total Weekly Screen Time :%d     Minutes / Week\n", weekly_total_minutes);
    printf("-----------------------------------------------------\n");
    printf("\nSocial Media             :%d      Minutes / Week\nYouTube                  :%d      Minutes / Week\nGames                    :%d      Minutes / Week",weekly_total_minutes_social_media,  weekly_total_minutes_youtube, weekly_total_minutes_games);
    printf("\n-----------------------------------------------------\n");
    
    double daily_average=(double)weekly_total_minutes/7;
    printf("Daily Average Screen Time :%.2lf    Minutes / Day", daily_average);
    printf("\nDaily Safe Limit is          :%d      Minutes / Day", daily_limit);
    printf("\n-----------------------------------------------------\n");
 
    if (daily_limit>=daily_average)
    {
     printf("\nYou are 'Within Recommended Limit'");
    }
    else
    printf("\nIMPORTANT! You are 'Above Recommended Limit'!!!\n***********************************************");
    
    printf("\n-----------------------------------------------------\n");
}

// 1-B Grade (60-69) — Multi-Week Tracking and Comparison
// - User inputs minutes for three categories across two weeks
// - Calculate total and daily average for each week
// - State whether each week is within or above recommended limit
// - Compare two weeks: increased, decreased, or stayed the same

void assessment1_b() {printf("Assessment 1 - B Grade (60-69) completed 08 March 2026 21:42\n");
   int social_media_w1;
   int social_media_w2;
   int youtube_w1;
   int youtube_w2;
   int games_w1;
   int games_w2;
   int daily_limit=120;
  
   printf("Enter your Screen Time for Social Media WEEK1 (Minutes)  :"); scanf(" %d", &social_media_w1);
   if (social_media_w1<0){
       printf("Error!!! Negative numbers are invalid! Please enter valid numbers...\n********************************************************************");
       return;
   }
   
   printf("Enter your Screen Time for Social Media WEEK2 (Minutes)  :"); scanf(" %d", &social_media_w2);
   if (social_media_w2<0){
       printf("Error!!! Negative numbers are invalid! Please enter valid numbers...\n********************************************************************");
       return;
   }
   
   printf("Enter your Screen Time for YouTube WEEK1 (Minutes)       :"); scanf(" %d",&youtube_w1);
   if (youtube_w1<0){
       printf("Error!!! Negative numbers are invalid! Please enter valid numbers...\n********************************************************************");
       return;
   }
   
   printf("Enter your Screen Time for YouTube WEEK2 (Minutes)       :"); scanf(" %d",&youtube_w2);
   if (youtube_w2<0){
       printf("Error!!! Negative numbers are invalid! Please enter valid numbers...\n********************************************************************");
       return;
   }
   
   printf("Enter your Screen Time for Games WEEK1 (Minutes)         :"); scanf(" %d",&games_w1);
   if (games_w1<0){
       printf("Error!!! Negative numbers are invalid! Please enter valid numbers...\n********************************************************************");
       return;
   }
   
      printf("Enter your Screen Time for Games WEEK2 (Minutes)         :"); scanf(" %d",&games_w2);
   if (games_w2<0){
       printf("Error!!! Negative numbers are invalid! Please enter valid numbers...\n********************************************************************");
       return;
   }

    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n");
   
    int w1_total=social_media_w1+youtube_w1+games_w1;
    int w2_total=social_media_w2+youtube_w2+games_w2;
    int w12_total=w1_total+w2_total;
    
    printf("Total Week1 Screen Time :%d      Minutes / Week\n", w1_total);
    printf("Total Week2 Screen Time :%d     Minutes / Week\n", w2_total);
   
    printf("---------------------------\n");
    printf("Total W1+W2 Screen Time :%d     Minutes in Two Weeks\n", w12_total);
  
    printf("-----------------------------------------------------\n");
    
    double percentage_change = ((double)(w2_total - w1_total) / w1_total) * 100;
    if (w2_total > w1_total) {
        printf("Overall Usage: INCREASED in Week 2 (%.2lf%% increase)\n", percentage_change);
    }
    else if (w2_total < w1_total) {
        printf("Overall Usage: DECREASED in Week 2 (%.2lf%% decrease)\n", -percentage_change);
    }
    else {
        printf("Overall Usage: STAYED THE SAME across both weeks (0%% change)\n");
    }

    printf("-----------------------------------------------------\n");
 
   int social_media_w12=social_media_w1+social_media_w2;
   int youtube_w12= youtube_w1+ youtube_w2;
   int games_w12=games_w1+games_w2;
   
    printf("\nSocial Media             :%d      Minutes in Two Weeks\nYouTube                  :%d      Minutes in Two Weeks\nGames                    :%d      Minutes in Two Weeks",social_media_w12, youtube_w12, games_w12);
    printf("\n-----------------------------------------------------\n");
 
    double w1_daily_average=(double)w1_total/7;
    double w2_daily_average=(double)w2_total/7;
    double w12_daily_average=(double)w12_total/14;

    printf("WEEK 1 Daily Average Screen Time :%.2lf  Minutes / Day\n", w1_daily_average);
    printf("WEEK 2 Daily Average Screen Time :%.2lf  Minutes / Day\n", w2_daily_average);
    printf("Combined Two-Week Daily Average Screen Time :%.2lf  Minutes / Day\n", w12_daily_average);
    printf("\nRecommended Daily Screen Time Limit      :%d      Minutes / Day", daily_limit);
    printf("\n-----------------------------------------------------\n");

 if (daily_limit>=w1_daily_average){
     printf("\nYou are 'Within Recommended Limit' for WEEK1");
 }
 else
 printf("\nIMPORTANT! You are 'Above Recommended Limit' for WEEK1 !!!\n***********************************************");

 printf("\n-----------------------------------------------------\n");
  
 if (daily_limit>=w2_daily_average){
     printf("\nYou are 'Within Recommended Limit' for WEEK2");
 }
 else
 printf("\nIMPORTANT! You are 'Above Recommended Limit' for WEEK2 !!!\n***********************************************");

 printf("\n-----------------------------------------------------\n");
  
 if (daily_limit>=w12_daily_average){
     printf("\nYou are 'Within Recommended Limit' for Combined Two Weeks");
 }
 else
 printf("\nIMPORTANT! You are 'Above Recommended Limit' for Combined Two Weeks !!!\n***********************************************");

 printf("\n-----------------------------------------------------\n");
    return;
}

// 1-A Grade (70-100) — Dynamic Categories and Per-Category Trends
// - User specifies number of categories dynamically
// - User enters name of each category
// - Collect minutes for two weeks per category
// - Print detailed breakdown per week
// - Compare Week 1 vs Week 2 per category: Increase, Decrease, No change

void assessment1_a() {printf("Assessment 1 - A Grade (70-100) completed 15 March 2026 20:30 \n");

int n;
    printf("How many categories do you want to track? : "); scanf("%d", &n);

    char categories[50][50];
    int week1[50];
    int week2[50];
    int i;

    // category names
    for(i=0; i<n; i++){
        printf("Enter name of category %d :", i+1);
        scanf("%s", categories[i]);
    }

    // week1 values
    for(i=0; i<n; i++){
        printf("Enter minutes for %s (WEEK1):", categories[i]);
        scanf("%d", &week1[i]);
        
        if(week1[i] < 0){
            printf("Error! Negative numbers not allowed.\n");
            return;
        }
    }

    // week2 values
    for(i=0; i<n; i++){
        printf("Enter minutes for %s (WEEK2):", categories[i]);
        scanf("%d", &week2[i]);
        
        if(week2[i] < 0){
            printf("Error! Negative numbers not allowed.\n");
            return;
        }
    }

    printf("----------------------------------------------\n");

    int w1_total = 0;
    int w2_total = 0;

    for(i=0; i<n; i++){
        w1_total = w1_total + week1[i];
        w2_total = w2_total + week2[i];
    }

    printf("Total WEEK1 Screen Time : %d minutes\n", w1_total);
    printf("Total WEEK2 Screen Time : %d minutes\n", w2_total);

    double w1_avg = (double)w1_total / 7;
    double w2_avg = (double)w2_total / 7;

    printf("WEEK1 Daily Average : %.2lf minutes/day\n", w1_avg);
    printf("WEEK2 Daily Average : %.2lf minutes/day\n", w2_avg);

    printf("----------------------------------------------\n");

    // per-category breakdown
    for(i=0; i<n; i++){
        printf("%s : Week1=%d  Week2=%d\n", categories[i], week1[i], week2[i]);
    }

    printf("----------------------------------------------\n");

    // per-category trend
    for(i=0; i<n; i++){
        if(week2[i] > week1[i]){
            printf("%s : INCREASED\n", categories[i]);
        }
        else if(week2[i] < week1[i]){
            printf("%s : DECREASED\n", categories[i]);
        }
        else{
            printf("%s : NO CHANGE\n", categories[i]);
        }
    }

    printf("----------------------------------------------\n");

    return;
}

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 1
// Variables and operators felt straightforward at first.
// The real challenge was understanding data types — using double
// instead of int for daily averages to avoid losing decimal precision.
// Assessment 1-A was completed after learning arrays in class —
// a good example of how new knowledge unlocks harder problems.
// ------------------------------------------------------------------------------------------------------------------------

// ========================================================================================================================
// ASSESSMENT 2 — City Aquarium Ticketing
// Week 4 | Topic: Switch/Case
// ========================================================================================================================

// 2-D Grade (40-49) — Basic Ticket Price Calculation, Fixed Prices
// - Fixed values for zone and ticketType (no user input)
// - switch statement to determine ticket price
// - Display zone, ticket type and price

void assessment2_d() { printf("Assessment 2 - D Grade completed on 16 March 2026 15:47 \n");

    char zone = 'S';
    char ticketType = 'N';
    float ticketPrice = 0;

    switch(zone) {
        case 'S':
            if(ticketType == 'N')
                ticketPrice = 22;
            else if(ticketType == 'E')
                ticketPrice = 32;
            printf("Zone: Sharks\n");
            break;
        case 'R':
            if(ticketType == 'N')
                ticketPrice = 18;
            else if(ticketType == 'E')
                ticketPrice = 28;
            printf("Zone: Reefs\n");
            break;
        case 'P':
            if(ticketType == 'N')
                ticketPrice = 16;
            else if(ticketType == 'E')
                ticketPrice = 26;
            printf("Zone: Penguins\n");
            break;
        default:
            printf("Invalid zone\n");
            return;
    }

    if(ticketType == 'N')
        printf("Ticket Type: Standard\n");
    else if(ticketType == 'E')
        printf("Ticket Type: Express\n");

    printf("Ticket Price: £%.2f\n", ticketPrice);
}

// ============================================================
// ASSESSMENT 2 — COMMON FUNCTION
// getTicketPrice() — used in C, B and A grade
// Returns 1 if valid zone and ticketType, 0 if invalid
// ============================================================

int getTicketPrice(char zone, char ticketType, float *price) {

    switch(zone) {

        case 'S': case 's':
            if(ticketType == 'N' || ticketType == 'n') *price = 22;
            else if(ticketType == 'E' || ticketType == 'e') *price = 32;
            else return 0;
            break;

        case 'R': case 'r':
            if(ticketType == 'N' || ticketType == 'n') *price = 18;
            else if(ticketType == 'E' || ticketType == 'e') *price = 28;
            else return 0;
            break;

        case 'P': case 'p':
            if(ticketType == 'N' || ticketType == 'n') *price = 16;
            else if(ticketType == 'E' || ticketType == 'e') *price = 26;
            else return 0;
            break;

        default:
            return 0;
    }
    return 1;
}

// 2-C Grade (50-59) — User Input and Multi-Ticket Total
// - User inputs zone, ticket type and number of tickets
// - Validate ticket quantity > 0
// - Use getTicketPrice() to determine price per ticket
// - Display zone, ticket type, quantity and total cost

void assessment2_c() { printf("Assessment 2 - C Grade completed on  17 March 2026 10:09\n");

    char zone, ticketType;
    int tickets;
    float price, total;

    printf("\n[Grade C Demo]\n");
    printf("Enter Zone (S/R/P): ");         scanf(" %c", &zone);
    printf("Enter Ticket Type (N/E): ");    scanf(" %c", &ticketType);
    printf("Enter Number of Tickets: ");    scanf("%d", &tickets);

    if(tickets <= 0) {
        printf("Error: Tickets must be greater than 0.\n");
        return;
    }

    if(!getTicketPrice(zone, ticketType, &price)) {
        printf("Error: Invalid input.\n");
        return;
    }

    total = price * tickets;

    if(zone == 'S' || zone == 's') printf("\nZone: Sharks\n");
    else if(zone == 'R' || zone == 'r') printf("\nZone: Reefs\n");
    else if(zone == 'P' || zone == 'p') printf("\nZone: Penguins\n");

    if(ticketType == 'N' || ticketType == 'n') printf("Ticket Type: Standard\n");
    else if(ticketType == 'E' || ticketType == 'e') printf("Ticket Type: Express\n");
    
    printf("Tickets: %d\n", tickets);
    printf("Total Cost: £%.2f\n", total);
}

// 2-B Grade (60-69) — Bulk Discount and Optional Add-On
// - Bulk discount: tickets > 5 → 15% discount
// - Optional audio guide: £4.50 per ticket
// - Display total before discount, discount amount, add-on and final total
// - Input validation for all fields

void assessment2_b() {printf("Assessment 2 - B Grade completed on 18 March 2026 09:19\n");

    char zone, ticketType, audio;
    int tickets;
    float price, totalBefore, discount = 0, addon = 0, finalTotal;

    printf("Enter Zone (S/R/P): ");         scanf(" %c", &zone);
    printf("Enter Ticket Type (N/E): ");    scanf(" %c", &ticketType);
    printf("Enter Number of Tickets: ");    scanf("%d", &tickets);

    if(tickets <= 0) {
        printf("Error: Tickets must be greater than 0.\n");
        return;
    }

    if(!getTicketPrice(zone, ticketType, &price)) {
        printf("Error: Invalid input.\n");
        return;
    }

    totalBefore = price * tickets;

    if(tickets > 5) {
        discount = totalBefore * 0.15;
    }

    printf("Audio Guide? (y/n): ");         scanf(" %c", &audio);

    if(audio == 'y' || audio == 'Y') {
        addon = 4.50 * tickets;
    }

    finalTotal = totalBefore - discount + addon;

    printf("\n--- Summary ---\n");

    // Print full zone name instead of just the letter
    if(zone == 'S' || zone == 's') printf("Zone: Sharks\n");
    else if(zone == 'R' || zone == 'r') printf("Zone: Reefs\n");
    else if(zone == 'P' || zone == 'p') printf("Zone: Penguins\n");

    // Print full ticket type name instead of just the letter
    if(ticketType == 'N' || ticketType == 'n') printf("Ticket Type: Standard\n");
    else if(ticketType == 'E' || ticketType == 'e') printf("Ticket Type: Express\n");

    printf("Tickets: %d\n", tickets);

    printf("Total Before Discount: £%.2f\n", totalBefore);
    printf("Bulk Discount (15%%): -£%.2f\n", discount);
    printf("Add-on Cost: £%.2f\n", addon);
    printf("Final Total: £%.2f\n", finalTotal);
}

// ============================================================
// ASSESSMENT 2 — HELPER FUNCTION
// viewPrices() — displays the full ticket price table
// Used in A grade menu — Option 2
// ============================================================

void viewPrices() {

    printf("\n--- Ticket Prices ---\n");
    printf("Sharks:   Standard £22 | Express £32\n");
    printf("Reefs:    Standard £18 | Express £28\n");
    printf("Penguins: Standard £16 | Express £26\n");
}

// 2-A Grade (70-100) — Menu-Driven System
// - Menu with switch: Book Tickets, View Prices, Exit
// - Loop repeats until user selects Exit
// - Input validation for all inputs
// - Calls assessment2_b() for booking, viewPrices() for price table

void assessment2_a() { printf("Assessment 2 - A Grade completed on 19 March 2026 08:55\n"); 

    int choice;
    do {
        printf("\n--- City Aquarium Ticketing ---\n");
        printf("1. Book Tickets\n");
        printf("2. View Ticket Prices\n");
        printf("3. Exit\n");
        printf("Enter choice: ");       scanf("%d", &choice);

        switch(choice) {

            case 1:
                assessment2_b();
                break;

            case 2:
                viewPrices();
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 3);
}

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 2
// switch/case was new territory for me.
// The most challenging part was writing getTicketPrice() —
// understanding that a function can return an int (1 or 0)
// and using a pointer (*price) to pass data back was my
// first real encounter with pointers before the topic was covered.
// The menu-driven A grade required combining everything learned so far.
// ------------------------------------------------------------------------------------------------------------------------

// ========================================================================================================================
// ASSESSMENT 3 — Hydration Tracker Loop Challenge
// Week 5 | Topic: Conversions and Loops
// ========================================================================================================================

// 3-D Grade (40-49) — Basic Conversion
// - User inputs ml for one day
// - Convert to litres and cups
// - Display results

void assessment3_d() { printf("Assessment 3 - D Grade completed on 20 March 2026 09:08\n");

float ml;
    float litres;
    float cups;

    printf("Enter water intake for today (ml): ");      scanf("%f", &ml);

    // ml to litres conversion
    litres = ml / 1000;

   // ml to cups conversion
    cups = ml / 240;

    printf("Litres: %.2f L\n", litres);
    printf("Cups (240 ml): %.2f cups\n", cups);
}

// 3-C Grade (50-59) — Multi-Day Tracking
// - Loop to track multiple days
// - User enters ml for each day
// - Display daily litres and cups after each entry
// - On exit, show total days tracked and total litres

void assessment3_c() { printf("Assessment 3 - C Grade completed on 21 March 2026 07:17\n"); 
float ml;
float litres;
float cups;

    char anotherDay = 'y';
    int totalDays = 0;
    float totalLitres = 0;

    while(anotherDay == 'y' || anotherDay == 'Y') {

        printf("\nEnter water intake for today (ml): ");    scanf("%f", &ml);

        litres = ml / 1000;
        cups = ml / 240;

        printf("Litres: %.2f L\n", litres);
        printf("Cups: %.2f cups\n", cups);

        totalLitres += litres;
        totalDays++;

        printf("Add another day? (y/n): ");                 scanf(" %c", &anotherDay);
    }
    printf("\nYou tracked %d days\n", totalDays);
    printf("Total: %.2f litres\n", totalLitres);
}

// 3-B Grade (60-69) — Multi-Type Tracking
// - Menu: add ml, bottles (500 ml each) or cups (240 ml each)
// - Convert all inputs to ml, update running totals
// - On exit, display total ml, total litres, entry count per type

void assessment3_b() { printf("Assessment 3 - B Grade completed on 22 March 2026 09:58\n"); 
    int choice;
    int quantity;
    float totalMl = 0;
    int bottleEntries = 0;
    int cupEntries = 0;
    int mlEntries = 0;
    char anotherEntry = 'y';

    while(anotherEntry == 'y' || anotherEntry == 'Y') {

        printf("\nWhat would you like to add?\n");
        printf("1: Millilitres\n");
        printf("2: Bottles\n");
        printf("3: Cups\n");
        printf("Enter choice: "); scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter millilitres: "); scanf("%d", &quantity);
            totalMl += quantity;
            mlEntries++;
            printf("Added %d ml\n", quantity);
        }

        else if(choice == 2) {
            printf("How many bottles? "); scanf("%d", &quantity);
            int mlAdded = quantity * 500;
            totalMl += mlAdded;
            bottleEntries++;
            printf("Added %d ml\n", mlAdded);
        }

        else if(choice == 3) {
            printf("How many cups? "); scanf("%d", &quantity);
            int mlAdded = quantity * 240;
            totalMl += mlAdded;
            cupEntries++;
            printf("Added %d ml\n", mlAdded);
        }

        else {
            printf("Invalid choice\n");
        }
        
        printf("Add another entry? (y/n): "); scanf(" %c", &anotherEntry);
    }
    printf("\nSummary:\n");
    printf("Total: %.0f ml (%.2f L)\n", totalMl, totalMl/1000);
    printf("Entries — Bottles: %d, Cups: %d, Millilitres: %d\n", bottleEntries, cupEntries, mlEntries);
}

// 3-A Grade (70-100) — Daily Goal and Environment Factor
// - User sets a daily hydration goal in litres
// - Environment factor affects daily target: Cool / Warm / Hot
// - After each entry, show progress as percentage of goal
// - On exit, per-day summary, overall totals, longest streak of meeting goal
// - Robust input validation for all inputs

void assessment3_a() { printf("Assessment 3 - A Grade completed on 23 March 2026 11:46\n");
    double goal;
    double adjustedGoal;
    int environment;

    // Daily tracking arrays
    double dailyMl[100];
    double dailyLitres[100];
    int dailyGoalMet[100];

    // Totals
    double totalMlAllDays = 0;
    double totalLitresAllDays = 0;

    // Streak tracking
    int currentStreak = 0;
    int longestStreak = 0;

    int totalTrackedDays = 0;
    char continueDay = 'y';

    // -----------------------------
    // INPUT: Daily goal
    // -----------------------------
    do {
        printf("\nEnter your daily hydration goal (litres): ");
        if (scanf("%lf", &goal) != 1 || goal <= 0) {
            printf("Invalid input. Please enter a positive number.\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    } while(1);

    // -----------------------------
    // INPUT: Environment factor
    // -----------------------------
    do {
        printf("\nSelect environment:\n");
        printf("1 Cool / Indoor\n");
        printf("2 Warm / Active\n");
        printf("3 Hot / Very Active\n");
        printf("Enter choice: ");

        if (scanf("%d", &environment) != 1 || environment < 1 || environment > 3) {
            printf("Invalid choice. Try again.\n");
            while(getchar() != '\n');
            continue;
        }
        break;
    } while(1);

    // Adjust goal
    if(environment == 2)
        adjustedGoal = goal * 1.10;
    else if(environment == 3)
        adjustedGoal = goal * 1.20;
    else
        adjustedGoal = goal;

    printf("Adjusted goal: %.2f litres\n", adjustedGoal);

    // -----------------------------
    // DAILY LOOP
    // -----------------------------
    while(continueDay == 'y' || continueDay == 'Y') {

        double todayMl = 0;

        // Input validation for daily ml
        do {
            printf("\nEnter water intake today (ml): ");
            if (scanf("%lf", &todayMl) != 1 || todayMl < 0) {
                printf("Invalid input. Please enter a non-negative number.\n");
                while(getchar() != '\n');
                continue;
            }
            break;
        } while(1);

        double litresToday = todayMl / 1000.0;
        double progress = (litresToday / adjustedGoal) * 100.0;

        printf("Progress today: %.2f%%\n", progress);

        // Goal check
        int metGoal = (litresToday >= adjustedGoal);
        if(metGoal) {
            printf("Goal reached today!\n");
            currentStreak++;
            if(currentStreak > longestStreak)
                longestStreak = currentStreak;
        } else {
            printf("Goal not reached.\n");
            currentStreak = 0;
        }

        // Save daily data
        dailyMl[totalTrackedDays] = todayMl;
        dailyLitres[totalTrackedDays] = litresToday;
        dailyGoalMet[totalTrackedDays] = metGoal;

        // Update totals
        totalMlAllDays += todayMl;
        totalLitresAllDays += litresToday;

        totalTrackedDays++;

        printf("Track another day? (y/n): ");
        scanf(" %c", &continueDay);
    }
    // -----------------------------
    // FINAL SUMMARY
    // -----------------------------
    printf("\n----- FINAL SUMMARY -----\n");
    printf("Total days tracked: %d\n", totalTrackedDays);

    printf("\nPer-day summary:\n");
    for(int i = 0; i < totalTrackedDays; i++) {
        printf("Day %d: %.2f ml (%.2f litres) — %s\n",
               i + 1,
               dailyMl[i],
               dailyLitres[i],
               dailyGoalMet[i] ? "Goal met" : "Goal not met");
    }

    printf("\nOverall total ml: %.2f\n", totalMlAllDays);
    printf("Overall total litres: %.2f\n", totalLitresAllDays);

    printf("Longest streak of meeting goal: %d days\n", longestStreak);
}

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 3
// First time writing a conversion program with user input.
// Simple but satisfying — ml to litres and cups in a few lines.
// C grade added the loop — tracking multiple days felt natural after D.
// B grade introduced a menu system for different input types — bottles, cups, ml.
// A grade was the most complex — arrays for daily tracking, input validation,
// streak calculation and environment factor all combined in one function.
// ------------------------------------------------------------------------------------------------------------------------


// ========================================================================================================================
// ASSESSMENT 4 — Energy Usage Logger
// Week 6 | Topic: Loops, Conditional Logic and Arrays
// ========================================================================================================================

// 4-D Grade (40-49) — Basic Input and Display
// - Ask user how many days to record (up to 30)
// - Create array and store each day's kWh reading
// - Menu option 1: display all readings
// - Menu option 2: calculate and display overall average
void assessment4_d() { printf("Assessment 4 - D Grade completed on 25 March 2026 10:14\n"); 

    int days;
    printf("How many days of energy usage do you want to record (1-30)? ");
    scanf("%d", &days);

    if (days < 1 || days > 30) {
        printf("Invalid number of days.\n");
        return;
    }

    float readings[30];

    // Input readings
    for (int i = 0; i < days; i++) {
        printf("Enter usage for day %d (kWh): ", i + 1);
        scanf("%f", &readings[i]);
    }

    int choice;
    printf("\nMenu:\n");
    printf("1. Display all readings\n");
    printf("2. Display average usage\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        for (int i = 0; i < days; i++) {
            printf("Day %d: %.2f kWh\n", i + 1, readings[i]);
        }
    }
    else if (choice == 2) {
        float sum = 0;
        for (int i = 0; i < days; i++) sum += readings[i];
        printf("Average usage: %.2f kWh\n", sum / days);
    }
    else {
        printf("Invalid choice.\n");
    }

}

// 4-C Grade (50-59) — Extended Menu with Loop
// - Complete all previous steps
// - Menu option 3: highest and lowest usage
// - Menu option 7: exit
// - Loop menu until user exits
// - Handle invalid menu choices gracefully
void assessment4_c() { printf("Assessment 4 - C Grade completed on 28 March 2026 21:15\n"); 

int days;
    printf("How many days of energy usage do you want to record (1-30)? ");
    scanf("%d", &days);

    if (days < 1 || days > 30) {
        printf("Invalid number of days.\n");
        return;
    }

    float readings[30];

    for (int i = 0; i < days; i++) {
        printf("Enter usage for day %d (kWh): ", i + 1);
        scanf("%f", &readings[i]);
    }

    int running = 1;
    while (running) {

        int choice;
        printf("\nMenu:\n");
        printf("1. Display all readings\n");
        printf("2. Display average usage\n");
        printf("3. Highest & lowest usage\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < days; i++)
                printf("Day %d: %.2f kWh\n", i + 1, readings[i]);
        }
        else if (choice == 2) {
            float sum = 0;
            for (int i = 0; i < days; i++) sum += readings[i];
            printf("Average usage: %.2f kWh\n", sum / days);
        }
        else if (choice == 3) {
            float min = readings[0], max = readings[0];
            for (int i = 1; i < days; i++) {
                if (readings[i] < min) min = readings[i];
                if (readings[i] > max) max = readings[i];
            }
            printf("Lowest: %.2f kWh\n", min);
            printf("Highest: %.2f kWh\n", max);
        }
        else if (choice == 7) {
            running = 0;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }

}
}

// 4-B Grade (60-69) — Fixed Array and Threshold Analysis
// - Complete all previous steps
// - Refactor to fixed array size (50) with sentinel value
// - Menu option 4: count days above/below user-defined threshold
// - Menu option 5: weekly average (every 7 entries = 1 week)
void assessment4_b() { printf("Assessment 4 - B Grade completed on 29 March 2026 15:51\n"); 

    float readings[50];
    int count = 0;
    const float SENTINEL = -1.0f;

    // Initialise array with sentinel
    for (int i = 0; i < 50; i++) readings[i] = SENTINEL;

    int days;
    printf("How many days to record (1-30)? ");
    scanf("%d", &days);

    if (days < 1 || days > 30) {
        printf("Invalid number.\n");
        return;
    }

    for (int i = 0; i < days; i++) {
        printf("Day %d usage (kWh): ", i + 1);
        scanf("%f", &readings[i]);
        count++;
    }

    int running = 1;
    while (running) {

        int choice;
        printf("\nMenu:\n");
        printf("1. Display all readings\n");
        printf("2. Display average usage\n");
        printf("3. Highest & lowest usage\n");
        printf("4. Count above/below threshold\n");
        printf("5. Weekly averages\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < count; i++)
                printf("Day %d: %.2f kWh\n", i + 1, readings[i]);
        }
        else if (choice == 2) {
            float sum = 0;
            for (int i = 0; i < count; i++) sum += readings[i];
            printf("Average: %.2f kWh\n", sum / count);
        }
        else if (choice == 3) {
            float min = readings[0], max = readings[0];
            for (int i = 1; i < count; i++) {
                if (readings[i] < min) min = readings[i];
                if (readings[i] > max) max = readings[i];
            }
            printf("Lowest: %.2f\nHighest: %.2f\n", min, max);
        }
        else if (choice == 4) {
            float threshold;
            printf("Enter threshold: ");
            scanf("%f", &threshold);

            int above = 0, below = 0;
            for (int i = 0; i < count; i++) {
                if (readings[i] > threshold) above++;
                else below++;
            }
            printf("Above: %d days\nBelow/equal: %d days\n", above, below);
        }
        else if (choice == 5) {
            int week = 1;
            int i = 0;
            while (i < count) {
                float sum = 0;
                int daysInWeek = 0;

                for (int j = 0; j < 7 && i < count; j++, i++) {
                    sum += readings[i];
                    daysInWeek++;
                }

                printf("Week %d average: %.2f kWh\n", week, sum / daysInWeek);
                week++;
            }
        }
        else if (choice == 7) {
            running = 0;
        }
        else {
            printf("Invalid choice.\n");
        }
    }


}

// 4-A Grade (70-100) — Reverse Display and Pointers
// - Complete all previous steps
// - Menu option 6: reverse readings in relative-day format
// - Use pointers to traverse, reverse, find highest/lowest
// - Portfolio: explain how pointers work and why useful here
void assessment4_a() { printf("Assessment 4 - A Grade completed on 30 March 2026 10:11\n"); 

    float readings[50];
    int count = 0;
    const float SENTINEL = -1.0f;

    for (int i = 0; i < 50; i++) readings[i] = SENTINEL;

    int days;
    printf("How many days to record (1-30)? ");
    scanf("%d", &days);

    for (int i = 0; i < days; i++) {
        printf("Day %d usage: ", i + 1);
        scanf("%f", &readings[i]);
        count++;
    }

    int running = 1;
    while (running) {

        int choice;
        printf("\nMenu:\n");
        printf("1. Display all readings (pointer)\n");
        printf("2. Average usage\n");
        printf("3. Min/Max (pointer)\n");
        printf("4. Threshold count\n");
        printf("5. Weekly averages\n");
        printf("6. Reverse display (pointer)\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            float *p = readings;
            for (int i = 0; i < count; i++)
                printf("Day %d: %.2f kWh\n", i + 1, *(p + i));
        }
        else if (choice == 2) {
            float sum = 0;
            for (int i = 0; i < count; i++) sum += readings[i];
            printf("Average: %.2f\n", sum / count);
        }
        else if (choice == 3) {
            float *p = readings;
            float min = *p, max = *p;

            for (int i = 1; i < count; i++) {
                float v = *(p + i);
                if (v < min) min = v;
                if (v > max) max = v;
            }

            printf("Lowest: %.2f\nHighest: %.2f\n", min, max);
        }
        else if (choice == 4) {
            float threshold;
            printf("Threshold: ");
            scanf("%f", &threshold);

            int above = 0, below = 0;
            for (int i = 0; i < count; i++) {
                if (readings[i] > threshold) above++;
                else below++;
            }
            printf("Above: %d\nBelow/equal: %d\n", above, below);
        }
        else if (choice == 5) {
            int week = 1;
            int i = 0;
            while (i < count) {
                float sum = 0;
                int daysInWeek = 0;

                for (int j = 0; j < 7 && i < count; j++, i++) {
                    sum += readings[i];
                    daysInWeek++;
                }

                printf("Week %d average: %.2f\n", week, sum / daysInWeek);
                week++;
            }
        }
        else if (choice == 6) {
            float *p = readings + (count - 1);

            for (int i = 0; i < count; i++) {
                if (i == 0)
                    printf("Today: %.2f kWh\n", *(p - i));
                else if (i == 1)
                    printf("Yesterday: %.2f kWh\n", *(p - i));
                else
                    printf("%d days ago: %.2f kWh\n", i, *(p - i));
            }
        }
        else if (choice == 7) {
            running = 0;
        }
        else {
            printf("Invalid choice.\n");
        }
    }
}

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal Note — Assessment 4
// This assessment is working with arrays, menus, sentinel values,
// weekly averages, and pointer-based traversal. Each grade added new logic:
// D grade introduced arrays and averages,
// C grade added looping menus and min/max,
// B grade introduced sentinel values and weekly averages,
// A grade required pointer logic and reverse-day formatting.
// This was a challenging but rewarding progression.
// ------------------------------------------------------------------------------------------------------------------------

// ========================================================================================================================
// ASSESSMENT 4-NEW — Calendar Printer
// Week 6 | Topic: Loops, Conditional Logic and Calendar Formatting
// (Brief updated on 31 March 2026 — replaces original Assessment 4)
// ========================================================================================================================

// 4N-D Grade (40-49) — Basic Calendar Grid
// - Prompt user for month number (1-12) and starting weekday (1=Mon, 7=Sun)
// - Use a fixed number of days (e.g. 30) — layout only, not real month lengths
// - Print calendar grid with Mon-Sun headers and day numbers beneath
// - Show neat alignment for weeks
void assessment4n_d() { printf("Assessment 4-NEW - D Grade completed on 02 April 2026 15:43\n"); 

    int month;
    int startWeekday;
    int fixedDays = 30; // fixed length for layout

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter starting weekday (1=Mon, 7=Sun): ");
    scanf("%d", &startWeekday);

    printf("\nCalendar for month %d (fixed %d days)\n", month, fixedDays);
    printf("Mon Tue Wed Thu Fri Sat Sun\n");

    int day;
    int weekdayCounter = 1;

    // print initial spaces
    for(int i = 1; i < startWeekday; i++) {
        printf("    ");
        weekdayCounter++;
    }

    // print days
    for(day = 1; day <= fixedDays; day++) {
        printf("%3d ", day);

        if(weekdayCounter == 7) {
            printf("\n");
            weekdayCounter = 1;
        } else {
            weekdayCounter++;
        }
    }
    printf("\n");
}


// Helper: get days in month for 2025 (not leap year)
int getDaysInMonth2025(int month) {
    switch(month) {
        case 1:  return 31; // Jan
        case 2:  return 28; // Feb
        case 3:  return 31; // Mar
        case 4:  return 30; // Apr
        case 5:  return 31; // May
        case 6:  return 30; // Jun
        case 7:  return 31; // Jul
        case 8:  return 31; // Aug
        case 9:  return 30; // Sep
        case 10: return 31; // Oct
        case 11: return 30; // Nov
        case 12: return 31; // Dec
        default: return 0;
    }
}

// Helper: print month name (simple)
void printMonthName(int month) {
    switch(month) {
        case 1:  printf("January 2025\n"); break;
        case 2:  printf("February 2025\n"); break;
        case 3:  printf("March 2025\n"); break;
        case 4:  printf("April 2025\n"); break;
        case 5:  printf("May 2025\n"); break;
        case 6:  printf("June 2025\n"); break;
        case 7:  printf("July 2025\n"); break;
        case 8:  printf("August 2025\n"); break;
        case 9:  printf("September 2025\n"); break;
        case 10: printf("October 2025\n"); break;
        case 11: printf("November 2025\n"); break;
        case 12: printf("December 2025\n"); break;
        default: printf("Month 2025\n"); break;
    }
}

// 4N-C Grade (50-59) — Correct Month Length and Validation
// - Complete all previous steps
// - Determine correct number of days for selected month in 2025
// - Print calendar using correct month length
// - Count and display number of Saturdays and Sundays
// - Add basic input validation for month and weekday values
void assessment4n_c() { printf("Assessment 4-NEW - C Grade completed on 04 April 2026 19:53\n"); 

    int month;
    int startWeekday;
    int daysInMonth;
    int saturdays = 0;
    int sundays = 0;

    // month input validation
    do {
        printf("Enter month number (1-12): ");
        if (scanf("%d", &month) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        if (month < 1 || month > 12) {
            printf("Month must be between 1 and 12.\n");
            continue;
        }
        break;
    } while(1);

    // weekday input validation
    do {
        printf("Enter starting weekday (1=Mon, 7=Sun): ");
        if (scanf("%d", &startWeekday) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        if (startWeekday < 1 || startWeekday > 7) {
            printf("Weekday must be between 1 and 7.\n");
            continue;
        }
        break;
    } while(1);

    daysInMonth = getDaysInMonth2025(month);

    printf("\n");
    printMonthName(month);
    printf("Mon Tue Wed Thu Fri Sat Sun\n");

    int weekdayCounter = 1;

    // initial spaces
    for(int i = 1; i < startWeekday; i++) {
        printf("    ");
        weekdayCounter++;
    }

    // print days and count weekends
    for(int day = 1; day <= daysInMonth; day++) {
        printf("%3d ", day);

        // weekdayCounter shows current column (1=Mon,...,7=Sun)
        if(weekdayCounter == 6) {
            saturdays++;
        } else if(weekdayCounter == 7) {
            sundays++;
        }

        if(weekdayCounter == 7) {
            printf("\n");
            weekdayCounter = 1;
        } else {
            weekdayCounter++;
        }
    }
    printf("\n\nTotal Saturdays: %d\n", saturdays);
    printf("Total Sundays: %d\n", sundays);
}


// 4N-B Grade (60-69) — Start Date Calculation
// - Complete all previous steps
// - Stop asking user for starting weekday — calculate it automatically for 2025
// - Compute weekday for 1st of selected month using modular arithmetic
//   (accumulate days from 1 Jan 2025 which is a Wednesday, then take modulo 7)
// - Display derived weekday and render calendar accordingly
// - Portfolio: include detailed explanation of calculation approach
void assessment4n_b() { printf("Assessment 4-NEW - B Grade coming soon\n"); }

// 4N-A Grade (70-100) — Calendar Navigation
// - Complete all previous steps
// - Prompt user to enter a specific date and highlight it in the calendar
// - Provide navigation: after printing chosen month, offer previous/next month of 2025
// - Keep automatic first-day calculation for navigated months
// - Robust input validation for all user inputs
// - Portfolio: detailed explanation of logic and problems encountered
void assessment4n_a() { printf("Assessment 4-NEW - A Grade coming soon\n"); }

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 4-NEW
// ------------------------------------------------------------------------------------------------------------------------

// ========================================================================================================================
// ASSESSMENT 5 — Temperature Logger
// Week 8 | Topic: Arrays, Loops, Pointers
// ========================================================================================================================

// 5-D Grade (40-49) — Basic Array and Average
// - Ask user how many days to record temperature readings
// - Store readings in array of appropriate size
// - Menu option 1: display all temperature readings
// - Menu option 2: calculate and display average temperature
void assessment5_d() { printf("Assessment 5 - D Grade coming soon\n"); }

// 5-C Grade (50-59) — Extended Menu with Loop
// - Complete all previous steps
// - Menu option 3: highest and lowest temperature
// - Menu option 7: exit
// - Run menu in a loop until user exits
// - Handle invalid menu choices gracefully
void assessment5_c() { printf("Assessment 5 - C Grade coming soon\n"); }

// 5-B Grade (60-69) — Fixed Array and Threshold Analysis
// - Complete all previous steps
// - Refactor to fixed array size (50) with sentinel value (-1)
// - Menu option 4: count days above/below user-defined threshold
// - Menu option 5: calculate weekly average temperature (every 7 entries = 1 week)
// - Explain program logic via in-code comments or portfolio
void assessment5_b() { printf("Assessment 5 - B Grade coming soon\n"); }

// 5-A Grade (70-100) — Reverse Display and Pointers
// - Complete all previous steps
// - Menu option 6: reverse temperature readings — format: Today, Yesterday, 2 days ago...
// - Research and explain how pointers work and why useful here
// - Rewrite part of program using pointers instead of array indexing:
//   traverse the array, reverse the array, find highest/lowest temperature
void assessment5_a() { printf("Assessment 5 - A Grade coming soon\n"); }

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 5
// ------------------------------------------------------------------------------------------------------------------------

// ========================================================================================================================
// ASSESSMENT 6 — Book Organizer
// Week 9 | Topic: Sorting Algorithms and String Handling
// ========================================================================================================================

// 6-D Grade (40-49) — Basic Display Loop
// - Create string array with 8 book titles in mixed alphabetical order
// - Use a loop to print on each iteration:
//   Current Title: "<title>"
//   First Title:   "<title_at_index_0>"
// - No sorting or manipulation required
void assessment6_d() { printf("Assessment 6 - D Grade coming soon\n"); }

// 6-C Grade (50-59) — Single Pass to Front
// - Complete all previous steps
// - Modify loop to perform single pass putting earliest title at index 0
//   (case-insensitive alphabetical comparison)
// - Compare each title with index 0 — if earlier alphabetically, swap
// - Print playlist before and after the loop
void assessment6_c() { printf("Assessment 6 - C Grade coming soon\n"); }

// 6-B Grade (60-69) — Full Alphabetical Sort
// - Complete all previous steps
// - Implement nested loop to sort entire list alphabetically
//   (swap strings with first unsorted element on each pass)
// - Print playlist before and after sorting
// - Portfolio: explain how the sorting works
void assessment6_b() { printf("Assessment 6 - B Grade coming soon\n"); }

// 6-A Grade (70-100) — Delete and Alternative Sort
// - Complete all previous steps
// - Allow user to enter a book title to delete from the list
//   (if found: remove and shift remaining titles; if not found: display message)
// - Implement a different sorting algorithm (e.g. Bubble Sort)
// - Compare old algorithm with new one in terms of logic and performance
// - Portfolio: thorough explanation required for highest grade
void assessment6_a() { printf("Assessment 6 - A Grade coming soon\n"); }

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 6
// ------------------------------------------------------------------------------------------------------------------------

// ========================================================================================================================
// ASSESSMENT 7 — Media Lab Equipment Loan Manager
// Week 11 | Topic: Functions and File Handling
// ========================================================================================================================

// 7-D Grade (40-49) — Basic Struct and File I/O
// - Define struct Item with: id (int), assetTag (string), status (char A=Available/L=Loaned)
// - Create data file (loans.txt) if it does not exist
// - addItem()     → get id, assetTag, status from user and append to file
// - displayItems() → read all records from file and print in tidy format
// - Demonstrate adding 3+ items and displaying the list
void assessment7_d() { printf("Assessment 7 - D Grade coming soon\n"); }

// 7-C Grade (50-59) — Parameters and Search
// - Refactor: addItem(int id, char assetTag[], char status[]) with parameters
// - Keep displayItems() with no parameters
// - Add searchItemById(int id) — read file and display matching record or not found message
// - Duplicate-ID check: addItem() refuses to add if id already exists
void assessment7_c() { printf("Assessment 7 - C Grade coming soon\n"); }

// 7-B Grade (60-69) — Return Values and Update
// - Refactor functions to use return values:
//   int addItem(...)          → return 1 if added, 0 if duplicate
//   int searchItemById(int id) → return record index if found, -1 otherwise
// - Implement int updateItem(int id, const char newAssetTag[], const char newStatus[])
//   read all records into memory, apply update, rewrite file
//   return 1 if successful, 0 if not found
void assessment7_b() { printf("Assessment 7 - B Grade coming soon\n"); }

// 7-A Grade (70-100) — Delete and File Persistence
// - Implement int deleteItem(int id)
//   load all records, remove target, overwrite file — return 1 if deleted, 0 if not found
// - On program start: load data from file into in-memory array
// - Menu: add / view / search / update / delete / save / exit
// - On save or exit: write current in-memory data to file
// - Portfolio: note explaining local vs global scope in implementation
void assessment7_a() { printf("Assessment 7 - A Grade coming soon\n"); }

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 7 
// ------------------------------------------------------------------------------------------------------------------------

// ========================================================================================================================
// MAIN MENU
// ========================================================================================================================
int main() {

    int assessment, grade;

    printf("\n==================================================================\n");
    printf("  QH0305 — PROBLEM SOLVING\n");
    printf("  Assessment Portfolio\n");
    printf("  Mehmet Kaygusuz\n");
    printf("==================================================================\n");
    printf("\n--- SELECT ASSESSMENT ---\n");
    printf(" 1  - Assessment 1 (Week 3)     : Weekly Screen-Time Tracker\n");
    printf(" 2  - Assessment 2 (Week 4)     : City Aquarium Ticketing\n");
    printf(" 3  - Assessment 3 (Week 5)     : Hydration Tracker Loop Challenge\n");
    printf(" 4  - Assessment 4 (Week 6)     : Energy Usage Logger\n");
    printf(" 8  - Assessment 4 (Week 6) NEW : Calendar Printer\n");
    printf(" 5  - Assessment 5 (Week 8)     : Temperature Logger\n");
    printf(" 6  - Assessment 6 (Week 9)     : Book Organizer\n");
    printf(" 7  - Assessment 7 (Week 11)    : Media Lab Equipment Loan Manager\n");
    printf("\n 0  - Exit\n");
    printf("==================================================================\n");
    printf("Your choice: ");
    scanf("%d", &assessment);

    if (assessment == 0) {
        printf("Exiting...\n");
        return 0;
    }

    if (assessment < 1 || assessment > 8) {
        printf("Invalid choice\n");
        return 0;
    }

    printf("\n--- SELECT GRADE BAND ---\n");
    printf(" 1  - D Grade (40-49)\n");
    printf(" 2  - C Grade (50-59)\n");
    printf(" 3  - B Grade (60-69)\n");
    printf(" 4  - A Grade (70-100)\n");
    printf("\n 0  - Back\n");
    printf("-------------------------\n");
    printf("Your choice: ");
    scanf("%d", &grade);

    if (grade == 0) { printf("Going back...\n"); return 0; }

    if      (assessment == 1 && grade == 1) assessment1_d();
    else if (assessment == 1 && grade == 2) assessment1_c();
    else if (assessment == 1 && grade == 3) assessment1_b();
    else if (assessment == 1 && grade == 4) assessment1_a();

    else if (assessment == 2 && grade == 1) assessment2_d();
    else if (assessment == 2 && grade == 2) assessment2_c();
    else if (assessment == 2 && grade == 3) assessment2_b();
    else if (assessment == 2 && grade == 4) assessment2_a();

    else if (assessment == 3 && grade == 1) assessment3_d();
    else if (assessment == 3 && grade == 2) assessment3_c();
    else if (assessment == 3 && grade == 3) assessment3_b();
    else if (assessment == 3 && grade == 4) assessment3_a();

    else if (assessment == 4 && grade == 1) assessment4_d();
    else if (assessment == 4 && grade == 2) assessment4_c();
    else if (assessment == 4 && grade == 3) assessment4_b();
    else if (assessment == 4 && grade == 4) assessment4_a();

    else if (assessment == 8 && grade == 1) assessment4n_d();
    else if (assessment == 8 && grade == 2) assessment4n_c();
    else if (assessment == 8 && grade == 3) assessment4n_b();
    else if (assessment == 8 && grade == 4) assessment4n_a();

    else if (assessment == 5 && grade == 1) assessment5_d();
    else if (assessment == 5 && grade == 2) assessment5_c();
    else if (assessment == 5 && grade == 3) assessment5_b();
    else if (assessment == 5 && grade == 4) assessment5_a();

    else if (assessment == 6 && grade == 1) assessment6_d();
    else if (assessment == 6 && grade == 2) assessment6_c();
    else if (assessment == 6 && grade == 3) assessment6_b();
    else if (assessment == 6 && grade == 4) assessment6_a();

    else if (assessment == 7 && grade == 1) assessment7_d();
    else if (assessment == 7 && grade == 2) assessment7_c();
    else if (assessment == 7 && grade == 3) assessment7_b();
    else if (assessment == 7 && grade == 4) assessment7_a();

    else printf("Invalid selection\n");

    return 0;
}
//====================================================================================================================================================================================
// The End :) 1923 C* — Thank you Mr. Dervishy — for your time, effort and teaching. Every concept in this file was learned in your class.
//====================================================================================================================================================================================
