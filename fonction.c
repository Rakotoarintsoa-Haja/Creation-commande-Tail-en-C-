#include "headers.h"
void affichage(FILE *file, int nb_ligne) {
    char ligne[nb-ligne][MAX_LINE_LENGTH];
    int line_count = 0;

    // Lire les dernières lignes dans un tableau circulaire
    while (fgets(lines[line_count % nb-ligne], MAX_LINE_LENGTH, file) != NULL) {
        line_count++;
    }

    int start = line_count > nb-ligne ? line_count % nb-ligne: 0;
    int count = line_count > nb-ligne ? num_lines : line_count;

    // Afficher les dernières lignes dans l'ordre
    for (int i = 0; i < count; i++) {
        printf("%s", lines[(start + i) % nb-ligne]);
    }
}
int *fichier(FILE *file, char *argv[]){
		FILE *file=fopen(argv[1], "r");
		if(file!=NULL){
			affichage(file, atoi(argv[2]));
			}
			return FILE *file;
		}
