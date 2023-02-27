
#include <stdio.h> 
#include<string.h>

// input sequence of I's and D's 
void decode(char arr[9]) 
{ 
    // Initialize current_max (to make sure that we don't use repeated character )
    int curr_max = 0; 
  
    // Initialize last_entry (Keeps track for last printed digit) 
    int last_entry = 0; 
  
    int j,i,k; 
  
    
    for (i=0; i<strlen(arr); i++) 
    { 
        // Initialize 'noOfNextD' to get count of  next D's available 
        int noOfNextD = 0; 
  
        switch(arr[i]) 
        { 
        case 'I': 	// If letter is 'I' 
  
            // Calculate number of next consecutive D's available 
            j = i+1; 
            while (arr[j] == 'D' && j < strlen(arr)) 
            { 
                noOfNextD++; 
                j++; 
            } 
                
            if (i==0) 
            { 
                curr_max = noOfNextD + 2; 
  
                // If 'I' is first letter, print incremented sequence from 1 
                printf(" %d", ++last_entry); 
                printf(" %d",curr_max); 
  
                // Set max digit reached 
                last_entry = curr_max; 
            } 
            else
            { 
                // If not first letter 
  
                // Get next digit to print 
                curr_max = curr_max + noOfNextD + 1; 
  
                // Print digit for I 
                last_entry = curr_max; 
                printf(" %d",last_entry); 
            } 
  
            // For all next consecutive 'D' print decremented sequence 
            for (k=0; k<noOfNextD; k++) 
            { 
                printf(" %d",--last_entry); 
                i++; 
            } 
            break; 
  
        // If letter is 'D' 
        case 'D': 
       
            if (i == 0) 
            { 
                // If 'D' is first letter in sequence Find number of Next D's available 
                j = i+1; 
                while (arr[j] == 'D' && j <strlen(arr)) 
                { 
                    noOfNextD++; 
                    j++; 
                } 
  
                // Calculate first digit to print based on number of consecutive D's 
                curr_max = noOfNextD + 2; 
  
                // Print twice for the first time 
                printf(" %d\t%d", curr_max,curr_max - 1); 
  
                // Store last entry 
                last_entry = curr_max - 1; 
            } 
            else
            { 
                // If current 'D' is not first letter 
  
                // Decrement last_entry 
                printf(" %d",last_entry - 1); 
                last_entry--; 
            } 
            break; 
        } 
    } 
    
} 
  

int main() 
{ 
	char str[9];
    printf("enter string in capital letters in form of I's and D's :");
	gets(str);
    decode(str); 
   
    return 0; 
} 
