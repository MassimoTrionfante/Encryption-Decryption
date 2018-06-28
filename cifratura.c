/*
Function that encrypts the inputted "testo[]" using "chiave[]". Result is saved in "*testo_criptato".
Note that only upper cased text will work. Lower cased text may give you weird characters.
*/

void cifratura(char testo[], char chiave[], char *testo_criptato)
{
    char temp;                                          /*Set variables*/
    int i,j=0, size_testo;
    size_testo=strlen(testo);                           /*Get size of text*/

    for (i=0;i<=size_testo;i++)                         /*Go trough each char of the text*/
    {
        if (chiave[j] < 65 || chiave[j] > 90)           /*Check that the element in j is a caps letter*/
            j=0;                                        /*...if not, reset j (this is used to check if end of key is reached)*/
        temp = chiave[j] - 65;                          /*Temp says how many letters to "add" in the [i] element of testo*/
        if (testo[i] + temp > 90)                       /*If testo[i] is bigger than 90 (aka outside of ASCII caps letters)*/
            testo_criptato[i] = testo[i] + temp - 26;   /*... then decrease the final sum by 26*/

        else                                            /*Else...*/
            testo_criptato[i] = testo[i] + temp;        /*...just add normally.*/
        j++;                                            /*Increase j*/
    }

}



