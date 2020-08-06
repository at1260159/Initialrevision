#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Random(int, int);

int main(){
  int H=0,T=0,i;
  char name[20];

  printf("Who are you?\n");
  printf("> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);

  srand((unsigned int)time(NULL));

  printf("Tossing a coin...\n");

  for(i=0;i<3;i++){
    printf("Round %d: ",i+1);

    if(Random(1,2)==1){
      printf("Heads\n");
      H+=1;
    }

    else{
      printf("Tails\n");
      T+=1;
    }
  }

  printf("Heads:%d, Tails:%d\n",H,T);

  return 0;

}

int Random(int min,int max){
  return min + (int)(rand()*(max-min+1.0)/(RAND_MAX+1.0));
}
