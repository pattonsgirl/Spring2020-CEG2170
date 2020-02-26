# Spring2020-CEG2170
Lab Work for CEG2170 Spring 2020

## Setting up your programming environment

### Windows
Download [MinGW](https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/)  
Install MinGW 
* Make sure it is installing to C:\MinGW
* If the folder already exists, delete it

Install MinGW components with the MinGW Installation Manager
* Right click on `mingw32-base-bin` and select Mark for Installion
* In the Installation menu, select Apply Changes

Create an Environment Variable
* In the Start / Windows menu, type Edit the system environment variables, then hit `Enter`
* Select Environment Variables
* In the lower section under System variables, double click on the row with Path
* Select New
* In the new row, type `C:\MinGW\bin` and hit `Enter`
* Select OK to exit from the menus

Check that `gcc` works
* In the Start / Windows menu, type `cmd`
* Type `gcc --version`
* If it says command not found, repeat the steps to creating your environment variable

Rename `mingw32-make` to `make`
* In File Explorer, browse to `C:\MinGW\bin`
* Find `mingw32-make.exe`
* Make a copy of the file and paste it into the same folder you are in.
* Rename the copy to `make.exe`
* Note: If you can't see the file extensions (.exe), only name your file `make`  
  Otherwise Windows will add an extra .exe to the filename  

Check that `make` works
* In the Start / Windows menu, type `cmd`
* Type `make --version`
* If it says command not found, repeat the steps to rename `mingw32-make` to `make`

### Mac
Open your Terminal  
Type `gcc` - if not previously installed, this will install gcc  
Type `make` - if not previously installed, this will install make

### Linux (Ubuntu)
Open your Terminal  
Type `sudo apt install gcc g++ make`

## Install Visual Studio Code
[Download the version for your operating system](https://code.visualstudio.com/download).

In Visual Studio Code, there is a top menu and a sidebar menu.  At the bottom of the top cluster in  
the sidebar menu, select Extensions.  In the search bar at the top, type the letter `C`.  An option  
should come up for a package named C/C++.  Click the green Install button.

This tool gives us access to *IntelliSense*.  When you use Microsoft Word, it creates blue and red  
underlines for grammar and error correction respectively.  Intellisense behaves similarly, but for  
code.  If you see a red underline in your code, you likely have an error, according to IntelliSense.  
IntelliSense can also give suggestions and usage guidelines.  Later, when we look more at functions  
you will see IntelliSense creates reminders of what a functions expects and what it will return.

## Using the Templates
There are templates provided in Pilot and in the folders above.  

The `.vscode` folder has a variety of files, the important one being `launch.json`  
`launch.json` links your program to the Debugger in Visual Studio Code.  This will be important  
as we learn loops and other functions where our variables change over time.

`code.c` is a template code file.  It includes `stdio.h` and `main`.  If you change the name of `code.c`  
you will need to update the `PROGNAME` variable in `Makefile`

`Makefile` defines a simplified way to compile our program.  By default, the `Makefile` looks for a  
code file called `code.c` and will create a program named `program.exe`.

In cmd, assuming you are in your project path, you have three commands you can use.
1. `make` - this will only compile your code.  It will not run it.
2. `make run` - this will compile your code & run the program.
3. `make clean` - this will delete your program.
