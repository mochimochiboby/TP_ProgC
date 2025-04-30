#include <stdio.h>

int main() {
    unsigned int d = 0b10111011010101010010101010101010;  // Exemple de nombre binaire

    
    unsigned int mask4 = 1 << 3;  
    unsigned int mask20 = 1 << 19; 
  
    int bit4 = (d & mask4) >> 3;  
    int bit20 = (d & mask20) >> 19;

    // Vérification des deux bits : si les deux sont à 1, afficher 1, sinon afficher 0
    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

