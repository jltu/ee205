#include "BankAccount.h"

struct BankAccount{
    double balance;
    double last_withdrawl;
    double last_deposit;
};
/*
 * Implement the definitions for the
 * functions involving BankAccount from BankAccount.h here,
 *
 * Make sure to produce comments that look like this!
 * (Try to copy the formatting.)
 *
 * For BankAccount_construct() and BankAccount_destroy(),
 * if you do not remember malloc() and free(), review them
 * by creating a toy program.
 */

BankAccount* BankAccount_construct(double balance){
	struct BankAccount *newbank = (struct BankAccount*)malloc(sizeof(struct BankAccount));
	newbank->balance = balance;			//store value of balance in balance 
	newbank->last_withdrawl = 0;			//set last withdrawal as 0
	newbank->last_deposit = 0;			//set last deposit as 0
	return newbank;
}	

void BankAccount_destroy(BankAccount* ba){	
	free(ba);				//free allocated memory
}

int BankAccount_deposit(BankAccount* ba, double amount){
	if( amount > 0 && ba->balance > (DBL_MAX - amount)){			//check overflow
		return 1;
	}	
	else if(amount < 0 && ba->balance < (DBL_MIN - amount)){		//check underflow
		return -1;
	}
	else{									//success
		ba->balance += amount;
		ba->last_deposit = amount;
		return 0;
	}
}

int BankAccount_withdraw(BankAccount* ba, double amount){
	if(amount > 0 && ba->balance > (DBL_MAX - amount)){                   //check overflow
                return 1;
        }	
        else if(amount < 0 && ba->balance < (DBL_MIN - amount)){              //check underflow
                return -1;
        }

	else{								      //sucess
		ba->balance -= amount;			
		ba->last_withdrawl = amount;
		return 0;
	}
}

/* Returns the value of balance */
double BankAccount_get_balance(BankAccount* ba){	
	return ba->balance;		
}

/* Returns the valye of the last deposit */
double BankAccount_get_last_deposit(BankAccount* ba){
	return ba->last_deposit;
}

/* Returns the value of the last withdrawl */
double BankAccount_get_last_withdrawal(BankAccount* ba){
	return ba->last_withdrawl;
}


