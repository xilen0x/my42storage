# get_next_line

The get_next_line is a program for reading lines from a file written in C. 
The program incrementally reads the content of a file identified by its file descriptor (fd) and returns a complete 
line on each call.

In short, this implementation provides a way to read and get lines from a file efficiently, especially useful when 
dealing with large files without having to load the entire content into memory at once. The get_next_line function can 
be called in a loop to read successive lines from the file.
