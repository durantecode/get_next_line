# get_next_line - read lines from a file descriptor #

## This is my get_next_line project for 42-Cursus Madrid 2021 ##

The aim of this project is to write a function that reads a file from an opened file descriptor, and reads a line that ends with a newline character,
when you call the function again on the same file, it grabs the next line, and so on until reaching EOF (end of file);

We learned about static variables and also we had to deal with memory allocation and free to prevent leaks.

It returns: \
It returns:   | 
------------- | -------------
-1 | Content Cell
-0 | Content Cell
	-1 if an error was encountered. \
	 0 if reached EOF. \
	 1 when line is read succesfully.

It passes all tests for the following testers (Use them only as a reference):
 
✅ [gnlTester](https://github.com/Tripouille/gnlTester) \
✅ [42TESTER-GNL](https://github.com/Mazoise/42TESTERS-GNL) 

- **Status:** *Finished*
- **Result:** *115/100 by moulinette*

Contact: ldurante@student.42madrid.com
