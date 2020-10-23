#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i=0,j=0,k=0;
    char *alphamorse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
                        "...-",".--","-..-","-.--","--.."};

    char *nummorse[]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
    char *spacemorse[]={"......."};

    char morseCode[1000]={0},substr[1000][100]={0};
    printf("Enter a Morse Code with spaces: ");
    gets(morseCode);
    while(morseCode[k]!='\0')//for splitting sentence
    {
        j=0;
        while(morseCode[k]!=' '&&morseCode[k]!='\0')
        {
            substr[i][j]=morseCode[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(morseCode[k]!='\0')
        {
            k++;
        }
    }
      
    int l=i;
    int count=0;
 for(i=0;i<l;i++)
 {
        for(j=0;j<26;j++)
        {
            if(!strcmp(alphamorse[j],substr[i]))//strcmp returns 0 if they are same
            {
                printf("%c",(j+65));
                count++;
                break;
            }

        }
        for(j=0;j<9;j++)
        {
            if(!strcmp(nummorse[j],substr[i]))
            {
                printf("%d",j);
                count++;
                break;
            }

        }
        for(j=0;j<1;j++)
        {
            if(!strcmp(spacemorse[j],substr[i]))
            {
                printf("%c",(j+32));
                count++;
                break;
            }

        }

  }

if(count==0)
    {
        printf("the Entered Morse Code is invalid");
    }

    printf("\n");
}
