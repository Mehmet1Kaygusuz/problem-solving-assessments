// Started this portfolio on 08 March 2026
// Each assessment completed through personal study outside of class
// All code written manually — no copy-paste, no AI generation
// Total lines of code          : 2958
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
#include <ctype.h>

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

// Helper: compute weekday for 1st of given month in 2025
// 1 = Monday, ..., 7 = Sunday
// 1 Jan 2025 is Wednesday => weekday = 3
int getFirstWeekday2025(int month) {
    int baseWeekday = 3; // 1 Jan 2025 = Wednesday
    int totalDays = 0;

    for(int m = 1; m < month; m++) {
        totalDays += getDaysInMonth2025(m);
    }

    int weekday = ((baseWeekday - 1) + (totalDays % 7)) % 7 + 1;
    return weekday;
}

// 4N-B Grade (60-69) — Start Date Calculation
// - Complete all previous steps
// - Stop asking user for starting weekday — calculate it automatically for 2025
// - Compute weekday for 1st of selected month using modular arithmetic
//   (accumulate days from 1 Jan 2025 which is a Wednesday, then take modulo 7)
// - Display derived weekday and render calendar accordingly
// - Portfolio: include detailed explanation of calculation approach
void assessment4n_b() { printf("Assessment 4-NEW - B Grade complete on 05 April 2026 17:36\n"); 

    int month;
    int daysInMonth;
    int startWeekday;
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

    daysInMonth = getDaysInMonth2025(month);
    startWeekday = getFirstWeekday2025(month);

    printf("\n");
    printMonthName(month);
    printf("1st day weekday (1=Mon, 7=Sun): %d\n\n", startWeekday);
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

// 4N-A Grade (70-100) — Calendar Navigation
// - Complete all previous steps
// - Prompt user to enter a specific date and highlight it in the calendar
// - Provide navigation: after printing chosen month, offer previous/next month of 2025
// - Keep automatic first-day calculation for navigated months
// - Robust input validation for all user inputs
// - Portfolio: detailed explanation of logic and problems encountered

void printCalendarWithHighlight(int month, int highlightDay) {
    int daysInMonth = getDaysInMonth2025(month);
    int startWeekday = getFirstWeekday2025(month);

    printMonthName(month);
    printf("Mon Tue Wed Thu Fri Sat Sun\n");

    int weekdayCounter = 1;

    // initial spaces
    for(int i = 1; i < startWeekday; i++) {
        printf("    ");
        weekdayCounter++;
    }

    for(int day = 1; day <= daysInMonth; day++) {
        if(day == highlightDay) {
            // highlight with brackets
            printf("[%2d]", day);
        } else {
            printf("%3d ", day);
        }

        if(weekdayCounter == 7) {
            printf("\n");
            weekdayCounter = 1;
        } else {
            weekdayCounter++;
        }
    }
    printf("\n");
}

void assessment4n_a() { printf("Assessment 4 - A Grade completed on 06 April 2026 15:02\n");

    int month;
    int highlightDay;
    int menuChoice;

    // initial month input
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

    // date input with validation
    int daysInMonth = getDaysInMonth2025(month);
    do {
        printf("Enter a date to highlight (1-%d): ", daysInMonth);
        if (scanf("%d", &highlightDay) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n');
            continue;
        }
        if (highlightDay < 1 || highlightDay > daysInMonth) {
            printf("Day must be between 1 and %d.\n", daysInMonth);
            continue;
        }
        break;
    } while(1);

    // main navigation loop
    do {
        printf("\n---------------------------------\n");
        printCalendarWithHighlight(month, highlightDay);
        printf("---------------------------------\n");

        printf("Navigation menu:\n");
        printf("1 - Previous month\n");
        printf("2 - Next month\n");
        printf("3 - Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &menuChoice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n');
            continue;
        }

        if (menuChoice == 1) {
            if (month == 1) {
                printf("Already at January 2025. Cannot go to previous year.\n");
            } else {
                month--;
                daysInMonth = getDaysInMonth2025(month);

                // ask new highlight day for new month
                do {
                    printf("Enter a date to highlight for this month (1-%d): ", daysInMonth);
                    if (scanf("%d", &highlightDay) != 1) {
                        printf("Invalid input. Please enter a number.\n");
                        while(getchar() != '\n');
                        continue;
                    }
                    if (highlightDay < 1 || highlightDay > daysInMonth) {
                        printf("Day must be between 1 and %d.\n", daysInMonth);
                        continue;
                    }
                    break;
                } while(1);
            }
        } else if (menuChoice == 2) {
            if (month == 12) {
                printf("Already at December 2025. Cannot go to next year.\n");
            } else {
                month++;
                daysInMonth = getDaysInMonth2025(month);

                do {
                    printf("Enter a date to highlight for this month (1-%d): ", daysInMonth);
                    if (scanf("%d", &highlightDay) != 1) {
                        printf("Invalid input. Please enter a number.\n");
                        while(getchar() != '\n');
                        continue;
                    }
                    if (highlightDay < 1 || highlightDay > daysInMonth) {
                        printf("Day must be between 1 and %d.\n", daysInMonth);
                        continue;
                    }
                    break;
                } while(1);
            }
        } else if (menuChoice == 3) {
            printf("Exiting calendar navigation.\n");
            break;
        } else {
            printf("Invalid menu choice. Please select 1, 2 or 3.\n");
        }

    } while(1);
}


// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 4-NEW
// First time printing a structured calendar layout using loops and modular arithmetic.
// D grade focused on a simple grid with a fixed number of days and a user-chosen start weekday.
// C grade added real month lengths for 2025, input validation, and Saturday/Sunday counting.
// B grade removed the manual weekday input — modular arithmetic from 1 Jan 2025 (Wednesday)
// was used to calculate the first weekday of any month automatically.
// A grade introduced month navigation and date highlighting, with helper functions to keep
// the code readable and well-structured at foundation level.
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
void assessment5_d() {
    printf("Assessment 5 - D Grade completed on 01 May 2026 20:44\n");

    int days;
    printf("How many days do you want to record (1-30)? ");
    scanf("%d", &days);

    if (days < 1 || days > 30) {
        printf("Invalid number of days.\n");
        return;
    }

    float temps[30];
    for (int i = 0; i < days; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temps[i]);
    }

    int choice;
    printf("\nMenu:\n");
    printf("1. Display all temperature readings\n");
    printf("2. Calculate and display average temperature\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nAll temperature readings:\n");
        for (int i = 0; i < days; i++) {
            printf("Day %d: %.2f C\n", i + 1, temps[i]);
        }
    } else if (choice == 2) {
        float sum = 0;
        for (int i = 0; i < days; i++) {
            sum += temps[i];
        }
        float avg = sum / days;
        printf("\nAverage temperature: %.2f C\n", avg);
    } else {
        printf("Invalid choice (D grade only supports options 1 and 2).\n");
    }
}



