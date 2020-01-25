# Lab 02

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* code.c
* Makefile

Make a copy of the Template folder and name it Lab02-LastName (where last name is your last name)

In Visual Studio Code, go to File, Open Folder, and open your folder (Lab01-LastName) 

Rename code.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut `Ctrl + Shift + C` to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

This link to [If-Else Statements in C](https://www.programiz.com/c-programming/c-if-else-statement) is a good resource for this lab.

## Earthquake Charactarization - If-Else Statements

Write a program that determines the amount of damage projected based on an earthquake's Richter scale value.  Use a ladder style if-else statement to complete this lab.

| Richter Scale Number (n)        | Characterization                                 |
| --------------------------------|--------------------------------------------------|
| n < 5.0                         | little or no damage                              |
| 5.0 <= n > 5.5                  | some damage                                      |
| 5.5 <= n > 6.5                  | serious damage: walls may crack or fall          |
| 6.5 <= n > 7.0                  | disaster: houses and buildings may collapse      |
| higher                          | catastophe: most building will be destroyed      |

Sample Run:  
`Welcome to the earthquake damage estimator.`  
`Please enter a Richter scale value: 6.3`  
`This earthquake will cause serious damage: walls may crack or fall`

## What to Submit
Your folder should have the following:  
* name_of_your_code.c

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.