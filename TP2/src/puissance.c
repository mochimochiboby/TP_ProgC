#include <stdio.h>

int puissance(int a, int b){
int i = 0;
int resultat = 1;
  for (i; i < b; i++){
    resultat *= a;
  }
  return resultat;
}

int main (){
  int resultat = puissance(2,4);
  printf("%d", resultat);
  return 0;
}
