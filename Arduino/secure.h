#ifndef secure_h
#define secure_h

  // Wifi Settings
    #define SSID                          "xxxxxxxxxx"                          // SSID WiFi
    #define PASSWORD                      "xxxxxxxxxx"                          // Password WiFi

  // MQTT Settings
    #define HOSTNAME                      "xxx.xxx.xxx.xxx"                     // Your HOSTENAME from MQTT
    #define MQTT_SERVER                   "xxx.xxx.xxx.xxx"                     // IP-Adresse from MQTT-Server
    #define STATE_TOPIC                   "fingerprint/mode/status"
    #define MODE_LEARNING                 "fingerprint/mode/learning"
    #define MODE_READING                  "fingerprint/mode/reading"
    #define MODE_DELETE                   "fingerprint/mode/delete"
    #define AVAILABILITY_TOPIC            "fingerprint/available"
    #define mqtt_username                 "xxxxxxxxx"                           // Your MQTT Username
    #define mqtt_password                 "xxxxxxxxx"                           // Your MQTT Password

    #define MQTT_INTERVAL 5000            //MQTT rate limiting when no finger present, in ms

  // Fingerprintsensor R503
    #define SENSOR_TX 14                                                        // GPIO Pin for RX (Yellow Cable)                    
    #define SENSOR_RX 15                                                        // GPIO Pin for TX (Lila/Green Cable)
                                                                                // Red and White Cabel on 3v3
                                                                                // Black Cable on GND
                                                                                // Blue Cabel not needed

#endif