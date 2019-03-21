/*
   fontsDigit.h
   
   There are 2 different fonts, they are not compatible. One (Digit) is to print
   the time with vertical slide show, one (Alpha) is to print the text. Both are
   optimized for the usage to perform better speed and to reduce memory usage.

   Written by Eric Paquot on 03/03/2019
*/


#include <avr/pgmspace.h>


#define FONT_DIGIT_STRIDE 10
const byte FONT_DIGIT_SIZE[][2] = {       // A:analog, D:digital,  6x8:width=6/height=8
  {6, 8},  //  0 = big bold 1 : 6x8 (old)
  {6, 8},  //  1 = big bold 2 : 6x8 (impact)
  {6, 8},  //  2 = big bold 3 : 6x8 (modern)
  {6, 8},  //  3 = big bold 4 : 6x8 (digital)
  
  {5, 8},  //  4 = big regular 1 : 5x8 (impact)
  {5, 8},  //  5 = big regular 2 : 5x8 (digital)
  
  {4, 8},  //  6 = big narrow 1 : 4x8 (impact)
  {4, 8},  //  7 = big narrow 2 : 4x8 (digital)
  
  {3, 8},  //  8 = big thin 1 : 3x8 (impact)
  {3, 8},  //  9 = big thin 2 : 3x8 (digital)
  
  {4, 6},  // 10 = tiny narrow 1 : 4x6 (impact)
  {4, 6},  // 11 = tiny narrow 2 : 4x6 (digital)
  
  {3, 6},  // 12 = tiny thin 1 : 3x6 (impact)
  {3, 6},  // 13 = tiny thin 1 : 3x6 (digital)
  
  {6, 5},  // 14 = micro bold 1 : 6x5 (impact)
  {6, 5},  // 15 = micro bold 2 : 6x5 (digital)
  
  {4, 5},  // 16 = micro narrow 1 : 4x5 (impact)
  {4, 5},  // 17 = micro narrow 2 : 4x5 (digital)
  
  {3, 5},  // 18 = micro thin 1 : 3x5 (impact)
  {3, 5}   // 19 = micro thin 2 : 3x5 (digital)
};
const byte FONT_DIGIT[][8] PROGMEM = {    // A:analog, D:digital,  6x8:width=6/height=8

  //-0-------------------------------------------------------------------------------------
  
  {B00011110, B00110011, B00110011, B00110011, B00110011, B00110011, B00110011, B00011110}, // 0 big bold 1 : 6x8 (old)
  {B00001100, B00011100, B00001100, B00001100, B00001100, B00001100, B00001100, B00011110}, // 1
  {B00011110, B00110011, B00110011, B00000011, B00000110, B00001100, B00011000, B00111111}, // 2
  {B00111111, B00000110, B00001110, B00000011, B00000011, B00110011, B00110011, B00011110}, // 3
  {B00000011, B00000111, B00001011, B00010011, B00110011, B00111111, B00000011, B00000011}, // 4
  {B00111110, B00110000, B00111110, B00110011, B00000011, B00110011, B00110011, B00011110}, // 5
  {B00011110, B00110000, B00111110, B00110011, B00110011, B00110011, B00110011, B00011110}, // 6
  {B00111111, B00000011, B00000110, B00001100, B00001100, B00011000, B00011000, B00011000}, // 7
  {B00011110, B00110011, B00110011, B00011110, B00110011, B00110011, B00110011, B00011110}, // 8
  {B00011110, B00110011, B00110011, B00110011, B00110011, B00011111, B00000011, B00011110}, // 9
  
  {B00011110, B00110011, B00110011, B00110011, B00110011, B00110011, B00110011, B00011110}, // 0 big bold 2 : 6x8 (impact)
  {B00001100, B00011100, B00111100, B00001100, B00001100, B00001100, B00001100, B00111111}, // 1
  {B00011110, B00110011, B00000011, B00000110, B00011100, B00110000, B00110000, B00111111}, // 2
  {B00011110, B00110011, B00000011, B00001110, B00000011, B00000011, B00110011, B00011110}, // 3
  {B00110000, B00110011, B00110011, B00110011, B00011111, B00000011, B00000011, B00000011}, // 4
  {B00111110, B00110000, B00110000, B00111110, B00000011, B00000011, B00110011, B00011110}, // 5
  {B00001110, B00011000, B00110000, B00111110, B00110011, B00110011, B00110011, B00011110}, // 6
  {B00111111, B00110011, B00000011, B00000110, B00001100, B00001100, B00001100, B00001100}, // 7
  {B00011110, B00110011, B00110011, B00011110, B00110011, B00110011, B00110011, B00011110}, // 8
  {B00011110, B00110011, B00110011, B00110011, B00011111, B00000011, B00000110, B00011100}, // 9
  
  {B00011110, B00110001, B00110001, B00110011, B00100011, B00100011, B00100011, B00011110}, // 0 big bold 3 : 6x8 (modern)
  {B00000100, B00000100, B00000100, B00001100, B00001100, B00001100, B00001100, B00001100}, // 1
  {B00011110, B00110001, B00110001, B00000001, B00011110, B00100000, B00100011, B00111111}, // 2
  {B00011110, B00110001, B00110001, B00000110, B00000011, B00000011, B00100011, B00011110}, // 3
  {B00110000, B00110001, B00110001, B00110001, B00011111, B00000011, B00000011, B00000011}, // 4
  {B00111110, B00110001, B00110000, B00111110, B00000011, B00000011, B00100011, B00011110}, // 5
  {B00001110, B00011000, B00110000, B00111110, B00100011, B00100011, B00100011, B00011110}, // 6
  //{B00111111, B00110001, B00000001, B00000010, B00000100, B00001100, B00001100, B00001100}, // 7
  {B00111111, B00110001, B00110001, B00000010, B00000100, B00001100, B00001100, B00001100}, // 7
  {B00011110, B00110001, B00110001, B00011110, B00100011, B00100011, B00100011, B00011110}, // 8
  {B00011110, B00110001, B00110001, B00110001, B00011111, B00000011, B00000110, B00011100}, // 9
  
  {B00111111, B00110011, B00110011, B00110011, B00110011, B00110011, B00110011, B00111111}, // 0 big bold 4 : 6x8 (digital)
  {B00001100, B00001100, B00001100, B00001100, B00001100, B00001100, B00001100, B00001100}, // 1
  {B00111111, B00000011, B00000011, B00111111, B00110000, B00110000, B00110000, B00111111}, // 2
  {B00111111, B00000011, B00000011, B00111111, B00000011, B00000011, B00000011, B00111111}, // 3
  {B00110011, B00110011, B00110011, B00111111, B00000011, B00000011, B00000011, B00000011}, // 4
  {B00111111, B00110000, B00110000, B00111111, B00000011, B00000011, B00000011, B00111111}, // 5
  {B00111111, B00110000, B00110000, B00111111, B00110011, B00110011, B00110011, B00111111}, // 6
  {B00111111, B00000011, B00000011, B00000011, B00000011, B00000011, B00000011, B00000011}, // 7
  {B00111111, B00110011, B00110011, B00111111, B00110011, B00110011, B00110011, B00111111}, // 8
  {B00111111, B00110011, B00110011, B00111111, B00000011, B00000011, B00000011, B00111111}, // 9

  //-4-------------------------------------------------------------------------------------
  
  {B00001110, B00010001, B00010001, B00010001, B00010001, B00010001, B00010001, B00001110}, // 0 big regular 1 : 5x8 (impact)
  {B00000100, B00001100, B00010100, B00000100, B00000100, B00000100, B00000100, B00011111}, // 1
  {B00001110, B00010001, B00000001, B00000010, B00001100, B00010000, B00010000, B00011111}, // 2
  {B00001110, B00010001, B00000001, B00000110, B00000001, B00000001, B00010001, B00001110}, // 3
  {B00010000, B00010001, B00010001, B00010001, B00001111, B00000001, B00000001, B00000001}, // 4
  {B00011110, B00010000, B00010000, B00011110, B00000001, B00000001, B00010001, B00001110}, // 5
  {B00001110, B00010000, B00010000, B00011110, B00010001, B00010001, B00010001, B00001110}, // 6
  {B00011111, B00000001, B00000001, B00000010, B00000100, B00000100, B00000100, B00000100}, // 7
  {B00001110, B00010001, B00010001, B00001110, B00010001, B00010001, B00010001, B00001110}, // 8
  {B00001110, B00010001, B00010001, B00010001, B00001111, B00000001, B00000001, B00001110}, // 9

  {B00011111, B00010001, B00010001, B00010001, B00010001, B00010001, B00010001, B00011111}, // 0 big regular 2 : 5x8 (digital)
  {B00000100, B00000100, B00000100, B00000100, B00000100, B00000100, B00000100, B00000100}, // 1
  {B00011111, B00000001, B00000001, B00011111, B00010000, B00010000, B00010000, B00011111}, // 2
  {B00011111, B00000001, B00000001, B00011111, B00000001, B00000001, B00000001, B00011111}, // 3
  {B00010001, B00010001, B00010001, B00011111, B00000001, B00000001, B00000001, B00000001}, // 4
  {B00011111, B00010000, B00010000, B00011111, B00000001, B00000001, B00000001, B00011111}, // 5
  {B00011111, B00010000, B00010000, B00011111, B00010001, B00010001, B00010001, B00011111}, // 6
  {B00011111, B00000001, B00000001, B00000001, B00000001, B00000001, B00000001, B00000001}, // 7
  {B00011111, B00010001, B00010001, B00011111, B00010001, B00010001, B00010001, B00011111}, // 8
  {B00011111, B00010001, B00010001, B00011111, B00000001, B00000001, B00000001, B00011111}, // 9

  //-6-------------------------------------------------------------------------------------

  {B00000110, B00001001, B00001001, B00001001, B00001001, B00001001, B00001001, B00000110}, // 0 big narrow 1 : 4x8 (impact)
  {B00000010, B00000110, B00000010, B00000010, B00000010, B00000010, B00000010, B00000111}, // 1
  //{B00000110, B00001001, B00000001, B00000010, B00000100, B00001000, B00001000, B00001111}, // 2
  {B00000110, B00001001, B00000001, B00000001, B00000010, B00000100, B00001000, B00001111}, // 2
  {B00000110, B00001001, B00000001, B00000110, B00000001, B00000001, B00001001, B00000110}, // 3
  {B00001000, B00001001, B00001001, B00001001, B00000111, B00000001, B00000001, B00000001}, // 4
  {B00001110, B00001000, B00001000, B00001110, B00000001, B00000001, B00001001, B00000110}, // 5
  {B00000110, B00001000, B00001000, B00001110, B00001001, B00001001, B00001001, B00000110}, // 6
  {B00001111, B00000001, B00000001, B00000010, B00000100, B00000100, B00000100, B00000100}, // 7
  {B00000110, B00001001, B00001001, B00000110, B00001001, B00001001, B00001001, B00000110}, // 8
  {B00000110, B00001001, B00001001, B00001001, B00000111, B00000001, B00000001, B00000110}, // 9

  {B00001111, B00001001, B00001001, B00001001, B00001001, B00001001, B00001001, B00001111}, // 0 big narrow 1 : 4x8 (digital)
  {B00000010, B00000010, B00000010, B00000010, B00000010, B00000010, B00000010, B00000010}, // 1
  {B00001111, B00000001, B00000001, B00001111, B00001000, B00001000, B00001000, B00001111}, // 2
  {B00001111, B00000001, B00000001, B00001111, B00000001, B00000001, B00000001, B00001111}, // 3
  {B00001001, B00001001, B00001001, B00001111, B00000001, B00000001, B00000001, B00000001}, // 4
  {B00001111, B00001000, B00001000, B00001111, B00000001, B00000001, B00000001, B00001111}, // 5
  {B00001111, B00001000, B00001000, B00001111, B00001001, B00001001, B00001001, B00001111}, // 6
  {B00001111, B00000001, B00000001, B00000001, B00000001, B00000001, B00000001, B00000001}, // 7
  {B00001111, B00001001, B00001001, B00001111, B00001001, B00001001, B00001001, B00001111}, // 8
  {B00001111, B00001001, B00001001, B00001111, B00000001, B00000001, B00000001, B00001111}, // 9

  //-8-------------------------------------------------------------------------------------

  {B00000010, B00000101, B00000101, B00000101, B00000101, B00000101, B00000101, B00000010}, // 0 big thin 1 : 3x8 (impact)
  {B00000010, B00000110, B00000010, B00000010, B00000010, B00000010, B00000010, B00000111}, // 1
  {B00000010, B00000101, B00000001, B00000001, B00000010, B00000100, B00000100, B00000111}, // 2
  {B00000010, B00000101, B00000001, B00000010, B00000001, B00000001, B00000101, B00000010}, // 3
  {B00000100, B00000101, B00000101, B00000101, B00000011, B00000001, B00000001, B00000001}, // 4
  {B00000110, B00000100, B00000100, B00000110, B00000001, B00000001, B00000101, B00000010}, // 5
  {B00000010, B00000100, B00000100, B00000110, B00000101, B00000101, B00000101, B00000010}, // 6
  {B00000111, B00000001, B00000001, B00000001, B00000010, B00000010, B00000010, B00000010}, // 7
  {B00000010, B00000101, B00000101, B00000010, B00000101, B00000101, B00000101, B00000010}, // 8
  {B00000010, B00000101, B00000101, B00000101, B00000011, B00000001, B00000001, B00000010}, // 9

  {B00000111, B00000101, B00000101, B00000101, B00000101, B00000101, B00000101, B00000111}, // 0 big thin 2 : 3x8 (digital)
  {B00000010, B00000010, B00000010, B00000010, B00000010, B00000010, B00000010, B00000010}, // 1
  {B00000111, B00000001, B00000001, B00000111, B00000100, B00000100, B00000100, B00000111}, // 2
  {B00000111, B00000001, B00000001, B00000111, B00000001, B00000001, B00000001, B00000111}, // 3
  {B00000101, B00000101, B00000101, B00000111, B00000001, B00000001, B00000001, B00000001}, // 4
  {B00000111, B00000100, B00000100, B00000111, B00000001, B00000001, B00000001, B00000111}, // 5
  {B00000111, B00000100, B00000100, B00000111, B00000101, B00000101, B00000101, B00000111}, // 6
  {B00000111, B00000001, B00000001, B00000001, B00000001, B00000001, B00000001, B00000001}, // 7
  {B00000111, B00000101, B00000101, B00000111, B00000101, B00000101, B00000101, B00000111}, // 8
  {B00000111, B00000101, B00000101, B00000111, B00000001, B00000001, B00000001, B00000111}, // 9

  //-10------------------------------------------------------------------------------------
  
  {B00000110, B00001001, B00001001, B00001001, B00001001, B00000110, 0x00, 0x00}, // 0 tiny narrow 1 : 4x6 (impact)
  {B00000010, B00000110, B00000010, B00000010, B00000010, B00000111, 0x00, 0x00}, // 1
  {B00000110, B00001001, B00000001, B00000110, B00001000, B00001111, 0x00, 0x00}, // 2
  {B00000110, B00001001, B00000010, B00000001, B00001001, B00000110, 0x00, 0x00}, // 3
  {B00001000, B00001001, B00001001, B00000111, B00000001, B00000001, 0x00, 0x00}, // 4
  {B00001110, B00001000, B00001110, B00000001, B00001001, B00000110, 0x00, 0x00}, // 5
  {B00000110, B00001000, B00001110, B00001001, B00001001, B00000110, 0x00, 0x00}, // 6
  {B00001111, B00000001, B00000010, B00000100, B00000100, B00000100, 0x00, 0x00}, // 7
  {B00000110, B00001001, B00000110, B00001001, B00001001, B00000110, 0x00, 0x00}, // 8
  {B00000110, B00001001, B00001001, B00000111, B00000001, B00000110, 0x00, 0x00}, // 9

  {B00001111, B00001001, B00001001, B00001001, B00001001, B00001111, 0x00, 0x00}, // 0 tiny narrow 2 : 4x6 (digital)
  {B00000010, B00000010, B00000010, B00000010, B00000010, B00000010, 0x00, 0x00}, // 1
  {B00001111, B00000001, B00001111, B00001000, B00001000, B00001111, 0x00, 0x00}, // 2
  {B00001111, B00000001, B00001111, B00000001, B00000001, B00001111, 0x00, 0x00}, // 3
  {B00001001, B00001001, B00001111, B00000001, B00000001, B00000001, 0x00, 0x00}, // 4
  {B00001111, B00001000, B00001111, B00000001, B00000001, B00001111, 0x00, 0x00}, // 5
  {B00001111, B00001000, B00001111, B00001001, B00001001, B00001111, 0x00, 0x00}, // 6
  {B00001111, B00000001, B00000001, B00000001, B00000001, B00000001, 0x00, 0x00}, // 7
  {B00001111, B00001001, B00001111, B00001001, B00001001, B00001111, 0x00, 0x00}, // 8
  {B00001111, B00001001, B00001111, B00000001, B00000001, B00001111, 0x00, 0x00}, // 9

  //-12------------------------------------------------------------------------------------
  
  {B00000010, B00000101, B00000101, B00000101, B00000101, B00000010, 0x00, 0x00}, // 0 tiny thin 1 : 3x6 (impact)
  {B00000010, B00000110, B00000010, B00000010, B00000010, B00000111, 0x00, 0x00}, // 1
  {B00000110, B00000001, B00000001, B00000010, B00000100, B00000111, 0x00, 0x00}, // 2
  {B00000110, B00000001, B00000010, B00000001, B00000001, B00000110, 0x00, 0x00}, // 3
  {B00000101, B00000101, B00000101, B00000111, B00000001, B00000001, 0x00, 0x00}, // 4
  {B00000110, B00000100, B00000110, B00000001, B00000001, B00000110, 0x00, 0x00}, // 5
  {B00000011, B00000100, B00000110, B00000101, B00000101, B00000010, 0x00, 0x00}, // 6
  {B00000111, B00000001, B00000001, B00000010, B00000010, B00000010, 0x00, 0x00}, // 7
  {B00000010, B00000101, B00000010, B00000101, B00000101, B00000010, 0x00, 0x00}, // 8
  {B00000010, B00000101, B00000101, B00000011, B00000001, B00000110, 0x00, 0x00}, // 9

  {B00000111, B00000101, B00000101, B00000101, B00000101, B00000111, 0x00, 0x00}, // 0 tiny thin 2 : 3x6 (digital)
  {B00000010, B00000010, B00000010, B00000010, B00000010, B00000010, 0x00, 0x00}, // 1
  {B00000111, B00000001, B00000111, B00000100, B00000100, B00000111, 0x00, 0x00}, // 2
  {B00000111, B00000001, B00000111, B00000001, B00000001, B00000111, 0x00, 0x00}, // 3
  {B00000101, B00000101, B00000111, B00000001, B00000001, B00000001, 0x00, 0x00}, // 4
  {B00000111, B00000100, B00000111, B00000001, B00000001, B00000111, 0x00, 0x00}, // 5
  {B00000111, B00000100, B00000111, B00000101, B00000101, B00000111, 0x00, 0x00}, // 6
  {B00000111, B00000001, B00000001, B00000001, B00000001, B00000001, 0x00, 0x00}, // 7
  {B00000111, B00000101, B00000111, B00000101, B00000101, B00000111, 0x00, 0x00}, // 8
  {B00000111, B00000101, B00000111, B00000001, B00000001, B00000111, 0x00, 0x00}, // 9
  
  //-14------------------------------------------------------------------------------------

  {B00011110, B00110011, B00110011, B00110011, B00011110, 0x00, 0x00, 0x00}, // 0 micro bold 1 : 6x5 (impact)
  {B00001100, B00011100, B00001100, B00001100, B00111111, 0x00, 0x00, 0x00}, // 1
  {B00011110, B00110011, B00000110, B00011100, B00111111, 0x00, 0x00, 0x00}, // 2
  {B00011110, B00110011, B00000110, B00110011, B00011110, 0x00, 0x00, 0x00}, // 3
  {B00110000, B00110011, B00110011, B00011111, B00000011, 0x00, 0x00, 0x00}, // 4
  {B00111110, B00110000, B00111110, B00000011, B00111110, 0x00, 0x00, 0x00}, // 5
  {B00001110, B00011000, B00111110, B00110011, B00011110, 0x00, 0x00, 0x00}, // 6
  {B00111111, B00110011, B00000110, B00001100, B00001100, 0x00, 0x00, 0x00}, // 7
  {B00011110, B00110011, B00011110, B00110011, B00011110, 0x00, 0x00, 0x00}, // 8
  {B00011110, B00110011, B00011111, B00000110, B00011100, 0x00, 0x00, 0x00}, // 9

  {B00111111, B00110011, B00110011, B00110011, B00111111, 0x00, 0x00, 0x00}, // 0 micro bold 2 : 6x5 (digital)
  {B00001100, B00001100, B00001100, B00001100, B00001100, 0x00, 0x00, 0x00}, // 1
  {B00111111, B00000011, B00111111, B00110000, B00111111, 0x00, 0x00, 0x00}, // 2
  {B00111111, B00000011, B00111111, B00000011, B00111111, 0x00, 0x00, 0x00}, // 3
  {B00110011, B00110011, B00111111, B00000011, B00000011, 0x00, 0x00, 0x00}, // 4
  {B00111111, B00110000, B00111111, B00000011, B00111111, 0x00, 0x00, 0x00}, // 5
  {B00111111, B00110000, B00111111, B00110011, B00111111, 0x00, 0x00, 0x00}, // 6
  {B00111111, B00000011, B00000011, B00000011, B00000011, 0x00, 0x00, 0x00}, // 7
  {B00111111, B00110011, B00111111, B00110011, B00111111, 0x00, 0x00, 0x00}, // 8
  {B00111111, B00110011, B00111111, B00000011, B00111111, 0x00, 0x00, 0x00}, // 9
  
  //-16------------------------------------------------------------------------------------

  {B00000110, B00001001, B00001001, B00001001, B00000110, 0x00, 0x00, 0x00}, // 0 micro narrow 1 : 4x5 (impact)
  {B00000010, B00000110, B00000010, B00000010, B00000111, 0x00, 0x00, 0x00}, // 1
  {B00001110, B00000001, B00000110, B00001000, B00001111, 0x00, 0x00, 0x00}, // 2
  {B00001110, B00000001, B00000010, B00001001, B00000110, 0x00, 0x00, 0x00}, // 3
  {B00001001, B00001001, B00000111, B00000001, B00000001, 0x00, 0x00, 0x00}, // 4
  {B00001110, B00001000, B00001110, B00000001, B00001110, 0x00, 0x00, 0x00}, // 5
  {B00000110, B00001000, B00001110, B00001001, B00000110, 0x00, 0x00, 0x00}, // 6
  {B00001111, B00000001, B00000010, B00000100, B00000100, 0x00, 0x00, 0x00}, // 7
  {B00000110, B00001001, B00000110, B00001001, B00000110, 0x00, 0x00, 0x00}, // 8
  {B00000110, B00001001, B00000111, B00000001, B00000110, 0x00, 0x00, 0x00}, // 9

  {B00001111, B00001001, B00001001, B00001001, B00001111, 0x00, 0x00, 0x00}, // 0 micro narrow 2 : 4x5 (digital)
  {B00000010, B00000010, B00000010, B00000010, B00000010, 0x00, 0x00, 0x00}, // 1
  {B00001111, B00000001, B00001111, B00001000, B00001111, 0x00, 0x00, 0x00}, // 2
  {B00001111, B00000001, B00001111, B00000001, B00001111, 0x00, 0x00, 0x00}, // 3
  {B00001001, B00001001, B00001111, B00000001, B00000001, 0x00, 0x00, 0x00}, // 4
  {B00001111, B00001000, B00001111, B00000001, B00001111, 0x00, 0x00, 0x00}, // 5
  {B00001111, B00001000, B00001111, B00001001, B00001111, 0x00, 0x00, 0x00}, // 6
  {B00001111, B00000001, B00000001, B00000001, B00000001, 0x00, 0x00, 0x00}, // 7
  {B00001111, B00001001, B00001111, B00001001, B00001111, 0x00, 0x00, 0x00}, // 8
  {B00001111, B00001001, B00001111, B00000001, B00001111, 0x00, 0x00, 0x00}, // 9
  
  //-18------------------------------------------------------------------------------------
  
  {B00000010, B00000101, B00000101, B00000101, B00000010, 0x00, 0x00, 0x00}, // 0 micro thin 1 : 3x5 (impact)
  {B00000010, B00000110, B00000010, B00000010, B00000111, 0x00, 0x00, 0x00}, // 1
  {B00000110, B00000001, B00000010, B00000100, B00000111, 0x00, 0x00, 0x00}, // 2
  {B00000110, B00000001, B00000010, B00000001, B00000110, 0x00, 0x00, 0x00}, // 3
  {B00000101, B00000101, B00000111, B00000001, B00000001, 0x00, 0x00, 0x00}, // 4
  {B00000110, B00000100, B00000110, B00000001, B00000110, 0x00, 0x00, 0x00}, // 5
  {B00000011, B00000100, B00000110, B00000101, B00000010, 0x00, 0x00, 0x00}, // 6
  {B00000111, B00000001, B00000001, B00000010, B00000010, 0x00, 0x00, 0x00}, // 7
  {B00000010, B00000101, B00000010, B00000101, B00000010, 0x00, 0x00, 0x00}, // 8
  {B00000010, B00000101, B00000011, B00000001, B00000110, 0x00, 0x00, 0x00}, // 9

  {B00000111, B00000101, B00000101, B00000101, B00000111, 0x00, 0x00, 0x00}, // 0 micro thin 2 : 3x5 (digital)
  {B00000010, B00000010, B00000010, B00000010, B00000010, 0x00, 0x00, 0x00}, // 1
  {B00000111, B00000001, B00000111, B00000100, B00000111, 0x00, 0x00, 0x00}, // 2
  {B00000111, B00000001, B00000111, B00000001, B00000111, 0x00, 0x00, 0x00}, // 3
  {B00000101, B00000101, B00000111, B00000001, B00000001, 0x00, 0x00, 0x00}, // 4
  {B00000111, B00000100, B00000111, B00000001, B00000111, 0x00, 0x00, 0x00}, // 5
  {B00000111, B00000100, B00000111, B00000101, B00000111, 0x00, 0x00, 0x00}, // 6
  {B00000111, B00000001, B00000001, B00000001, B00000001, 0x00, 0x00, 0x00}, // 7
  {B00000111, B00000101, B00000111, B00000101, B00000111, 0x00, 0x00, 0x00}, // 8
  {B00000111, B00000101, B00000111, B00000001, B00000111, 0x00, 0x00, 0x00}, // 9
};



