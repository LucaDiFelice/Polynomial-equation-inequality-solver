#include <stdio.h>
#include <stdlib.h>

int main() {

    int Counter = 0;

    const int MaxCharacters = 32;

    int Variables[MaxCharacters];

    int Coeficints[MaxCharacters];

    int NumOfCoefficient = 0;

    printf( "Enter in the Num of values inside the polynomial:\n" );
    scanf( "%d", &NumOfCoefficient );
    fgetc( stdin );

    while ( Counter < NumOfCoefficient ) {

        printf( "Enter in coefficient number #%d: ", NumOfCoefficient - Counter );
        scanf( "%d", &Coeficints[Counter] );
        fgetc( stdin );

        printf( "Enter in the variable value for that number: " );
        scanf( "%d", &Variables[Counter] );
        fgetc( stdin );

        Counter++;

    }

}

int checkFactors() {

    

}





    




        
