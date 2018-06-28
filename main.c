#include "header.h"
void main()
{
    int i, size_testo;                           /*Set up variables*/
    char testo[200], chiave[200], testo_criptato[200], testo_decriptato[200];

    printf("Write the word to encrypt:\n");              /*Input text and then the key.*/
    gets(testo);                                /*Save text length in "size_testo"*/
    size_testo=strlen(testo);

    printf("\nWrite the key to use for the encryption:\n");
    gets(chiave);

    cifratura(testo, chiave, &testo_criptato);  /*Call to the function that encrypts the text with the given key.*/

    printf("\nEncrypted word:\n");        /*Show the encrypted text.*/
    for (i=0;i<size_testo;i++)
        printf("%c", testo_criptato[i]);

    decifratura(testo_criptato, chiave, &testo_decriptato); /*Call the function that decrypts the text. It's used to simply test that it actually works.*/

    printf("\n\nDecrypted word:\n");      /*Show decrypted text.*/
    for (i=0;i<size_testo;i++)
        printf("%c", testo_decriptato[i]);

    printf("\n");
}
