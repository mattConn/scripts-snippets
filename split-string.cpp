void tokenizeStr(const string &str, const char &delim, vector<string> &tokens)
{
	int beg, end; // beginning and end of substr.
	beg = end = 0;

	while(end != -1) // until out of range (like string::npos)
	{
		end = str.find(delim, beg);
		tokens.push_back(str.substr(beg, end - beg));
		beg = end+1;
	}
}
