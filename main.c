//
//  main.c
//  coin_flip
//
//  Created by Ree on 12/12/16.
//  Copyright © 2016 Ree. All rights reserved.
//
//Simulate the flip of a coin.
//Save the results and show a histogram of flip outcomes.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    int heads;
    int tails;
    int flips;
    int inputflips;
    int outcome;
    int i,j;
    
    char n[2][20] = {"heads", "tails"}; //outcome options
    
    heads = 0;
    tails = 0;
    outcome = 0;
    
    printf("How many coin flips?: ");
    scanf("%d",&inputflips);
    
    for(flips = 0; flips<=inputflips; flips++)
    {
        outcome = rand();
        //printf("%d\n",outcome);
    if(outcome%2 == 0)
    {
        heads++;
    }
    else
    {
        tails++;
    }
    }
    int m[2] = {heads,tails};
    
    printf("%17s%17s\n","Result", "Frequency");
    for(i=0; i <= 1; i++)
    {
        printf("%17s       ", n[i]);
        // the inner for loop, for every row, read column by column and print the bar...
        for(j = 1; j<= m[i]; j++)
            // print the asterisk bar...repeat...
            printf("*");
        // go to new line for new row...repeats...
        printf("\n");
    }

    
    printf("%d,%d\n",heads,tails);
    
}
