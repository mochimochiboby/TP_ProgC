#include <stdio.h>

int puissance (a,b){
int i = 0;
  for (i; i < b; i++){
    return a * a;
  }
}

int main (){
  int resultat = puissance (8,8);
  printf(resultat);
  return 0;
}
