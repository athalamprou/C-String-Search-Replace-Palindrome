### Assignment Statement: 
Write a program in the C language that provides the following functionalities:
a) Search for a character in a string.
b) Replace a character in a string with another.
c) Detect palindromes (phrases that read the same forwards and backwards).

Specifically:
- Initially, the program will prompt the user to input a string of up to 50 characters and will store it in an appropriately sized array.
- Then, the program will display 4 options to the user, and the user will select an option by entering a number from the keyboard:

1. If the user enters the number 1, it will mean that the user wants to search for a character in the string. The character to search for will be entered from the keyboard following a prompt from the program. If the character exists in the string, the program will display how many times the character was found and at which positions. If the character does not exist in the string, the program will display an appropriate message. After the operation is completed, the program will display the 4 options again to the user.

2. If the user enters the number 2, it will mean that the user wants to replace a character in the string with another. The two characters (i.e., the one to be replaced and the one that will replace it) will be entered from the keyboard following a prompt from the program. If the character to be replaced exists in the string, the program will replace all instances of that character with the new character. If the character to be replaced does not exist in the string, the program will display an appropriate message. This operation should be implemented using a function with 3 parameters. The first parameter will be a pointer to a character (to which the address of the first element of the array containing the string will be passed during the function call), and the other two parameters will be the two characters. After the operation is completed, the program will display the 4 options again to the user.

3. If the user enters the number 3, it will mean that the user wants to check if the string is a palindrome. A palindrome is a symmetric phrase that can be read the same way from the start or the end. This means that in such a phrase, the 1st character is the same as the last, the 2nd is the same as the second-to-last, and so on. After checking the string, the program will display a message indicating whether the string is a palindrome or not. This operation should be implemented using a function with a parameter that is a pointer to a character (to which the address of the first element of the array containing the string will be passed during the function call) and appropriate return values (e.g., 0 or 1). After the operation is completed, the program will display the 4 options again to the user.

4. If the user enters the number 4, the program will terminate.

© NKUA Term Assignment on Intro to Programming
