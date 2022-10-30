void initWebServer();
void webServerHandleClient();
void handleGeneral();
void handleSecurity();
void handleRoot();
void handleWifi();
void handleEther();
void handleSerial();
void handleSaveSerial();
void handleNotFound();
void handleSaveWifi();
void handleSaveEther();
void handleReboot();
void handleUpdate();
void handleLogsBrowser();
void handleReadfile();
void handleSavefile();
void handleLogBuffer();
void handleScanNetwork();
void handleClearConsole();
void handleGetVersion();
void handleZigRestart();
void handleZigbeeRestart();
void handleZigbeeBSL();
void handleAdapterModeUSB();
void handleAdapterModeLAN();
void handleLedYellowToggle();
void handleLedBlueToggle();
void handleSaveGeneral();
void handleSaveSecurity();
void handleAbout();
void handleSysTools();
void handleLoggedOut();
void printLogTime();
void printLogMsg(String msg);
void handleSaveSucces(String msg);
void handle_functions_js();
void handle_jquery_js();
void handle_bootstrap_js();
void handle_required_css();
void handle_toast_js();
void handle_glyphicons_woff();
void handle_logo_png();
void handle_wait_gif();
void handle_nok_png();
void handle_ok_png();
void zigbeeCmdSend(uint8_t one_byte);
bool checkAuth();
void handleWEBUpdate();
void checkUpdateFirmware();
void runUpdateFirmware(uint8_t *data, size_t len);


#define UPD_FILE "https://github.com/smlight-dev/SLZB-06/releases/latest/download/SLZB-06.bin"