// 5-C Grade (50-59) — Extended Menu with Loop
// - Complete all previous steps
// - Menu option 3: highest and lowest temperature
// - Menu option 7: exit
// - Run menu in a loop until user exits
// - Handle invalid menu choices gracefully
void assessment5_c() {
    printf("Assessment 5 - C Grade completed on 02 May 2026 18:17\n");

    int days;
    printf("How many days do you want to record (1-30)? ");
    if (scanf("%d", &days) != 1 || days < 1 || days > 30) {
        printf("Invalid number of days.\n");
        return;
    }

    float temps[30];
    for (int i = 0; i < days; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temps[i]);
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Display all temperature readings\n");
        printf("2. Calculate and display average temperature\n");
        printf("3. Find highest and lowest temperature\n");
        printf("7. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            printf("\nAll temperature readings:\n");
            for (int i = 0; i < days; i++) {
                printf("Day %d: %.2f C\n", i + 1, temps[i]);
            }
        } else if (choice == 2) {
            float sum = 0;
            for (int i = 0; i < days; i++) {
                sum += temps[i];
            }
            float avg = sum / days;
            printf("\nAverage temperature: %.2f C\n", avg);
        } else if (choice == 3) {
            float min = temps[0];
            float max = temps[0];
            for (int i = 1; i < days; i++) {
                if (temps[i] < min) min = temps[i];
                if (temps[i] > max) max = temps[i];
            }
            printf("\nLowest temperature: %.2f C\n", min);
            printf("Highest temperature: %.2f C\n", max);
        } else if (choice == 7) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid menu choice. Please select 1, 2, 3 or 7.\n");
        }

    } while (1);
}


