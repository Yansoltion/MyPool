#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c){
  write(1, &c, 1);}
void ft_print_comb(void){
int first;
int second;
int last;
first='0';
while(first<='7'){
  second=first+1;
  while (second<='8') {
  last=second+1;
  while (last<='8') {
    ft_putchar(first);
    ft_putchar(second);
    ft_putchar(last);
    ft_putchar(',');
    last++;  }
  second++;  }
  first++;}}
int main(){
ft_print_comb();
  return 0;}
