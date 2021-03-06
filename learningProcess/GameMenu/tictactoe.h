#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void draw(const int size, char field[][size]);
int add_cross(const int size, char field[][size], const int x, const int y, const char preferChar);
int is_solved(const int size, char field[][size]);
void make_turn(const int size, char field[][size]);
void checkAdding(const int add_cross,const int size,char field[][size]);
int startTicTacToe ();
void saveTicGame(int sizeF, char humanChar, int humanRow, int humanCol);