// 5-B Grade (60-69) — Fixed Array and Threshold Analysis
// - Complete all previous steps
// - Refactor to fixed array size (50) with sentinel value (-1)
// - Menu option 4: count days above/below user-defined threshold
// - Menu option 5: calculate weekly average temperature (every 7 entries = 1 week)
// - Explain program logic via in-code comments or portfolio
void assessment5_b() {
    printf("Assessment 5 - B Grade completed on 03 May 2026 21:28\n");

    int days;
    printf("How many days do you want to record (1-30)? ");
    if (scanf("%d", &days) != 1 || days < 1 || days > 30) {
        printf("Invalid number of days.\n");
        return;
    }

    float temps[50];
    for (int i = 0; i < 50; i++) {
        temps[i] = -1; // sentinel default
    }

    for (int i = 0; i < days; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temps[i]);
    }
    // sentinel at the end of valid data
    temps[days] = -1;

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Display all temperature readings\n");
        printf("2. Calculate and display average temperature\n");
        printf("3. Find highest and lowest temperature\n");
        printf("4. Count days above/below a threshold\n");
        printf("5. Weekly average temperature\n");
        printf("7. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            printf("\nAll temperature readings:\n");
            for (int i = 0; i < days; i++) {
                if (temps[i] == -1) break;
                printf("Day %d: %.2f C\n", i + 1, temps[i]);
            }
        } else if (choice == 2) {
            float sum = 0;
            int count = 0;
            for (int i = 0; i < 50; i++) {
                if (temps[i] == -1) break;
                sum += temps[i];
                count++;
            }
            if (count > 0) {
                float avg = sum / count;
                printf("\nAverage temperature: %.2f C\n", avg);
            } else {
                printf("No data to calculate average.\n");
            }
        } else if (choice == 3) {
            if (temps[0] == -1) {
                printf("No data.\n");
            } else {
                float min = temps[0];
                float max = temps[0];
                for (int i = 1; i < 50; i++) {
                    if (temps[i] == -1) break;
                    if (temps[i] < min) min = temps[i];
                    if (temps[i] > max) max = temps[i];
                }
                printf("\nLowest temperature: %.2f C\n", min);
                printf("Highest temperature: %.2f C\n", max);
            }
        } else if (choice == 4) {
            float threshold;
            int above = 0;
            int below = 0;

            printf("Enter threshold temperature: ");
            if (scanf("%f", &threshold) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                continue;
            }

            for (int i = 0; i < 50; i++) {
                if (temps[i] == -1) break;
                if (temps[i] > threshold) {
                    above++;
                } else if (temps[i] < threshold) {
                    below++;
                }
            }

            printf("\nDays above %.2f C: %d\n", threshold, above);
            printf("Days below %.2f C: %d\n", threshold, below);
        } else if (choice == 5) {
            int index = 0;
            int weekNumber = 1;

            while (index < 50 && temps[index] != -1) {
                float sum = 0;
                int count = 0;

                for (int i = 0; i < 7; i++) {
                    if (index >= 50 || temps[index] == -1) break;
                    sum += temps[index];
                    count++;
                    index++;
                }

                if (count > 0) {
                    float avg = sum / count;
                    printf("Week %d average: %.2f C (based on %d day(s))\n", weekNumber, avg, count);
                    weekNumber++;
                }
            }
        } else if (choice == 7) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid menu choice. Please select 1,2,3,4,5 or 7.\n");
        }

    } while (1);
}


// 5-A Grade (70-100) — Reverse Display and Pointers
// - Complete all previous steps
// - Menu option 6: reverse temperature readings — format: Today, Yesterday, 2 days ago...
// - Research and explain how pointers work and why useful here
// - Rewrite part of program using pointers instead of array indexing:
//   traverse the array, reverse the array, find highest/lowest temperature

// Helper: get count of valid entries using sentinel, via pointer
int getCountWithSentinel(float *temps, int maxSize) {
    int count = 0;
    float *p = temps;
    while (count < maxSize && *p != -1) {
        count++;
        p++;
    }
    return count;
}

// Helper: find min and max using pointers
void findMinMaxPointer(float *temps, int maxSize, float *minOut, float *maxOut) {
    int count = getCountWithSentinel(temps, maxSize);
    if (count == 0) {
        *minOut = 0;
        *maxOut = 0;
        return;
    }

    float *p = temps;
    *minOut = *p;
    *maxOut = *p;

    for (int i = 1; i < count; i++) {
        p++;
        if (*p < *minOut) *minOut = *p;
        if (*p > *maxOut) *maxOut = *p;
    }
}

