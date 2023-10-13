int printf(const char *format, ...);int main(int argc, char* argv[]){for (int i = 0; i < argc-1; i++)printf("%s ", argv[i+1]);printf("\n");}
