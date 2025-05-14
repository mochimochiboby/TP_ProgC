#include <stdio.h>
#include <dirent.h>
#include <string.h>

void lire_dossier(const char *nom_repertoire) {
    DIR *dir = opendir(nom_repertoire);
    if (dir == NULL) {
        perror("Erreur : impossible d'ouvrir le répertoire");
        return;
    }

    struct dirent *ent;
    printf("Contenu du répertoire \"%s\" :\n", nom_repertoire);

    while ((ent = readdir(dir)) != NULL) {
        // Ignorer les entrées "." et ".."
        if (strcmp(ent->d_name, ".") != 0 && strcmp(ent->d_name, "..") != 0) {
            printf(" - %s\n", ent->d_name);
        }
    }

    closedir(dir);
}
