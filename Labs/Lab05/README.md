# Lab 05

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* code.c
* Makefile

**It is recommended to create a project folder for *each* part of this lab.**
Folder structure:
* Create a folder named Lab05-Lastname.  
* Inside of Lab05, create two more folders (Part1 and Part2).
* You can copy the files from the Template folder into Part1 and Part2   

In Visual Studio Code, go to File, Open Folder, and open the folder corresponding to which part of  
this lab your are working on.

Rename code.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut `Ctrl + Shift + C` to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

This link to [Functions in C](https://www.cprogramming.com/tutorial/c/lesson4.html) is a good resource for this lab.

## Part 1 - Using a Function to Return a Value:
One foot equals 12 inches.  Write a function named `feet_to_inches` that accepts a number of feet  
as an argument and returns the number of inches in that many feet.  Use the function in a program  
the prompts the user to enter a number of feet then displays the number of inches in that many feet.

### Sample execution:
```
Enter the number of feet to convert to inches: 12
The number of inches in 12 feet is 144
```

## Part 2 - Reading from Files & Playing with Pointers:
Lab 05 had you make a basic calculator.  This lab is going to add some additional feature requirements.  Feel free to reuse your code and make modifications or start from scratch.  

Your program will have 5 functions, `add_nums`, `subtract_nums`, `mult_nums`, `div_nums`, and `mod_nums`.  These functions should expect two input parameters of type double and one output parameter of type double.  

Your `main` needs to open a file called `input.txt`.  You will need to copy the contents into the file and make sure it is in the same directory as your code.  You should read two lines at a time and perform corresponding operations until end of file is reached.  For grading, we can test your code on a different input file, so it is important to not limit your loop to only your version of `input.txt`.

Use the output parameter from the function to print the resulting operation value in `main`.  In addition, write the corresponding output to a file called `output.txt`.

### input.txt:
```
a
3 7
s
9 3
m
3 4
d
90 9
o
9 4 
```

### Sample execution & Contents of output.txt:
```
10
6
12
10
1
```

## What to Submit
You created two project folders, one for each part of this lab, inside of a master folder named Lab05-LastName.  
Each folder should have at least the following:
* name_of_your_code.c  

Create a .zip file of your project folder (Lab05-LastName.zip)

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.