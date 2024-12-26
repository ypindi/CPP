double pi = 3.14159783;

// Set precision to 5
cout.precision(5);

//
char gfg[] = "Welcome at GFG";
char ch = 'e';
// Print first 6 characters
cout.write(gfg, 6);

// Print the character ch
cout.put(ch);

//
cin.get()	Reads a single character from the input stream, including whitespace.
cin.getline()	Reads a line of text, including whitespace, and stops when it reaches a newline character.
cin.ignore()	Ignores a specified number of characters or until a specified delimiter is encountered.
cin.peek()	Returns the next character from the input stream without extracting it.
cin.putback()	Puts a character back into the input stream.
cin.eof()	Returns true if the end of the input stream has been reached.
cin.fail()	Returns true if an input operation has failed (e.g., when input doesn’t match the expected type).
cin.clear()	Clears the error flags on the input stream, allowing further operations.
cin.sync()	Discards unread characters from the input buffer.
cin.gcount()	Returns the number of characters extracted by the last unformatted input operation.
cin.rdbuf()	Gets or sets the associated stream buffer object for std::cin.

    // Reads stream of characters
    cin.read(gfg, 10);