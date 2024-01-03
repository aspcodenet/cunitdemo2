
#include <stdio.h>
#include <stdbool.h>
#include "safeinput.h"
#include "canIBuyBeer.h"

/*
stringcompare
strncmp
*/
int main() {
    char location;
    while(true){
        if(GetInputChar("Enter location - K or S",&location) == true){
            if(location == 'K' || location == 'S') {
                break;
            }
            printf("Please input K or S\n");
        }else{
            printf("Invalid input\n");
        }
   }
   int age;
   while(true){
        if(GetInputInt("Ange ålder", &age) == true){
            if(age > 0 && age < 150){
                break;
            }
            printf("Invalid age between 1 and 149 please\n");
        }else{
            printf("Invalid input\n");
        }
   }
   if(canIBuyBeer(location,age)) {
    printf("Japp\n");
   }else{
    printf("Nope\n");

   }
   return 0;
}