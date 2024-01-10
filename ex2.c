#include <stdio.h>
#include <string.h>

void Alphabet( char name[])
{
   int len = strlen(name);
   int temp = 0;
   for(int i = 0; i < len ; i++)
   {
       for(int j = i + 1 ; j < len ; j++)
       {
           if (name[i] > name[j])
           {
               temp = name[i];
               name[i] = name[j];
               name[j] = temp;
           }
       }
   }
   
    



int main(void)
{
    char name[1000];
    
      printf("enter characters : ");
    fgets(name , sizeof(name), stdin);
    
     name[strcspn(name, "\n")] = '\0';
    
    Alphabet(name);
     
      printf("string : %s\n", name);
}
    
