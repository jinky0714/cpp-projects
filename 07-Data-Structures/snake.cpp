#include <ncurses.h>

int main() {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE); // ENABLES THE ARROW KEYS!
    
    int y = 10, x = 20;   // Starting position of your player
    int ch;
    
    mvprintw(y, x, "👾"); // Draw the player
    refresh();
    
    while((ch = getch()) != 27) { // Loop until ESC is pressed
        mvprintw(y, x, "  ");     // Erase the old position
        
        switch(ch) {
            case KEY_UP:    y--; break;
            case KEY_DOWN:  y++; break;
            case KEY_LEFT:  x--; break;
            case KEY_RIGHT: x++; break;
        }
        
        mvprintw(y, x, "👾"); // Draw the player at the NEW position
        refresh();
    }
    
    endwin();
    return 0;
}
