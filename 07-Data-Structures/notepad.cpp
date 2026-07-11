#include <iostream>
#include <stack>
#include <string>
#include <ncurses.h>

using namespace std;

int main() {
    // 1. Initialize the NCurses Screen layout
    initscr();
    cbreak();             // React immediately to typing without pressing enter
    noecho();             // Don't automatically print characters; let us control it
    start_color();        // Turn on terminal color powers!
    
    // Set up a classic neon hacker green color pair
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    
    stack<string> textStack;
    string currentWord = "";
    char inputChar;
    
    // Draw the beautiful retro neon frame
    mvprintw(1, 2, "==========================================================");
    mvprintw(2, 2, "   📟 JINKY'S RETRO NOTEPAD (Type 'UNDO' to erase last word) ");
    mvprintw(3, 2, "==========================================================");
    mvprintw(5, 2, "Type words (Press SPACE after each word. Press ESC to quit):");
    mvprintw(7, 2, ">> ");
    refresh();
    
    // 2. Main Interactive Keyboard Loop
    while (true) {
        inputChar = getch(); // Read a single keystroke instantly
        
        if (inputChar == 27) { // 27 is the ASCII number for the ESCAPE key
            break; 
        }
        
        if (inputChar == ' ') { // Spacebar pressed! Word is complete.
            if (currentWord == "UNDO") {
                // STACK MAGIC: Pop the previous word off the top of our stack!
                if (!textStack.empty()) {
                    textStack.pop(); 
                }
            } else if (!currentWord.empty()) {
                textStack.push(currentWord); // Push normal word onto the stack
            }
            
            // Clear the display line dynamically and redraw the sentence
            move(9, 2);
            clrtoeol(); // Erase the line cleanly
            printw("CURRENT STRING STACK LAYOUT: ");
            
            // Temporary stack to display everything in chronological order
            stack<string> displayStack = textStack;
            string fullSentence = "";
            while (!displayStack.empty()) {
                fullSentence = displayStack.top() + " " + fullSentence;
                displayStack.pop();
            }
            
            attron(A_BOLD); 
            printw(fullSentence.c_str()); // FIXED: Safe string translation
            attroff(A_BOLD);
            
            currentWord = ""; // Reset for the next word
            move(7, 5);
            clrtoeol();       // Clear input box
            
        } else if (inputChar == 127 || inputChar == 8) { // Backspace handler catch
            if (!currentWord.empty()) {
                currentWord.pop_back();
                move(7, 5);
                clrtoeol();
                printw(currentWord.c_str());
            }
        } else {
            // Keep building the current running word
            currentWord += inputChar;
            mvprintw(7, 5, currentWord.c_str()); // FIXED: Safe character print
        }
        
        refresh(); // Render updates to Chromebook screen smoothly
    }
    
    // 3. Close the interface cleanly when ESC is pressed
    endwin();
    cout << "\nPad closed successfully. Your stack exercises are complete! 🚀" << endl;
    
    return 0;
}
