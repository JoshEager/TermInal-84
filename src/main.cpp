#include <ncurses.h>
#include <string>

void print(const char text[]);
void startLoop();
void evalInput();

int main() { 
    
    const char initMessage[] { "Welcome to TermInal-84. For help, type 'help'.\n" };

    initscr(); 
    print(initMessage);

    startLoop();  

    return 0; 
}

void print(const char text[]) {
    printw(text);
    refresh(); 
}

void startLoop() {
    while ( true ) {
        evalInput();
    }
}

void evalInput() {
    char rawInput[] { getInput() };
    char output[] { parseInput(rawInput) };
    print(output);
}

char getInput() {
    char * input;
    scanw(input);
    return *input;
}

char parseInput(char input[]) {
    
}
