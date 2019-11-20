#include <stdio.h>
#include <stdlib.h>



/****************************************** ^ - ^  **************************************************/

/**
 * This program takes a positive integer to run a function which determines the smallest number
 * of $20, $10, $5, $2, and $1 bills/coins necessary to pay a dollar amount.
 *
 *Student Name:   Shiyu Wang
 *
 **/

/****************************************** ^ - ^ **************************************************/


//function that determines how many each type coins are needed to pay the amount

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *toonies, int *lonnies){

    //use modular to get the remainders after dividing by each coin value

    *twenties = dollars/ 20;
    int mod = dollars % 20;
    *tens = mod /10;
    mod = mod %10;
    *fives = mod / 5;
    mod = mod %5;
    *toonies = mod /2;
    mod = mod %2;
    *lonnies = mod;


}

int main() {

    // initialize pointers used for function
    int twenties, tens, fives, toonies, lonnies;

    //initialize the dollar amount variable
    int dollar;

    //get user input
    printf("Enter the dollar amount to be paid: \n");

    //scan input and check if the input is the correct type, exit if not
    if(scanf("%d", &dollar) != 1){
        printf("Error: Dollar Amount are positive integers. \n");
        exit(1);
    }

    //check if the input is positive, if not, exit
    else if(dollar <= 0) {
        printf("Error: Dollar Amount needs to be greater than 0. \n");
        exit(2);
    }

    //if the input is valid, call the function
    pay_amount(dollar, &twenties, &tens, &fives, &toonies, &lonnies);


    //print the output
    printf("Please pay %d twenties, %d tens, %d fives, %d toonies, %d lonnies\n", twenties, tens, fives, toonies, lonnies);

    return 0;
}
