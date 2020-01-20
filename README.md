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
Type `sudo apt install gcc make`
