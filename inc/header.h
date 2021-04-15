/**
 * @file header.h
 * @author Tejashri Wagh (tejashriwagh812@gmail.com)
 * @brief Functions to play quiz game and display scores
 * 
 * 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/**
 * @brief Error values for Maturity amount calculator operations
 * 
 */
// typedef enum error_t {
//     ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
//     ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
//     SUCCESS = 0             /**< Compute operation is successful */
// }error_t;




char start_quiz(cha name[]);

void display(float scores);

void help();

/**
 * @brief TODO Add the remaining functions
 * 
 */

#endif //HEADER_H