// Helper: reverse array in-place using pointers
void reverseArrayPointer(float *temps, int maxSize) {
    int count = getCountWithSentinel(temps, maxSize);
    if (count <= 1) return;

    float *left = temps;
    float *right = temps + count - 1;

    while (left < right) {
        float temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

void assessment5_a() {
    printf("Assessment 5 - A Grade completed on 04 May 2026 22:56\n");

    int days;
    printf("How many days do you want to record (1-30)? ");
    if (scanf("%d", &days) != 1 || days < 1 || days > 30) {
        printf("Invalid number of days.\n");
        return;
    }

    float temps[50];
    for (int i = 0; i < 50; i++) {
        temps[i] = -1; // sentinel default
    }

    for (int i = 0; i < days; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temps[i]);
    }
    temps[days] = -1;

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Display all temperature readings\n");
        printf("2. Calculate and display average temperature\n");
        printf("3. Find highest and lowest temperature (pointer version)\n");
        printf("4. Count days above/below a threshold\n");
        printf("5. Weekly average temperature\n");
        printf("6. Reverse order and display (Today / Yesterday / X days ago)\n");
        printf("7. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            printf("\nAll temperature readings:\n");
            float *p = temps;
            int dayIndex = 1;
            while (dayIndex <= 50 && *p != -1) {
                printf("Day %d: %.2f C\n", dayIndex, *p);
                p++;
                dayIndex++;
            }
        } else if (choice == 2) {
            float sum = 0;
            int count = 0;
            float *p = temps;

            while (count < 50 && *p != -1) {
                sum += *p;
                count++;
                p++;
            }

            if (count > 0) {
                float avg = sum / count;
                printf("\nAverage temperature: %.2f C\n", avg);
            } else {
                printf("No data to calculate average.\n");
            }
        } else if (choice == 3) {
            float min, max;
            int count = getCountWithSentinel(temps, 50);
            if (count == 0) {
                printf("No data.\n");
            } else {
                findMinMaxPointer(temps, 50, &min, &max);
                printf("\nLowest temperature: %.2f C\n", min);
                printf("Highest temperature: %.2f C\n", max);
            }
        } else if (choice == 4) {
            float threshold;
            int above = 0;
            int below = 0;

            printf("Enter threshold temperature: ");
            if (scanf("%f", &threshold) != 1) {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                continue;
            }

            float *p = temps;
            int count = 0;
            while (count < 50 && *p != -1) {
                if (*p > threshold) {
                    above++;
                } else if (*p < threshold) {
                    below++;
                }
                p++;
                count++;
            }

            printf("\nDays above %.2f C: %d\n", threshold, above);
            printf("Days below %.2f C: %d\n", threshold, below);
        } else if (choice == 5) {
            int totalCount = getCountWithSentinel(temps, 50);
            int index = 0;
            int weekNumber = 1;

            while (index < totalCount) {
                float sum = 0;
                int count = 0;

                for (int i = 0; i < 7; i++) {
                    if (index >= totalCount) break;
                    sum += temps[index];
                    count++;
                    index++;
                }

                if (count > 0) {
                    float avg = sum / count;
                    printf("Week %d average: %.2f C (based on %d day(s))\n", weekNumber, avg, count);
                    weekNumber++;
                }
            }
        } else if (choice == 6) {
            int count = getCountWithSentinel(temps, 50);
            if (count == 0) {
                printf("No data to reverse.\n");
            } else {
                reverseArrayPointer(temps, 50);

                printf("\nReversed order (relative to today):\n");
                float *p = temps;
                int index = 0;

                while (index < count) {
                    if (index == 0) {
                        printf("Today: %.2f C\n", *p);
                    } else if (index == 1) {
                        printf("Yesterday: %.2f C\n", *p);
                    } else {
                        printf("%d days ago: %.2f C\n", index, *p);
                    }
                    p++;
                    index++;
                }

                // reverse back to original order so other options still make sense
                reverseArrayPointer(temps, 50);
            }
        } else if (choice == 7) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid menu choice. Please select 1,2,3,4,5,6 or 7.\n");
        }

    } while (1);
}

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 5
// This task was my first structured use of arrays and menus for data analysis.
// D grade introduced a simple array for up to 30 days and basic average calculation.
// C grade added a looped menu, highest/lowest temperature, and a clean exit option.
// B grade refactored the program to use a fixed-size array with a sentinel value (-1),
// added threshold counting and weekly averages, and relied more on loops and conditions.
// A grade extended the program with reverse display logic and used pointers to traverse
// the array, reverse it, and find min/max values, while keeping the code at foundation level.
// ------------------------------------------------------------------------------------------------------------------------


// ========================================================================================================================
// ASSESSMENT 6 — Book Organizer
// Week 9 | Topic: Sorting Algorithms and String Handling
// ========================================================================================================================


// ------------------------------------------------------------
// Helper: Case‑insensitive comparison (foundation‑level)
// ------------------------------------------------------------
int compareIgnoreCase(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        char ca = tolower(a[i]);
        char cb = tolower(b[i]);
        if (ca < cb) return -1;
        if (ca > cb) return 1;
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0') return 0;
    if (a[i] == '\0') return -1;
    return 1;
}

// ------------------------------------------------------------
// Helper: Swap two strings
// ------------------------------------------------------------
void swapStrings(char a[], char b[]) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}



// 6-D Grade (40-49) — Basic Display Loop
// - Create string array with 8 book titles in mixed alphabetical order
// - Use a loop to print on each iteration:
//   Current Title: "<title>"
//   First Title:   "<title_at_index_0>"
// - No sorting or manipulation required
void assessment6_d() {
    printf("Assessment 6 - D Grade completed on 14 May 2026 10:53\n");

    char books[8][100] = {
        "Hollow Lantern Road",
        "Fragments of the Azure Gate",
        "Silent Orchard Manuscript",
        "The Clockmaker's Veil",
        "Marrowstone Echoes",
        "The Glassbound Harbor",
        "Whispering Atlas",
        "Emberline Passage"
    };

    for (int i = 0; i < 8; i++) {
        printf("Current Title: \"%s\"\n", books[i]);
        printf("First Title: \"%s\"\n\n", books[0]);
    }
}


