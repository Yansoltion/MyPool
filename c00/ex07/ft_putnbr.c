#include <stdio.h>
void ft_putnbr(int nb){
ft_putchar(nb);
}
void ft_putchar(char c){
  write(1,&c,1);
}
int main() {
ft_putnbr(34);
  return 0;
}
