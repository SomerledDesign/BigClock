#ifndef FONT_H_
#define FONT_H_

/**
* @brief A 7-Segment display 'font'.
*
* This is the font used to convert the values from 0-F into a displayable
* character on a 7-segment display.  There is one value for each character.
*
* The relationship of the font bit positions to the LED display segments:
*
@verbatim
   --1--
  |     |
  2     0
  |     |
   --3--
  |     |
  6     4
  |     |
   --5--
@endverbatim
*
* For example: In order to display the number '1', the #0 and #4 segments need to be
* turned on and the rest turned off.  Therefore the binary value 0010001
* (hex 0x11) represents the segment values to display a '1'.
*
* The most significant bit is not used.
*************************************************************************************/
static const uint8_t font[] =
    {
        0b01110111, // 0
        0b00010001, // 1
        0b01101011, // 2
        0b00111011, // 3
        0b00011101, // 4
        0b00111110, // 5
        0b01111110, // 6
        0b00010011, // 7
        0b01111111, // 8
        0b00111111, // 9
        0b01011111, // A
        0b01111100, // b
        0b01100110, // C
        0b01111001, // d
        0b01101110, // E
        0b01001110, // F
        0b01101000, // c
        0b01011000, // n
        0b01111000, // o
        0b00001000  // - (a dash symbol)
};

#endif