// 6-C Grade (50-59) — Single Pass to Front
// - Complete all previous steps
// - Modify loop to perform single pass putting earliest title at index 0
//   (case-insensitive alphabetical comparison)
// - Compare each title with index 0 — if earlier alphabetically, swap
// - Print playlist before and after the loop

void assessment6_c() {
    printf("Assessment 6 - C Grade completed on 15 May 2026 12:35\n");

    char books[8][100] = {
        "Hollow Lantern Road",
        "Fragments of the Azure Gate",
        "Silent Orchard Manuscript",
        "The Clockmaker's Veil",
        "Marrowstone Echoes",
        "The Glassbound Harbor",
        "Whispering Atlas",
        "Emberline Passage"
    };

    printf("Before:\n");
    for (int i = 0; i < 8; i++) {
        printf("\"%s\"\n", books[i]);
    }

    for (int i = 1; i < 8; i++) {
        if (compareIgnoreCase(books[i], books[0]) < 0) {
            swapStrings(books[i], books[0]);
        }
    }

    printf("\nAfter:\n");
    for (int i = 0; i < 8; i++) {
        printf("\"%s\"\n", books[i]);
    }
}

// 6-B Grade (60-69) — Full Alphabetical Sort
// - Complete all previous steps
// - Implement nested loop to sort entire list alphabetically
//   (swap strings with first unsorted element on each pass)
// - Print playlist before and after sorting
// - Portfolio: explain how the sorting works

void assessment6_b() {
    printf("Assessment 6 - B Grade completed on 16 May 2026 11:38\n");

    char books[8][100] = {
        "Hollow Lantern Road",
        "Fragments of the Azure Gate",
        "Silent Orchard Manuscript",
        "The Clockmaker's Veil",
        "Marrowstone Echoes",
        "The Glassbound Harbor",
        "Whispering Atlas",
        "Emberline Passage"
    };

    printf("Before:\n");
    for (int i = 0; i < 8; i++) {
        printf("\"%s\"\n", books[i]);
    }

    for (int i = 0; i < 8; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 8; j++) {
            if (compareIgnoreCase(books[j], books[minIndex]) < 0) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swapStrings(books[i], books[minIndex]);
        }
    }

    printf("\nAfter:\n");
    for (int i = 0; i < 8; i++) {
        printf("\"%s\"\n", books[i]);
    }
}

