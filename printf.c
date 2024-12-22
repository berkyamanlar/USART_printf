#define PUTCHAR_PROTOTYPE int __io_putchar(uint8_t ch)
PUTCHAR_PROTOTYPE

{

HAL_UART_Transmit(&huart1, (uint8_t*)&ch, 1, 0xFFFF);

return ch;

}