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
