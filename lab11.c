/*****************************************************************************
 * Lab 11 - This is the "main".  Do not change this file.
 * CS1050
 * Spring 2024
 * By Jim Ries
 *****************************************************************************/
#include <stdio.h>
#include "baseball.h"

 int main(void)
 {
	Player players[] = 
    {
		{"Mike","Trout",37116667,{"Los Angeles","Angels"}},
		{"Corey","Seager",35000000,{"Texas","Rangers"}},
		{"Max","Scherzer",43333333,{"Texas","Rangers"}},
		{"Aaron","Judge",40000000,{"New York","Yankees"}},
		{"Jacob","DeGrom",40000000,{"Texas","Rangers"}},
		{"Anthony","Rendon",38571429,{"Los Angeles","Angels"}},
		{"Gerrit","Cole",36000000,{"New York","Yankees"}},
		{"Shohei","Ohtani",70000000,{"Los Angeles","Dodgers"}},
		{"Patrick","Corbin",34556200,{"Washington","Nationals"}},
		{"Justin","Verlander",43333333,{"Houston","Astros"}},
    };

    int count=sizeof(players)/sizeof(Player);

	printf("Players:\n");
	PrintPlayers(players,count);

	printf("Players by last name:\n");
	SortPlayers(players,count,LASTNAME);
	PrintPlayers(players,count);

	printf("Players by first name:\n");
	SortPlayers(players,count,FIRSTNAME);
	PrintPlayers(players,count);

	printf("Players by salary:\n");
	SortPlayers(players,count,SALARY);
	PrintPlayers(players,count);

#ifdef HONORS
	printf("Players by team:\n");
	SortPlayers(players,count,TEAM);
	PrintPlayers(players,count);
#endif
 }