// 6-A Grade (70-100) — Delete and Alternative Sort
// - Complete all previous steps
// - Allow user to enter a book title to delete from the list
//   (if found: remove and shift remaining titles; if not found: display message)
// - Implement a different sorting algorithm (e.g. Bubble Sort)
// - Compare old algorithm with new one in terms of logic and performance
// - Portfolio: thorough explanation required for highest grade
void assessment6_a() {
    printf("Assessment 6 - A Grade completed on 17 May 2026 11:59\n");

    char books[8][100] = {
        "Hollow Lantern Road",
        "Fragments of the Azure Gate",
        "Silent Orchard Manuscript",
        "The Clockmaker's Veil",
        "Marrowstone Echoes",
        "The Glassbound Harbor",
        "Whispering Atlas",
        "Emberline Passage"
    };

    int count = 8;

    printf("Current list:\n");
    for (int i = 0; i < count; i++) {
        printf("\"%s\"\n", books[i]);
    }

    // -----------------------------
    // DELETE TITLE
    // -----------------------------
    char toDelete[100];
    printf("\nEnter a book title to delete: ");
    getchar(); 
    fgets(toDelete, sizeof(toDelete), stdin);

    // remove newline
    toDelete[strcspn(toDelete, "\n")] = '\0';

    int found = -1;
    for (int i = 0; i < count; i++) {
        if (compareIgnoreCase(books[i], toDelete) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Title not found.\n");
    } else {
        for (int i = found; i < count - 1; i++) {
            strcpy(books[i], books[i + 1]);
        }
        count--;
        printf("Title deleted.\n");
    }

    printf("\nList after deletion:\n");
    for (int i = 0; i < count; i++) {
        printf("\"%s\"\n", books[i]);
    }

    // -----------------------------
    // BUBBLE SORT (new algorithm)
    // -----------------------------
    printf("\nApplying Bubble Sort...\n");

    for (int pass = 0; pass < count - 1; pass++) {
        for (int i = 0; i < count - pass - 1; i++) {
            if (compareIgnoreCase(books[i], books[i + 1]) > 0) {
                swapStrings(books[i], books[i + 1]);
            }
        }
    }

    printf("\nAfter Bubble Sort:\n");
    for (int i = 0; i < count; i++) {
        printf("\"%s\"\n", books[i]);
    }
}

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 6
// D grade introduced simple string printing and accessing index 0.
// C grade added a single-pass selection to move the earliest title to the front.
// B grade expanded this into a full alphabetical sort using nested loops.
// A grade added deletion (shifting elements) and a second sorting algorithm (Bubble Sort),
// allowing comparison between selection-sort logic and bubble-sort logic.
// ------------------------------------------------------------------------------------------------------------------------


// ========================================================================================================================
// ASSESSMENT 7 — Media Lab Equipment Loan Manager
// Week 11 | Topic: Functions and File Handling
// ========================================================================================================================

// Global constants (used mainly for A grade)
#define MAX_ITEMS 100
const char FILENAME[] = "loans.txt";

// ---------------------------------------------------------------------
// Struct definition (used in all grades)
// ---------------------------------------------------------------------
typedef struct {
    int id;
    char assetTag[30];
    char status[5]; // e.g. "A" or "L"
} Item;



// 7-D Grade (40-49) — Basic Struct and File I/O
// - Define struct Item with: id (int), assetTag (string), status (char A=Available/L=Loaned)
// - Create data file (loans.txt) if it does not exist
// - addItem()     → get id, assetTag, status from user and append to file
// - displayItems() → read all records from file and print in tidy format
// - Demonstrate adding 3+ items and displaying the list

void addItem_d() {
    FILE *fp = fopen(FILENAME, "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    Item item;
    printf("Enter item id: ");
    scanf("%d", &item.id);

    printf("Enter asset tag (e.g. CAM-104): ");
    scanf("%s", item.assetTag);

    printf("Enter status (A=Available, L=Loaned): ");
    scanf("%s", item.status);

    fprintf(fp, "%d %s %s\n", item.id, item.assetTag, item.status);
    fclose(fp);

    printf("Item added (D grade version).\n");
}

void displayItems_d() {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("No file found or error opening file.\n");
        return;
    }

    Item item;
    printf("\n--- Item List (D grade) ---\n");
    while (fscanf(fp, "%d %s %s", &item.id, item.assetTag, item.status) == 3) {
        printf("ID: %d | Tag: %s | Status: %s\n", item.id, item.assetTag, item.status);
    }
    fclose(fp);
}

void assessment7_d() {
    printf("Assessment 7 - D Grade completed on 19 May 2026 18:42\n");

    // Ensure file exists
    FILE *fp = fopen(FILENAME, "a");
    if (fp != NULL) fclose(fp);

    // Add a few items (for screenshots you can call multiple times)
    addItem_d();
    addItem_d();
    addItem_d();

    // Display all items
    displayItems_d();
}

// 7-C Grade (50-59) — Parameters and Search
// - Refactor: addItem(int id, char assetTag[], char status[]) with parameters
// - Keep displayItems() with no parameters
// - Add searchItemById(int id) — read file and display matching record or not found message
// - Duplicate-ID check: addItem() refuses to add if id already exists

void displayItems_c() {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("No file found or error opening file.\n");
        return;
    }

    Item item;
    printf("\n--- Item List (C grade) ---\n");
    while (fscanf(fp, "%d %s %s", &item.id, item.assetTag, item.status) == 3) {
        printf("ID: %d | Tag: %s | Status: %s\n", item.id, item.assetTag, item.status);
    }
    fclose(fp);
}

void searchItemById_c(int id) {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("No file found or error opening file.\n");
        return;
    }

    Item item;
    int found = 0;

    while (fscanf(fp, "%d %s %s", &item.id, item.assetTag, item.status) == 3) {
        if (item.id == id) {
            printf("Record found (C grade): ID=%d, Tag=%s, Status=%s\n",
                   item.id, item.assetTag, item.status);
            found = 1;
            break;
        }
    }
    fclose(fp);

    if (!found) {
        printf("No record with ID %d found.\n", id);
    }
}

void addItem_c(int id, char assetTag[], char status[]) {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        fp = fopen(FILENAME, "w");
        if (fp == NULL) {
            printf("Error creating file.\n");
            return;
        }
        fclose(fp);
        fp = fopen(FILENAME, "r");
        if (fp == NULL) {
            printf("Error reopening file.\n");
            return;
        }
    }

    Item item;
    int duplicate = 0;

    while (fscanf(fp, "%d %s %s", &item.id, item.assetTag, item.status) == 3) {
        if (item.id == id) {
            duplicate = 1;
            break;
        }
    }
    fclose(fp);

    if (duplicate) {
        printf("Cannot add item. ID %d already exists.\n", id);
        return;
    }

    fp = fopen(FILENAME, "a");
    if (fp == NULL) {
        printf("Error opening file for append.\n");
        return;
    }

    fprintf(fp, "%d %s %s\n", id, assetTag, status);
    fclose(fp);

    printf("Item added (C grade version).\n");
}

