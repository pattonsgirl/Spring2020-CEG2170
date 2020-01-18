# Lab 01

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* helloworld.c
* Makefile

Make a copy of the Template folder and name it Lab01-LastName (where last name is your last name)

In Visual Studio Code, go to File, Open Folder, and open your folder (Lab01-LastName)

Rename helloworld.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut Ctrl + Shift + C to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

This link to [Introduction to C](https://www.cprogramming.com/tutorial/c/lesson1.html) is a good resource for the remainder of this lab.

## Part 1
Create a program that reads in your name from standard in and prints your name to standard out.

Input format:  
`Enter your name: `

Output format (replace John Smith with your name):  
`Your name is John Smith`

## Part 2
Modify the above program so that it also reads a number from standard input and outputs the area  
of a circle based on that input.  Set the value of pi to the nearest three decimal places with  
`#define`.  You may use the `math.h` library.

Formula: A = pi * r^2

Modified input format:  
`Enter your name: `  
`Enter the radius of your circle: `

Modified output format:  
`Your name is John Smith`  
`38 is the area of your circle.`

Save your program output to a file named output.txt using copy & paste

## What to Submit
Your folder should have the following:
name_of_your_code.c
program.exe
output.txt
Create a .zip file of your project folder (Lab01-LastName)

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.