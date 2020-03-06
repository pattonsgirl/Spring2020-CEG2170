# Lab 07

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* code.c
* Makefile

Folder structure:
* Create a folder named Lab07-Lastname.

In Visual Studio Code, go to File, Open Folder, and open the folder corresponding to which part of  
this lab your are working on.

Rename code.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut `Ctrl + Shift + C` to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

This link to [Arrays in C](https://www.tutorialspoint.com/cprogramming/c_arrays.htm) is a good resource for this lab.

## Hangman:
Write a program to play a game of hangman.  Store the word to be guessed as individual characters of an  
array called `word`.  The player must guess the letters belonging to `word`.  If the user enters a valid  
letter, print a message of encouragement.  The program should end when the user successfully guesses the  
word OR after 15 guesses.  Print the contents of the `word ` array at the end of the program.    

*Hint*: Use an array called `guessed` to keep track of the solution so far.  Initialize all elements of  
`guessed` to the symbol '`*`'.  Each time a letter in `word` is guessed, replace the corresponding '`*`'  
in `guessed` with that letter.

### Sample execution:
```
Let's play hangman!
Enter a letter: a
The letter a is in the word!
Enter a letter: m
The letter m is in the word!
Enter a letter: r
The letter r is in the word!
The word was: arm
```

## What to Submit
You should have a folder named Lab07-LastName.  
The folder should have at least the following:
* name_of_your_code.c  

Create a .zip file of your project folder (Lab07-LastName.zip)

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.