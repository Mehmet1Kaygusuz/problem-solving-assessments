// ============================================================
// QH0305 — Problem Solving
// Assessment Portfolio
// Author : Mehmet Kaygusuz
// Solent University — Computer Science Foundation 2025/26
// ============================================================
// Week 3  — Assessment 1 : Weekly Screen-Time Tracker
// Week 4  — Assessment 2 : City Aquarium Ticketing
// Week 5  — Assessment 3 : Hydration Tracker Loop Challenge
// Week 6  — Assessment 4 : (coming)
// Week 8  — Assessment 5 : (coming)
// Week 9  — Assessment 6 : (coming)
// Week 11 — Assessment 7 : (coming)
//           Reflective Statement : Word document — 1000 words
// ============================================================

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ============================================================
// ASSESSMENT 1 — Weekly Screen-Time Tracker
// Week 3 | Topic: Variables and Operators
// ============================================================

// D Grade (40-49) — Basic Weekly Total
// - Three categories, values assigned directly in code (no user input)
// - Calculate and print total screen time for one week (in minutes)
// - Display a clear label for each category and the total
void assessment1_d() {
    printf("Assessment 1 - D Grade (40-49) completed 08 March 2026 15:35\n");
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

// C Grade (50-59) — User Input and Daily Average Check
// - User inputs minutes for three categories
// - Calculate daily average
// - Compare with recommended limit
// - Print whether within or above recommended limit
// - Validate: if any input is negative, show error and stop
void assessment1_c() {
    printf("Assessment 1 - C Grade (50-59) completed 08 March 2026 16:25\n\n");
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

// B Grade (60-69) — Multi-Week Tracking and Comparison
// - User inputs minutes for three categories across two weeks
// - Calculate total and daily average for each week
// - State whether each week is within or above recommended limit
// - Compare two weeks: increased, decreased, or stayed the same
void assessment1_b() {
    printf("Assessment 1 - B Grade (60-69) completed 08 March 2026 21:42\n");
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

 if (daily_limit>=w1_daily_average)
 {
     printf("\nYou are 'Within Recommended Limit' for WEEK1");
 }
 else
 printf("\nIMPORTANT! You are 'Above Recommended Limit' for WEEK1 !!!\n***********************************************");

 printf("\n-----------------------------------------------------\n");
  
 if (daily_limit>=w2_daily_average)
 {
     printf("\nYou are 'Within Recommended Limit' for WEEK2");
 }
 else
 printf("\nIMPORTANT! You are 'Above Recommended Limit' for WEEK2 !!!\n***********************************************");

 printf("\n-----------------------------------------------------\n");
  
 if (daily_limit>=w12_daily_average)
 {
     printf("\nYou are 'Within Recommended Limit' for Combined Two Weeks");
 }
 else
 printf("\nIMPORTANT! You are 'Above Recommended Limit' for Combined Two Weeks !!!\n***********************************************");

 printf("\n-----------------------------------------------------\n");
  
    return;
}



// A Grade (70-100) — Dynamic Categories and Per-Category Trends
// NOTE: This grade requires arrays — will be completed after arrays topic
// - User specifies number of categories dynamically
// - User enters name of each category
// - Collect minutes for two weeks per category
// - Print detailed breakdown per week
// - Compare Week 1 vs Week 2 per category: Increase, Decrease, No change
void assessment1_a() {
    printf("Assessment 1 - A Grade (70-100) completed 15 March 2026 20:30 \n");

int n;
    printf("How many categories do you want to track? : ");
    scanf("%d", &n);

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
        
        if(week1[i] < 0)
        {
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


// ============================================================
// ASSESSMENT 2 — City Aquarium Ticketing
// Week 4 | Topic: Switch/Case
// ============================================================


// D Grade (40-49) — Basic Ticket Price Calculation, Fixed Prices
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












void assessment2_c() { printf("Assessment 2 - C Grade coming soon\n"); }
void assessment2_b() { printf("Assessment 2 - B Grade coming soon\n"); }
void assessment2_a() { printf("Assessment 2 - A Grade coming soon\n"); }


// ============================================================
// ASSESSMENT 3 — Hydration Tracker Loop Challenge
// Week 5 | Topic: Conversions and Loops
// ============================================================

// D Grade (40-49) — Basic Conversion
// - User inputs ml for one day
// - Convert to litres and cups
// - Display results




void assessment3_d() { printf("Assessment 3 - D Grade coming soon\n"); }
void assessment3_c() { printf("Assessment 3 - C Grade coming soon\n"); }
void assessment3_b() { printf("Assessment 3 - B Grade coming soon\n"); }
void assessment3_a() { printf("Assessment 3 - A Grade coming soon\n"); }

// ============================================================
// ASSESSMENT 4
// Week 6 | Topic: (coming)
// ============================================================

void assessment4_d() { printf("Assessment 4 - D Grade coming soon\n"); }
void assessment4_c() { printf("Assessment 4 - C Grade coming soon\n"); }
void assessment4_b() { printf("Assessment 4 - B Grade coming soon\n"); }
void assessment4_a() { printf("Assessment 4 - A Grade coming soon\n"); }

// ============================================================
// ASSESSMENT 5
// Week 8 | Topic: (coming)
// ============================================================

void assessment5_d() { printf("Assessment 5 - D Grade coming soon\n"); }
void assessment5_c() { printf("Assessment 5 - C Grade coming soon\n"); }
void assessment5_b() { printf("Assessment 5 - B Grade coming soon\n"); }
void assessment5_a() { printf("Assessment 5 - A Grade coming soon\n"); }

// ============================================================
// ASSESSMENT 6
// Week 9 | Topic: (coming)
// ============================================================

void assessment6_d() { printf("Assessment 6 - D Grade coming soon\n"); }
void assessment6_c() { printf("Assessment 6 - C Grade coming soon\n"); }
void assessment6_b() { printf("Assessment 6 - B Grade coming soon\n"); }
void assessment6_a() { printf("Assessment 6 - A Grade coming soon\n"); }

// ============================================================
// ASSESSMENT 7
// Week 11 | Topic: (coming)
// ============================================================

void assessment7_d() { printf("Assessment 7 - D Grade coming soon\n"); }
void assessment7_c() { printf("Assessment 7 - C Grade coming soon\n"); }
void assessment7_b() { printf("Assessment 7 - B Grade coming soon\n"); }
void assessment7_a() { printf("Assessment 7 - A Grade coming soon\n"); }

// ============================================================
// MAIN MENU
// ============================================================
int main() {

    int assessment, grade;

    printf("\n========================================\n");
    printf("  QH0305 — PROBLEM SOLVING\n");
    printf("  Assessment Portfolio\n");
    printf("  Mehmet Kaygusuz\n");
    printf("========================================\n");
    printf("\n--- SELECT ASSESSMENT ---\n");
    printf(" 1  - Assessment 1 (Week 3)  : Weekly Screen-Time Tracker\n");
    printf(" 2  - Assessment 2 (Week 4)  : City Aquarium Ticketing\n");
    printf(" 3  - Assessment 3 (Week 5)  : Hydration Tracker Loop Challenge\n");
    
    
    
    printf(" 4  - Assessment 4 (Week 6)  : Coming soon\n");
    printf(" 5  - Assessment 5 (Week 8)  : Coming soon\n");
    printf(" 6  - Assessment 6 (Week 9)  : Coming soon\n");
    printf(" 7  - Assessment 7 (Week 11) : Coming soon\n");
    printf("\n 0  - Exit\n");
    printf("========================================\n");
    printf("Your choice: ");
    scanf("%d", &assessment);

    if (assessment == 0) {
        printf("Exiting...\n");
        return 0;
    }

    if (assessment < 1 || assessment > 7) {
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