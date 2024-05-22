#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  while (*str)
    {
      ft_putchar(*str);
      str++;
    }
}
void convert_hex(char *str)
{
  char hex[] = "0123456789abcdef";
  ft_putchar('\\');
  ft_putchar(hex[(*str) / 16]);
  ft_putchar(hex[(*str) % 16]);
}
void ft_putstr_non_printable(char *str)
{
  while (*str)
    {
      if (*str < 32 || *str > 126)
      {
        convert_hex(str);
      }
      else{
        ft_putchar(*str);
      }
      str++;
    }
}
/*int main()
{
  ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/
