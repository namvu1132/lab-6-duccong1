/*
1. Input a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: "one thousand two hundred thirty four" |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex1(int testcase){
	//your codes here
		int unit = n % 10;
		int ten = (n / 10) % 10;
		int hundred = (n / 100) % 10;
		int thousand = n / 1000;
		
		switch (thousand)
			{
				case 1:{
					printf("one ");
					break;}
				case 2:{
					printf("two ");
					break;}
				case 3:{
					printf("three ");
					break;}
				case 4:{
					printf("four ");
					break;}
				case 5:{
					printf("five ");
					break;}
				case 6:{
					printf("six ");
					break;}
				case 7:{
					printf("seven ");
					break;}
				case 8:{
					printf("eight ");
					break;}
				case 9:{
					printf("nine ");
					break;}
				}printf("thousand ");
			switch(hundred){
				case 1:{
					printf("tne ");
					break;}
				case 2:{
					printf("two ");
					break;}
				case 3:{
					printf("three ");
					break;}
				case 4:{
					printf("four ");
					break;}
				case 5:{
					printf("five ");
					break;}
				case 6:{
					printf("six ");
					break;}
				case 7:{
					printf("seven ");
					break;}
				case 8:{
					printf("eight ");
					break;}
				case 9:{
					printf("nine ");
					break;}
			}printf("hundred ");
			switch(ten){
				case 1:{
					printf("eleven ");
					break;}
				case 2:{
					printf("twenty ");
					break;}
				case 3:{
					printf("thirdty ");
					break;}
				case 4:{
					printf("fourty ");
					break;}
				case 5:{
					printf("fifty ");
					break;}
				case 6:{
					printf("sixty ");
					break;}
				case 7:{
					printf("neventy ");
					break;}
				case 8:{
					printf("nightty ");
					break;}
				case 9:{
					printf("ninety ");
					break;}
			}
			switch(unit){
				case 1:{
					printf("one ");
					break;}
				case 2:{
					printf("two ");
					break;}
				case 3:{
					printf("three ");
					break;}
				case 4:{
					printf("four ");
					break;}
				case 5:{
					printf("five ");
					break;}
				case 6:{
					printf("six ");
					break;}
				case 7:{
					printf("seven ");
					break;}
				case 8:{
					printf("eight ");
					break;}
				case 9:{
					printf("nine ");
					break;}
			}
}

int main(int argc, char *argv[]) {
	int testcase = atoi(argv[1]);
	
	ex1(testcase);
		
	return 0;
}
