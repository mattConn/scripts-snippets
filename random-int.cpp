#include <cstdlib>                                                                                       
#include <ctime>

// generate random int over inclusive range                                                              
int randomInt(const int &max, const int &min)                                                            
{                                                                                                        
    std::srand(std::time(nullptr));                                                                      
    return std::rand() % max + min;                                                                      
}
