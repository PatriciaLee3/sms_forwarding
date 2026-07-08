#ifndef CONFIG_H
#define CONFIG_H

#include "globals.h"

void saveConfig();
void loadConfig();
bool isEmailAccountValid();
bool isPushChannelValid(const PushChannel& ch);
bool isConfigValid();
String getDeviceUrl();

#endif
