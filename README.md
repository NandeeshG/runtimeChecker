# runtimeChecker
## Calculate the total runtime of your program.

### Steps to run

### 1. Download runtimeChecker.cpp
Simply download the individual file and put in same folder as your program. (recommended, however different directories will also work perfectly fine) 

### 2. Compile and link using g++.
Open Terminal. Go to folder containing `runtimeChecker.cpp`. Then use the following command in terminal. (note gcc/g++ is a prerequisite)
(This code works on various Linux distros including Ubuntu, please refer the internet for similar commands in Windows.)
```
g++ runtimeChecker.cpp -o a.out
```

### 3. Compile your program, make its executable.
If your program is in c++, use g++ command
```
g++ <your_program_name> -o <exec_name>
```
As an example, I have included the file `example_program.cpp` which finds fibonacci(n).
We compile it as follows
```
g++ example_program.cpp -o p.out
```

### 4. Make the input file
Make the input file with input in it, and save in same directory. Name it input.txt
As an example I have made input.txt also for example_program.cpp, you can change its contents after downloading on your machine if you want.

### 5. check runtime!
Run the following command in terminal.
```
./a.out ./<exec_name> input.txt output.txt
```
As an example,
```
./a.out ./p.out input.txt output.txt
```
This gives the output -

### This will do the following
- Run your program using `input.txt` as `stdin`
- Put the output from `stdout` into a new file `output.txt`
- Display the error from `stderr` stream in terminal.
- Calculate and display running time of your program.

**Note, write correct file paths (eg, use ../ to go up) if the directory for any file is different**

### Thanks for using !
Made by Nandeesh Gupta, with the help of StackOverflow ofcours :)
