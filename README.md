# Encryption-Decryption
This simple tool is the first program I ever did. It was made in 2015 as project for my first programming exam.

# How it works
The tool starts up asking for a word to encrypt. The logic of the encryption used is called "polyalphabetic cipher". Let's say we have a word to cypher and a key: if the n-th element of the key contains "B", then the n-th character of the word have to be increased (ASCII char-wise) by 1, if "C", then it has to be increased by 2, and so on. If the number used to increase the n-th letter exceeds the ASCII character "Z", then it'll loop back to "A".<br>
In case the key is shorter than the word to encrypt, then the key gets repeated multiple times, until reaching the length of the word to cypher. For example, if the word is "MYWORD" and key is "ETC", the process will crypt using the key "ETCETC".<br>
Once the process ends, the tool will automatically decrypt the encrypted word, using the same key, to prove that it works accordingly.

Example test below:<br>
![](https://github.com/MassimoTrionfante/Encryption-Decryption/blob/master/img/TEST.PNG)

# Known Bugs and Limits
- The project had a really low level of difficulty, thus, only caps locked letters will work. Any other character may give weird or wrong results.
- The length of the key and the word can be of 200 chars at max. Exceeding this limit will crash the program.
