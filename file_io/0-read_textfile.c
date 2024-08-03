#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;/*pointuer pour ld escripteur de fichiers*/
ssize_t n_read = 0;/*nombre de caracteres lus*/
int c;/*variable pour stocker le caractere lus*/

file = fopen(filename, "r");/*ouvre le fichier en lecture*/
if (!file)
return (0);/*Si pas d'ouverture affiche 0*/

while (letters > 0 && (c = fgetc(file)) != EOF)/*lis les caracteres du fichier et les affiches*/
{
if (write(STDOUT_FILENO, &c, 1) != 1)
{
fclose(file);
return (0);/*En cas d'erreur d'écriture, fermer le fichier et retourne*/
}
n_read++;
letters--;
}

fclose(file);/*ferme le fichier*/

return (n_read); /*Retourner le nombre de caractères ls*/
}
