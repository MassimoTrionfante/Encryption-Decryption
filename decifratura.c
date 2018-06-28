/*
This function decrypts an encrypted text given a key.
Logic is the very same as the encrypting function.
The only difference, is that additions and subtractions are reversed.
*/

void decifratura(char testo_criptato[], char chiave[], char *testo_decriptato)
{
    char temp;
    int i,j=0, size_testo;
    size_testo=strlen(testo_criptato);

    for (i=0;i<=size_testo;i++)
    {
        if (chiave[j] > 90 || chiave[j] < 65)
            j=0;
        temp = chiave[j] - 65;
        if (testo_criptato[i] - temp < 65)
            testo_decriptato[i] = testo_criptato[i] - temp + 26;

        else
            testo_decriptato[i] = testo_criptato[i] - temp;
        j++;
    }

}
