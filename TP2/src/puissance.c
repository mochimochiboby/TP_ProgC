#include <stdio.h>

int puissance(int a, int b){
int i = 0;
  for (i; i < b; i++){
    return a * a;
  }
}

int main (){
  int resultat = puissance(8,8);
  printf("Resultat =", resultat);
  return 0;
}
