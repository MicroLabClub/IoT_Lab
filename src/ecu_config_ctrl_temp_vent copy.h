#ifndef ECU_CONFIG_CTRL_TEMP_VENT_H_
#define ECU_CONFIG_CTRL_TEMP_VENT_H_

#define USE_CTRL_TEMP_VENT
#define USE_SRV_OS_TASK_SEQ
#define USE_SRV_UI_SERIAL
// #define USE_SRV_COM_MQTT
#define USE_DD_WINDOW
#define USE_ED_RELAY
#define USE_SRV_SNS_AIR_TEMP
#define USE_ED_DHT

#define USE_SRV_HERTBEAT



#define CTRL_TEMP_VENT_REC (5 * TIME_SEC)
#define CTRL_TEMP_VENT_OFFSET 20

#define TERMINAL_IN_REC (1 / SYS_TICK)
#define TERMINAL_IN_OFFSET 4

#define TERMINAL_OUT_REC (1 * TIME_SEC)
#define TERMINAL_OUT_OFFSET 15

#define SRV_COM_MQTT_REC (10* TIME_SEC)
#define SRV_COM_MQTT_OFFSET (5* TIME_SEC)

#define ED_DHT_REC (100 / SYS_TICK)
#define ED_DHT_OFFSET 7

#define SRV_SNS_AIR_TEMP_REC (0.01*TIME_SEC/10)
#define SRV_SNS_AIR_TEMP_OFFSET 50

#define DD_WINDOW_REC (5.0 / SYS_TICK)
#define DD_WINDOW_OFFSET 14

#define ED_RELAY_REC (5 / SYS_TICK)
#define ED_RELAY_OFFSET 8


#define DD_WIN_OP_D_TIME (0.05 * TIME_SEC / DD_WINDOW_REC)
#define TEMP_VENT_HISTERESIS (0.5)
#define TEMP_DEFAULT (10.0)

#define DHT_PIN 4      // Digital pin connected to the DHT sensor 
#define SRV_BLINK_LED_PIN 5

#define ED_RELAY_1_PIN 32 
#define ED_RELAY_2_PIN 33 


#endif