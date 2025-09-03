# **UART - Universal Asynchronous Recevier and Transmiter**
- It's an Serial communication.
- Common uart's ports are like Serial Port, COM Port, RS232, RS485.
- Useful for communiction to:- Microcontrollers, Computer, Other FPGA

### **Types:**
#### 1) Asynchronous:
* CLK Signal is not used.
* Transfer *Byte Data* in the farmed structure at a time.
#### 2) Synchronous :
* Uses CLK Signals.
* transfer Bulk data.

### **UART Parameters**
* Boud Rate: 9600, 19200, 115200 others
* Number of Data Bits: (7,8)
* Parity Bit to ON or OFF.
* Stop Bits for 0,1,2.
* Flow Control (None, On, Hardware).

### Steps to UART Transmit:-
* Enable CLK acces to GPIOA.
* SET PA2 MODE to Alternative function mode.
* SET PA2 Alternative function mode to UART_TX (AF07) to 10.
* Configiur UART Module.
* Enable ClK access to USART2.
* Configure Baud Rate.
* Configure Transfer Direction.
* Enable USART Module.
* Enable Transmit CR1
* Enable USART enable UE

## Above Examples:
### 1)
### 2)
### 3)
### 4) Using the menber elements from the included header - UART program for Transmitter and receiver.
* USART CR1 (CONTROL REGISTER) BITS
~~~ 
#define CR1_TE  (1U<<3)   // Transmitter enable
#define CR1_UE  (1U<<13)  // USART enable
#define CR1_RE  (1U<<2)   // Receiver enable
~~~
* USART SR (STATUS REGISTER) BITS
 1. Enable clock access to GPIOA
 2. Set PA2 mode to alternate function (TX)
  ~~~
    GPIOA->MODER &= ~(1U << 4);   // Clear bit 4
    GPIOA->MODER |=  (1U << 5);   // Set bit 5 (AF mode)
  ~~~
 3. Set PA3 mode to alternate function (RX)
 4. Configure PA2 alternate function (AF7 = USART2_TX)
 5. Configure PA3 alternate function (AF7 = USART2_RX)
 6. Enable clock access to USART2
 7. Configure baud rate
 8. Enable transmitter and receiver
 9. Enable USART2
   
