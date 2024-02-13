# Pipex Project README

## Overview
The Pipex project simulates the behavior of the Unix pipe command in a C program, allowing for the redirection of output from one command as input to another.  
It's an educational exercise to understand process creation, inter-process communication, and the use of file descriptors in Unix-like systems.  

## Key Features
Executes commands with their parameters, redirecting the output of the first command to the input of the second command.  
Handles file input and output, simulating the shell command < file1 cmd1 | cmd2 > file2.  
Implements error handling and memory management to prevent leaks and crashes.  

## Bonus Features
Handling of multiple pipes, allowing for a sequence of commands to be executed in a pipeline.  
Support for "here_doc" functionality, simulating the << and >> bash operators for input redirection.  

## Skills Acquired
Mastery of Unix process creation and management, including forking and using pipes for IPC.  
Understanding of file descriptor manipulation for input and output redirection.  
Advanced error handling and memory management in C programming.  

## Usage
Compile with make and run with  
``./pipex file1 'cmd1' 'cmd2' file2``  
For bonus features, follow the project's specifications for multiple commands or "here_doc" functionality.
