#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SMOL_SIZE 3
char *smol_booba[SMOL_SIZE] = {"(.) (.)", "Smol tatas", "flat is justice"};
#define MEDIUM_SIZE 2
char *medium_booba[MEDIUM_SIZE] = {"They're either smol or big", "choose a side"};
#define BIG_SIZE 4
char *big_booba[BIG_SIZE] = {"VEEEEEEEEEERYYY BIG BRO", "YOU CAN'T BELIEVE HOW BIG THEY ARE", "cow tits", "lots of big boobs for the filthy weeb"};

char *booba(short size) {
  char **temp;
  short len;
  switch (size) {
    default: temp = smol_booba; len = SMOL_SIZE; break;
    case 2: temp = medium_booba; len = MEDIUM_SIZE; break;
    case 3: temp = big_booba; len = BIG_SIZE; break;
  }

  // random between 0 and len - 1
  return temp[rand() % len];
}

int main() {  
  srand(time(NULL));

  while(1) {
    printf("Which size do you want? (1-3): ");
    short size;
    scanf("%hd", &size);
    printf("%s\n", booba(size));
  }
}
