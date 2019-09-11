#include <string>
#include <sstream>
#include <iostream>
#include <fstream>


int main()
{

    std::ifstream infile("test.txt");

    // tokenize file
    std::string line; // file line buffer
    std::string tok; // line token buffer

    while(std::getline(infile, line)) // newline delimiter
    {   
        std::stringstream ss(line); // stringstream from line
        
        while(std::getline(ss, tok, ' ')) // space delimiter
        {   
            std::cout << tok << std::endl;
            // token handled here
        }
    }
    return 0;
}

