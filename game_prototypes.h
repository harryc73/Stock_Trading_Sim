// Duckling Force
#include <stdio.h>

#define MAX_COMPANIES 50
#define STARTING_CASH 1000

// Enumeration definitions 

enum true_or_false {
    FALSE,
    TRUE
};


// Struct definitions
struct company {
    char name[50];
    char description[200];
    double current_price;
    double previous_price;
    int total_shares;
    struct company *next;
};

struct share {
    struct company *bought_company;
    int quantity;
    struct share *next;
};

struct player {
    char name[50];
    double cash;
    struct share *shares;
    struct player *next;
};

struct game {
    struct player *players;
};

// Function Prototypes
void print_welcome_banner(void);
struct game *initialisation_sequence(void);
struct player *add_player(char name[50], struct player *next_player);
struct company *add_company(char name[50], 
    char description[200], 
    double current_price, 
    double previous_price, 
    int total_shares,
    struct company *next);
struct share *add_shares(struct company *bought_company, int quantity, struct share *next);

