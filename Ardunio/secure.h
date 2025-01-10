#ifndef secure_h
#define secure_h

  // Wifi Settings
    #define SSID                          "Familie-Rimpler"                     // SSID WiFi
    #define PASSWORD                      "Iws2022iN!"                          // Password WiFi

  // MQTT Settings
    #define HOSTNAME                      "192.168.178.71"                      // Your HOSTENAME from MQTT
    #define MQTT_SERVER                   "192.168.178.71"                      // IP-Adresse from MQTT-Server
    #define STATE_TOPIC                   "fingerprint/mode/status"
    #define MODE_LEARNING                 "fingerprint/mode/learning"
    #define MODE_READING                  "fingerprint/mode/reading"
    #define MODE_DELETE                   "fingerprint/mode/delete"
    #define AVAILABILITY_TOPIC            "fingerprint/available"
    #define mqtt_username                 "mqtt-user"                           // Your MQTT Username
    #define mqtt_password                 "VjSzy$24VZewyj49s5K9@1ky%G8A9g&M"    // Your MQTT Password

    #define MQTT_INTERVAL 5000            //MQTT rate limiting when no finger present, in ms

  // Fingerprintsensor R503
    #define SENSOR_TX 14                                                        // GPIO Pin for RX (Yellow Cable)                    
    #define SENSOR_RX 15                                                        // GPIO Pin for TX (Lila/Green Cable)
                                                                               // Red and White Cabel on 3v3
                                                                               // Black Cable on GND
                                                                               // Blue Cabel not needed

#endif