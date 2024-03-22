/**
 @file main.h
 * @brief Header file for the main application.
 */

///This macro defines the value for a successful execution or completion of an operation.
#define SUCCESS		0

///This macro defines the value for a failure or error during the execution of an operation.
#define FAILURE		-1

/**
 * @brief Displays a menu in which user can select.
 *
 * This function is responsible for presenting a menu to the user.
 *
 */
void display_menu(void);

/**
 * @brief waits for user choice from menu and performs corresponding operations based on user input.
 *
 * This function is called after display_menu() which responsible for presenting a menu to the user, 
 * and this function takes user input and performs the selected operation (addition, subtraction, or quit) 
 * based on the input.
 *
 * @return SUCCESS (0) on successful completion, FAILURE (non-zero) on error or quit.
 *
 */
int select_menu();

