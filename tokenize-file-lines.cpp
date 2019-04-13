// tokenize file
string line; // file line buffer
string tok; // line token buffer
while(getline(infile, line)) // newline delimiter
{
	stringstream ss(line); // stringstream from line

	while(getline(ss, tok, ' ')) // space delimiter
	{
		// token handled here
	}
}