void assessment7_c() {
    printf("Assessment 7 - C Grade completed on 20 May 2026 19:19\n");

    int id;
    char tag[30];
    char status[5];

    printf("Enter new item id: ");
    scanf("%d", &id);
    printf("Enter asset tag: ");
    scanf("%s", tag);
    printf("Enter status (A/L): ");
    scanf("%s", status);

    addItem_c(id, tag, status);

    displayItems_c();

    printf("\nSearch by ID (C grade): ");
    scanf("%d", &id);
    searchItemById_c(id);
}

// 7-B Grade (60-69) — Return Values and Update
// - Refactor functions to use return values:
//   int addItem(...)          → return 1 if added, 0 if duplicate
//   int searchItemById(int id) → return record index if found, -1 otherwise
// - Implement int updateItem(int id, const char newAssetTag[], const char newStatus[])
//   read all records into memory, apply update, rewrite file
//   return 1 if successful, 0 if not found

int searchItemById_b(int id) {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        return -1;
    }

    Item item;
    int index = 0;
    while (fscanf(fp, "%d %s %s", &item.id, item.assetTag, item.status) == 3) {
        if (item.id == id) {
            fclose(fp);
            return index;
        }
        index++;
    }
    fclose(fp);
    return -1;
}

int addItem_b(int id, char assetTag[], char status[]) {
    if (searchItemById_b(id) != -1) {
        printf("Cannot add item. ID %d already exists (B grade).\n", id);
        return 0;
    }

    FILE *fp = fopen(FILENAME, "a");
    if (fp == NULL) {
        printf("Error opening file for append.\n");
        return 0;
    }

    fprintf(fp, "%d %s %s\n", id, assetTag, status);
    fclose(fp);

    printf("Item added (B grade version).\n");
    return 1;
}

int updateItem_b(int id, const char newAssetTag[], const char newStatus[]) {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("Error opening file for read.\n");
        return 0;
    }

    Item items[MAX_ITEMS];
    int count = 0;

    while (count < MAX_ITEMS &&
           fscanf(fp, "%d %s %s", &items[count].id, items[count].assetTag, items[count].status) == 3) {
        count++;
    }
    fclose(fp);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (items[i].id == id) {
            strcpy(items[i].assetTag, newAssetTag);
            strcpy(items[i].status, newStatus);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No record with ID %d found to update.\n", id);
        return 0;
    }

    fp = fopen(FILENAME, "w");
    if (fp == NULL) {
        printf("Error opening file for write.\n");
        return 0;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d %s %s\n", items[i].id, items[i].assetTag, items[i].status);
    }
    fclose(fp);

    printf("Record with ID %d updated (B grade).\n", id);
    return 1;
}

void displayItems_b() {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("No file found or error opening file.\n");
        return;
    }

    Item item;
    printf("\n--- Item List (B grade) ---\n");
    while (fscanf(fp, "%d %s %s", &item.id, item.assetTag, item.status) == 3) {
        printf("ID: %d | Tag: %s | Status: %s\n", item.id, item.assetTag, item.status);
    }
    fclose(fp);
}

void assessment7_b() {
    printf("Assessment 7 - B Grade completed on 21 May 2026 19:31\n");

    int id;
    char tag[30];
    char status[5];

    printf("Enter new item id: ");
    scanf("%d", &id);
    printf("Enter asset tag: ");
    scanf("%s", tag);
    printf("Enter status (A/L): ");
    scanf("%s", status);

    addItem_b(id, tag, status);

    displayItems_b();

    printf("\nEnter ID to update: ");
    scanf("%d", &id);
    printf("Enter new asset tag: ");
    scanf("%s", tag);
    printf("Enter new status (A/L): ");
    scanf("%s", status);

    updateItem_b(id, tag, status);

    displayItems_b();
}

// 7-A Grade (70-100) — Delete and File Persistence
// - Implement int deleteItem(int id)
//   load all records, remove target, overwrite file — return 1 if deleted, 0 if not found
// - On program start: load data from file into in-memory array
// - Menu: add / view / search / update / delete / save / exit
// - On save or exit: write current in-memory data to file
// - Portfolio: note explaining local vs global scope in implementation

Item itemsA[MAX_ITEMS];
int itemCountA = 0;

void loadFromFileA() {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        itemCountA = 0;
        return;
    }

    itemCountA = 0;
    while (itemCountA < MAX_ITEMS &&
           fscanf(fp, "%d %s %s",
                  &itemsA[itemCountA].id,
                  itemsA[itemCountA].assetTag,
                  itemsA[itemCountA].status) == 3) {
        itemCountA++;
    }
    fclose(fp);
}

