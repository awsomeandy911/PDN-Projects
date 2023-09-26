#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//gets length of given string
int getLength(char *s)
{
    int i;
    for(i = 0; s[i]; i++);
	return i;	 
}

//counts how many occurences in string
void letterOccurence(char *s)
{
	int count = 0;
    int n = getLength(s); 
 
    for(int i = 0; i < n; i++)  
    {
     	count = 1;
    	if(s[i])
    	{
		
 		  for(int j = i + 1;j < n; j++)  
	      {      	
	        if(s[i] == s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	       	      
			printf(" '%c' = %d \n",s[i],count);
        }   
 	} 	 
}

int main() 
{
    FILE *inputFile = fopen("input 1.txt", "r");
    char s[1000];
    gets(s);
    
    fscanf(inputFile, "%c", &s);
   
    letterOccurence(s);
    return(0);
}