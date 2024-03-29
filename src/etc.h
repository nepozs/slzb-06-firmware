void getReadableTime(String &readableTime, unsigned long beginTime);

#ifdef __cplusplus
extern "C" {
#endif
uint8_t temprature_sens_read();
#ifdef __cplusplus
}
#endif
uint8_t temprature_sens_read();

float getCPUtemp(bool clear = false);


void zigbeeEnableBSL();
void zigbeeRestart();

void adapterModeUSB();
void adapterModeLAN();

void ledYellowToggle();
void ledBlueToggle();

void getDeviceID(String &devID);
void writeDefultConfig(const char *path, String StringConfig);

void saveEmergencyWifi(bool state);
void saveRestartCount(int count);

void resetSettings();

String hexToDec(String hexString);

#define min(a, b) ((a) < (b) ? (a) : (b))