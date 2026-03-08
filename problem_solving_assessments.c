// ============================================================
// QH0305 — Problem Solving
// Assessment Portfolio
// Author : Mehmet Kaygusuz
// Solent University — Computer Science Foundation 2025/26
// ============================================================
// Week 3  — Assessment 1 : Weekly Screen-Time Tracker
// Week 4  — Assessment 2 : (coming)
// Week 5  — Assessment 3 : (coming)
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
   
   printf("Enter your Daily Screen Time for Social Media    (Minutes):"); scanf(" %d",&social_media);
   printf("Enter your Daily Screen Time for YouTube         (Minutes):"); scanf(" %d",&youtube);
   printf("Enter your Daily Screen Time for Games           (Minutes):"); scanf(" %d",&games);
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
   printf("-----------------------------------------------------\n");
}

// B Grade (60-69) — Multi-Week Tracking and Comparison
// - User inputs minutes for three categories across two weeks
// - Calculate total and daily average for each week
// - State whether each week is within or above recommended limit
// - Compare two weeks: increased, decreased, or stayed the same
void assessment1_b() {
    printf("Assessment 1 - B Grade (60-69) coming soon\n");
}

// A Grade (70-100) — Dynamic Categories and Per-Category Trends
// NOTE: This grade requires arrays — will be completed after arrays topic
// - User specifies number of categories dynamically
// - User enters name of each category
// - Collect minutes for two weeks per category
// - Print detailed breakdown per week
// - Compare Week 1 vs Week 2 per category: Increase, Decrease, No change
void assessment1_a() {
    printf("Assessment 1 - A Grade (70-100) coming soon — requires arrays\n");
}

// ============================================================
// ASSESSMENT 2
// Week 4 | Topic: (coming)
// ============================================================

void assessment2_d() { printf("Assessment 2 - D Grade coming soon\n"); }
void assessment2_c() { printf("Assessment 2 - C Grade coming soon\n"); }
void assessment2_b() { printf("Assessment 2 - B Grade coming soon\n"); }
void assessment2_a() { printf("Assessment 2 - A Grade coming soon\n"); }

// ============================================================
// ASSESSMENT 3
// Week 5 | Topic: (coming)
// ============================================================

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
    printf(" 2  - Assessment 2 (Week 4)  : Coming soon\n");
    printf(" 3  - Assessment 3 (Week 5)  : Coming soon\n");
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