const byte MUSIC_NOTE[][6] PROGMEM = {                                          // === 4~6X8
  {6, 8, 0, 0, 0, 0},                                                           // Width, Height
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},                                         // 032 =   = empty
  {B01100000, B10010000, B10010000, B01111111, 0x00, 0x00},                     // 033 = ! = double 2/1
  {B00000110, B00001001, B00001001, B11111110, 0x00, 0x00},                     // 034 = "
  {B01100000, B11110000, B11110000, B01111111, 0x00, 0x00},                     // 035 = # = once   1/1
  {B00000110, B00001111, B00001111, B11111110, 0x00, 0x00},                     // 036 = $
  {B01100000, B11110000, B11110000, B01111111, B00000010, B00001100},           // 037 = % = half   1/2
  {B00000110, B00001111, B00001111, B11111110, B01000000, B00110000},           // 038 = &
  {B01100000, B11110000, B11110000, B01111111, B00000101, B00011010},           // 039 = ' = quarter 1/4
  {B00000110, B00001111, B00001111, B11111110, B10100000, B01011000},           // 040 = (
  {B00100000, B00111000, B00111000, B00100000, 0x00, 0x00},                     // 041 = ) = rest 2/1
  {B01000001, B01101110, B10111100, B00100000, 0x00, 0x00},                     // 042 = * = rest 1/1
  {B00000110, B00000110, B01110100, B00011110, 0x00, 0x00},                     // 043 = + = rest 1/2
  {B00001000, B00011011, B00011011, B01110010, B00001111, 0x00},                // 044 = , = rest 1/4
};
  
const byte EPACLOGO[] PROGMEM = {
  B11111111, B11111111, B11011011, B11011011, B11011011,B11011011,  B00011000,
  B11111111, B11111111, B00011011, B00011011, B00011111, B00011111, B00000000,
  B11101000, B10101000, B10101000, B11111000, B11111000, B00000000,
  B11111000, B11111000, B10001000, B10001000, B10001000,
};

const byte PACMAN[][9] PROGMEM = {
  {B00111100, B01111110, B11111011, B11111111, B11111111, B11111111, B01111110, B00111100, 0x00},
  {B00100100, B01101110, B11101111, B11111101, B11111111, B11111111, B01111110, B00111100, 0x00},
  {B00000100, B01000110, B11001111, B11101101, B11101111, B11111111, B01111110, B00111100, 0x00},
  {B00000000, B01000010, B11000011, B11100111, B11101101, B11111111, B01111110, B00111100, 0x00}, 
};
