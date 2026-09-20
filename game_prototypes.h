#include <stdio.h>



#define MAX_COMPANIES 50

struct game {
    struct player *players;
};

struct company {
    char name[50];
    char description[200];
    double current_price;
    double previous_price;
    int total_shares;
};

struct player {
    char name[50];
    double cash;
    struct shares *shares_owned[MAX_COMPANIES];
    struct player *next;
};

struct share {
    struct company *bought_company;
    int quantity;
};



// Function Prototypes


void print_welcome_banner(void);
struct game *initialisation_sequence (void);
struct share *add_shares (struct company *bought_company, int quantity);
struct company *add_company (char name[50], 
    char description[200], 
    double current_price, 
    double previous_price, 
    int total_shares);
struct player *add_player (char name[50], struct player *next_player);
void print_welcome_banner(void);

