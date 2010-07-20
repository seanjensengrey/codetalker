
typedef enum {
    tTSTRING,  // triple string
    tSSTRING,  // single-quoted string
    tSTRING,   // normal (double-quoted) string
    tID,       // [a-zA-Z_][a-zA-Z_0-9]*
    tNUMBER,   // ([1-9]+(\.\d*))|(\.\d+)
    tINT,      // [1-9][0-9]*
    tCCOMMENT, // // blah\n or /** blah **/
    tPYCOMMENT,// # blah\n
    tWHITE,    // space | \t
    tNEWLINE   // \n
} ttype;

int check_ctoken(ttype tid, int at, char* text, int ln);
int check_chartoken(char* chars, int num, int at, char* text, int ln);
int check_stringtoken(char** strings, int num, int at, char* text, int ln);

int t_white(int at, char* text, int ln);
