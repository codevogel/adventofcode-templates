# How to run

## Setup a C programming enviroment on yout system.
You need to make sure you have a compiler installed on your system (this can be done with typing ``cc`` or rather usually ``gcc`` in the command line).
If you get something like command not found you need to move onto installing one.

### For Linux based systems
Install ``build-essentials`` or equivalent on your system eg. on debian(-based) systems it's ``sudo apt install build-essentials``

### For Mac OS
Firstly make sure you have [brew](https://brew.sh/) installed, if you do not, install it with insturctions on the website, if you do, type into the terminal ``brew install gcc``

### For Windows
The process is bit more complicated, [this guide](https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/) on freecodecamp does fair job showing how to do it.

## Building
- run `make` in the same directory that files are located at.
- or alternativley you can do it manually by typing ``gcc main.c`` 
