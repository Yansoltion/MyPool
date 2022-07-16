#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c){
  write(1, &c, 1);
}



void ft_print_comb2(void){
  int n='0';
  int m='0';
 int i,j;
  for (i='0';i<='9';i++){
   for (j='0';j<='9';j++){
        ft_putchar(i);
        ft_putchar(j);
        ft_putchar('\n');
   }
  }
}
int main(){
  ft_print_comb2();
  return 0;
}
