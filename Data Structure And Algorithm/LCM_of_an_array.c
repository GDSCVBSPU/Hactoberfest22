#include <stdio.h>

//Function returns GCD of a and b

int findGCD(int a, int b) {

    if(b == 0){
        return a;
    }

    return findGCD(b, a%b);
}

int main() {

    int array[] = {8, 4, 2, 16, 33};
    int lcm = array[0];
    int gcd = array[0];
 
    //Loop through the array and find GCD
    //use GCD to find the LCM
    for(int i = 1; i < 5; ++i) {
        gcd = findGCD(array[i], lcm);

        lcm = (lcm * array[i]) / gcd;
    }
    
    printf("\nLCM of input array: %d", lcm);
    printf("\n\n");
}