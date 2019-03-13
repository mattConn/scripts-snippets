// needs <unistd.h>

// unistd chdir wrapper
bool changedir(string &filepath)
{
	if(chdir(filepath.c_str()) < 0) return false;

	return true;
}

// realpath wrapper
string expandpath(char *filepath)
{
	char buf[256];
	realpath(filepath, buf); // expand path to absolute path

	return string(buf);
}
