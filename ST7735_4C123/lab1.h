//This is the Library for my functions defined
#include <stdio.h>
#include <stdint.h>

/**************ST7735_XYplotInit***************
 Specify the X and Y axes for an x-y scatter plot
 Draw the title and clear the plot area
 Inputs:  title  ASCII string to label the plot, null-termination
          minX   smallest X data value allowed, resolution= 0.001
          maxX   largest X data value allowed, resolution= 0.001
          minY   smallest Y data value allowed, resolution= 0.001
          maxY   largest Y data value allowed, resolution= 0.001
          bcolor 16-bit color of the background
 Outputs: none
 assumes minX < maxX, and minY < maxY
*/
//Light Gray
  void  ST7735_XYplotInit(char* title, int minX, int maxX, int minY, int maxY, uint16_t color);
		
	
		
		

				

/**************ST7735_XYplot***************
 Plot an array of (x,y) data
 Inputs:  num    number of data points in the two arrays
          bufX   array of 32-bit fixed-point data, resolution= 0.001
          bufY   array of 32-bit fixed-point data, resolution= 0.001
          color  16-bit color of the data points
 Outputs: none
 assumes ST7735_XYplotInit has been previously called
 neglect any points outside the minX maxY minY maxY bounds
*/
void ST7735_XYplot(int num, const int32_t* bufX, const int32_t* bufY, uint16_t color);
	

