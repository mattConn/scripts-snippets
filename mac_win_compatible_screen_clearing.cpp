// Specify OS system call for screen clearing.
// Defines string to be used with system function call.
#ifdef WIN32 // Windows
    #define CLEAR_SCREEN "cls"
#else // Linux, Mac
    #define CLEAR_SCREEN "clear"
#endif
