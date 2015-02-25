/*---------------------------------------------*
 * File name: wifi.h                           *
 * Author: Maximillien Courchesne-Mackie       *
 * Description: Interact with the wifi shield  *
 *---------------------------------------------*/

#ifndef INCLUDE_WIFI_H_
#define INCLUDE_WIFI_H_

// Prototypes
void initLEDs(int blue, int red, int green);
void toggleRed(int state);
void toggleBlue(int state);
void toggleGreen(int state);
void taskTemperatureLED(uint8_t *pixelTemps);

#endif /* INCLUDE_WIFI_H_ */