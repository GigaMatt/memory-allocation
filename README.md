# CS 4375 - Operating Systems

## Lab 4: Memory Allocator Evaluation

**Author: Matthew S Montoya**</br>
**Author: Matthew Iglesias**</br>
**Due: April 17, 2020**

### Objective

The objective for this lab is to evaluate three memory allocation strategies (first fit, next fit, best fit) by
constructing a program that allocates and frees memory for an extended period of time.

### Directory Structure

The directory structure used herein to manage documents and files is as follows:

At the top level, files describing the project meant for users to read: ```README.md```. The only other files that would be expected here is a ```.gitignore``` file, listing files and/or folders which Git should ignore and a ```.git``` file, containing git metadata. There are two subdirectories of this structure: ```/doc``` and ```/src```

The ```/doc``` directory shall contain all information material for documenting the project.

All source code and answers related to this project is located in the ```/src``` subdirectory.

### How To Compile & Run

1. Using a Linux VM, navigate to the ```/src``` subdirectory via the terminal
2. Enter the following command to compile the program</br>
  ```sudo make```</br>
3. Enter the following command to execute the program</br>
  ```./lab4.o```

### Dependancies

1. A Linux-based virtual machine OR
2. A Linux-based machine (Note: This should be reserved for advanced users)

### Warnings

* Although the dependencies call for the use of a virual machine, you may use a local Linux OS to compile & execute this code. This should be reserved for advanced users
