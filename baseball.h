/*****************************************************************************
 * baseball.h
 * CS1050
 * Spring 2024
 * By Jim Ries
 *****************************************************************************/
#ifndef _BASEBALL_H	// This is a "guard" - don't worry about it
#define _BASEBALL_H


// Types
typedef struct _Team
{
    char city[256];
    char name[256];
} Team;

typedef struct _Player
{
	char firstName[256];
    char lastName[256];
    long salary;
    Team team;
} Player;

typedef enum _Field {FIRSTNAME, LASTNAME, SALARY, TEAM} Field;


// Prototypes
void PrintPlayers(Player players[], int count);
void SortPlayers(Player players[], int count, Field field);

#endif