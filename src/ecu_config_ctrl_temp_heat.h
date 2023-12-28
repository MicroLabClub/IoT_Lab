#ifndef ECU_CONFIG_CTRL_TEMP_HEAT_H_
#define ECU_CONFIG_CTRL_TEMP_HEAT_H_

#define USE_CTRL_TEMP_HEAT
// #define USE_SRV_OS_TASK_SEQ
#define USE_SRV_OS_FREERTOS
#define USE_SRV_UI_SERIAL
//#define USE_SRV_COM_MQTT
#define USE_DD_HEATER
#define USE_ED_RELAY
#define USE_SRV_SNS_AIR_TEMP
#define USE_ED_DHT

#define USE_SRV_HERTBEAT

#define CTRL_TEMP_HEAT_REC (5.0 * TIME_SEC)
#define CTRL_TEMP_HEAT_OFFSET 20

#define TERMINAL_IN_REC (1 * TIME_uSEC)
#define TERMINAL_IN_OFFSET 4

#define TERMINAL_OUT_REC (5.0 * TIME_SEC)
#define TERMINAL_OUT_OFFSET 15

#define SRV_COM_MQTT_REC (10.0 * TIME_SEC)
#define SRV_COM_MQTT_OFFSET (5.0 * TIME_SEC)

#define ED_DHT_REC (100 * TIME_uSEC)
#define ED_DHT_OFFSET 7

#define SRV_SNS_AIR_TEMP_REC (100 * TIME_uSEC)
#define SRV_SNS_AIR_TEMP_OFFSET 50

#define DD_HEATER_REC (100 * TIME_uSEC)  
#define DD_HEATER_OFFSET 14

#define ED_RELAY_REC (100 * TIME_uSEC)
#define ED_RELAY_OFFSET 8

#define DD_HEAT_OP_D_TIME (1.0 * TIME_SEC / DD_HEATER_REC)
#define TEMP_HEAT_HISTERESIS (0.5)
#define TEMP_DEFAULT (10.0) 

#define DHT_PIN 4 // Digital pin connected to the DHT sensor
#define SRV_BLINK_LED_PIN 5

#define ED_RELAY_3_PIN 33//GPIO1


#endif