void saveToFileA() {
    FILE *fp = fopen(FILENAME, "w");
    if (fp == NULL) {
        printf("Error opening file for save.\n");
        return;
    }

    for (int i = 0; i < itemCountA; i++) {
        fprintf(fp, "%d %s %s\n",
                itemsA[i].id,
                itemsA[i].assetTag,
                itemsA[i].status);
    }
    fclose(fp);
    printf("Data saved to file.\n");
}

void displayItems_a() {
    printf("\n--- Item List (A grade, in-memory) ---\n");
    for (int i = 0; i < itemCountA; i++) {
        printf("ID: %d | Tag: %s | Status: %s\n",
               itemsA[i].id,
               itemsA[i].assetTag,
               itemsA[i].status);
    }
    if (itemCountA == 0) {
        printf("(No items in memory.)\n");
    }
}

int searchItemById_a(int id) {
    for (int i = 0; i < itemCountA; i++) {
        if (itemsA[i].id == id) {
            return i;
        }
    }
    return -1;
}

int addItem_a(int id, char assetTag[], char status[]) {
    if (itemCountA >= MAX_ITEMS) {
        printf("Cannot add more items. Array full.\n");
        return 0;
    }

    if (searchItemById_a(id) != -1) {
        printf("Cannot add item. ID %d already exists (A grade).\n", id);
        return 0;
    }

    itemsA[itemCountA].id = id;
    strcpy(itemsA[itemCountA].assetTag, assetTag);
    strcpy(itemsA[itemCountA].status, status);
    itemCountA++;

    printf("Item added to in-memory list.\n");
    return 1;
}

int updateItem_a(int id, const char newAssetTag[], const char newStatus[]) {
    int index = searchItemById_a(id);
    if (index == -1) {
        printf("No record with ID %d found to update (A grade).\n", id);
        return 0;
    }

    strcpy(itemsA[index].assetTag, newAssetTag);
    strcpy(itemsA[index].status, newStatus);
    printf("Record with ID %d updated in memory.\n", id);
    return 1;
}

int deleteItem_a(int id) {
    int index = searchItemById_a(id);
    if (index == -1) {
        printf("No record with ID %d found to delete.\n", id);
        return 0;
    }

    for (int i = index; i < itemCountA - 1; i++) {
        itemsA[i] = itemsA[i + 1];
    }
    itemCountA--;

    printf("Record with ID %d deleted from memory.\n", id);
    return 1;
}

void assessment7_a() {
    printf("Assessment 7 - A Grade completed on 22 May 2026 21:12\n");

    loadFromFileA();

    int choice;
    do {
        printf("\n--- Media Lab Equipment Loan Manager (A grade) ---\n");
        printf("1. Add item\n");
        printf("2. View all items\n");
        printf("3. Search item by ID\n");
        printf("4. Update item\n");
        printf("5. Delete item\n");
        printf("6. Save to file\n");
        printf("7. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            int id;
            char tag[30];
            char status[5];

            printf("Enter new item id: ");
            scanf("%d", &id);
            printf("Enter asset tag: ");
            scanf("%s", tag);
            printf("Enter status (A/L): ");
            scanf("%s", status);

            addItem_a(id, tag, status);

        } else if (choice == 2) {
            displayItems_a();

        } else if (choice == 3) {
            int id;
            printf("Enter ID to search: ");
            scanf("%d", &id);
            int index = searchItemById_a(id);
            if (index == -1) {
                printf("No record with ID %d found.\n", id);
            } else {
                printf("Found: ID=%d, Tag=%s, Status=%s\n",
                       itemsA[index].id,
                       itemsA[index].assetTag,
                       itemsA[index].status);
            }

        } else if (choice == 4) {
            int id;
            char tag[30];
            char status[5];

            printf("Enter ID to update: ");
            scanf("%d", &id);
            printf("Enter new asset tag: ");
            scanf("%s", tag);
            printf("Enter new status (A/L): ");
            scanf("%s", status);

            updateItem_a(id, tag, status);

        } else if (choice == 5) {
            int id;
            printf("Enter ID to delete: ");
            scanf("%d", &id);
            deleteItem_a(id);

        } else if (choice == 6) {
            saveToFileA();

        } else if (choice == 7) {
            saveToFileA();
            printf("Exiting program.\n");
            break;

        } else {
            printf("Invalid menu choice. Please select 1-7.\n");
        }

    } while (1);
}

// ------------------------------------------------------------------------------------------------------------------------
// 📝 Personal note — Assessment 7
// D grade introduced a basic struct, file creation, and simple append/display functions.
// C grade refactored addItem to use parameters, added a search function, and prevented duplicate IDs.
// B grade added return values to make functions more informative and implemented an update function
// that loads all records, modifies one, and rewrites the file.
// A grade moved to an in-memory array with a menu-driven flow, added deletion with file rewrite,
// and used a small set of global variables (filename, capacity, array, count) while keeping most
// logic inside local scopes in functions.
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