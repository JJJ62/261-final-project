
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>/* time() */


typedef struct encounter encounter;
typedef struct Node Node;

struct encounter
{
    //This is the encounter number that points to a linked list encounter_num
    int enc;
    // 0 if have not visited 1 if have visited before
    int hasVisted;
    // 0 if not here 1 if here
    int playerHere;
};

struct Node
{
    // Any data type can be stored in this node
    char* encounter_text;
    // key words to use during even
    char* keywords[20];
    //the correct words to use during encounter
    char* correct_keywords[10];
    // the encounter number
    int encounter_num;
    //pointing to next node in encounter list
    struct Node* next;
};


void clear_screen();
encounter** create_dungeon(int);
Node* create_events();
void free_game(encounter**, int);
void print_game(encounter**, int, int);
void display_title();
int player_choice(int x);
void player_move(encounter**, int);
void set_player_position(encounter**, int, int, int); //game arr, x cord, y cord, size of arr
int player_event(encounter**, int, Node);
void play_event(Node, int, int);

int call_event(int rand_num); //calls event
int display_choices(Node* temp_node); // display choices for that event and takes input from user
int update_life(int player_life, int amount); //update life after event
void push_event(Node* prev, Node* new_node);

//EVENTS
Node* event_1();
Node* event_2();
Node* event_3();
Node* event_4();
Node* event_5();
Node* event_6();
Node* event_7();
Node* event_8();
Node* event_9();
Node* event_10();
