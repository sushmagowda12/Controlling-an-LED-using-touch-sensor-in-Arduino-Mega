#include<avr/io.h>

#define LED PB7                  
#define TOUCH_IN PB4             

int main()
{
  DDRB |= (1<<LED);              
  DDRB &= ~(1<<TOUCH_IN);        

  while(1)                       
  {
    if (PINB&(1<<TOUCH_IN))      
    {
      PORTB |= (1<<LED);         
    }
    else
    {
      PORTB &=~(1<<LED);         
    }
  }
  return 0;
}
