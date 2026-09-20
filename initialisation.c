#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "game_prototypes.h"

#define STARTING_CASH 1000

struct game *initialisation_sequence (void) {
    print_welcome_banner();
}

struct player *add_player (char name[50], struct player *next_player) {
    struct player *new_player = malloc(sizeof(struct player));
    strcpy(new_player->name, name);
    new_player->cash = STARTING_CASH;
    new_player->next = next_player;
    return add_player;
}

struct company *add_company (char name[50], 
    char description[200], 
    double current_price, 
    double previous_price, 
    int total_shares) {
        struct company *new_company = malloc(sizeof(struct company));
        strcpy(new_company->name, name);
        strcpy(new_company->description, description);
        new_company->current_price = current_price;
        new_company->previous_price = previous_price;
        new_company->total_shares = total_shares;
        return new_company;
    }

struct share *add_shares (struct company *bought_company, int quantity) {
    struct share *new_share = malloc(sizeof(struct share));
    new_share->bought_company = bought_company;
    new_share->quantity = quantity;
    return new_share;
}


void print_welcome_banner(void) {
    printf(
        "===========================================================================\n"
        "         __\n"
        "       <(o )___    ____  _   _  ____ _  __   ____ ___ __  __\n"
        "        ( ._> /   |  _ \\| | | |/ ___| |/ /  / ___|_ _|  \\/  |\n"
        "         `---'    | | | | | | | |   | ' /   \\___ \\| || |\\/| |\n"
        "                  | |_| | |_| | |___| . \\    ___) | || |  | |\n"
        "                  |____/ \\___/ \\____|_|\\_\\  |____/___|_|  |_|\n\n"
        "                       \"Waddle Your Way to Wall Street!\"\n"
        "---------------------------------------------------------------------------\n"
        "  [*] Starting Capital: $1,000  |  [*] Goal: $1,000,000\n"
        "  [*] Trade wisely, track the market, and watch out for volatile stocks!\n"
        "===========================================================================\n\n"
    );
}