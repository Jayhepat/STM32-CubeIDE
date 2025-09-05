# LCD Interfacing using STM32F411RE

- LCD: Liquid Crystal Display is an flat oanal display or other electronically modulated poptical device that uses the optical light modulating propertirs of liquied crystal to display.
### For 16x2 LCD Dispplay:-
- #### RS: Register Select:   0 : Command |  1 : Character
- #### RW: Read / Write:   0 : Write |  1 : Read
- #### E: Enable, Low to high pluse of 3 ms.
- #### D0 to D7: Data pins used to send commands or character to be displayed.
- #### D7: Used in Read mode for reading completion of current operation
