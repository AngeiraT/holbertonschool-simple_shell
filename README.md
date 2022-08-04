# Simple Shell
> Write your own `shell`. 

![printf_image (1)](https://user-images.githubusercontent.com/105127608/180880520-a05f61b1-f75f-4f94-9730-db0647d8aedc.jpg)

Simple Shell is a project for students at Holberton School. The project test everything we have learned about the C programming language and our skills for work as a team and planning for a long term project.
### Description
The Simple Shell is a simple UNIX command interpreter written in C. The program runs based on bash commands obtained from the input stream by the user, the respective command typed by the user in executed as if in a UNIX shell.

### Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS
- Your C programs and functions will be compiled with gcc using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to (why?)
### Compilation
All of the ``.c`` files along with a main.c file are to be compiled with ``gcc`` on Ubuntu 20.04 LTS with the flags ``-Wall Werror`` ``-Wextra`` and ``-pedantic.``
The files will be compiled this way:
```{bash}
 $ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh``
```

### Execute
```{bash}
$ ./hsh
```

### Usage
The shell works like this in interactive mode:

```{bash}
($) ls -l
total 56
-rw-rw-r-- 1 vagrant vagrant   190 Jul 25 16:03 AUTHORS
-rw-rw-r-- 1 vagrant vagrant  3697 Aug  3 02:27 README.md
-rw-rw-r-- 1 vagrant vagrant   252 Aug  2 20:56 execute_line.c
-rw-rw-r-- 1 vagrant vagrant  1430 Aug  3 01:47 help_functions.c
-rwxrwxr-x 1 vagrant vagrant 17584 Aug  4 01:00 hsh
-rw-rw-r-- 1 vagrant vagrant  2246 Jul 25 22:10 man_1_simple_shell
-rw-rw-r-- 1 vagrant vagrant   187 Aug  2 20:49 read_line.c
-rw-rw-r-- 1 vagrant vagrant   422 Aug  3 01:11 shell.h
-rw-rw-r-- 1 vagrant vagrant   511 Aug  4 03:13 simple_shell.c
-rw-rw-r-- 1 vagrant vagrant   360 Aug  2 20:51 split_line.c
($)
```
```{bash}
($) pwd
/home/vagrant/simple_shell
($)
```
```{bash}
($) exit
$
```
The shell works like this in non-interactive mode:
```{bash}
$ echo "/bin/ls" | ./hsh
built_in.c      _getenv.c    man_1_simple_shell  shell.c         split_line.c
error.c         hsh          simple_shell          shell.h         useful_func.c
execute_line.c  list_path.c  README.md           special_case.c  _which.c
$
```
```{bash}
$ echo "///////bin/////ls" | ./hsh
built_in.c      _getenv.c    man_1_simple_shell  shell.c         split_line.c
error.c         hsh          simple_shell          shell.h         useful_func.c
execute_line.c  list_path.c  README.md           special_case.c  _which.c
$
```
```{bash}
$ echo "non-interactive" | ./hsh
./hsh: 1: non-interactive: not found
$
```
### Built-ins
The simple shell has support for the following built-in commands:
Command   |   Definition
---------------- | ------------------ |
env | Prints the environment
exit | Exits the shell
### Shell Flow Chart:
![Screenshot from 2022-08-03 23-18-06](https://user-images.githubusercontent.com/105127608/182755893-187d23f9-053f-419a-ae86-3d2201f413aa.png)

## Built With

  - [Ubuntu](https://ubuntu.com/) 
  - [GitHub](https://github.com/)
  - [PurpleBooth](https://github.com/PurpleBooth)

## Authors

  - **Ivanska** - [*@Ivanskaa*](https://github.com/Ivanskaa)
  - **Angeira** -[*@AngeiraT*](https://github.com/AngeiraT)

## License

This project is licensed under the Holberton School Software Engineering Program.

## Acknowledgments

  - Approaching a Project
  - Group Projects
  - Cohort 18
  - Everything you need to know to start coding your own shell

## References
  - [UNIX shell](https://en.wikipedia.org/wiki/Unix_shell)
  - [Thomsom shell](https://en.wikipedia.org/wiki/Thompson_shell)
  - [Ken Thomsom](https://en.wikipedia.org/wiki/Ken_Thompson)

