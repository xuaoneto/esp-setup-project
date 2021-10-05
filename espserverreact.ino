#if defined(ESP8266)
    #include <ESP8266WiFi.h>
    #include <ESPAsyncTCP.h>
    #include <FS.h>
#elif defined(ESP32)
    #include <WiFi.h>
    #include <AsyncTCP.h>
    #include <SPIFFS.h>
    
#endif

#include <ESPAsyncWebServer.h>


AsyncWebServer server(80);

const char* ssid     = "DLKJ CASA2";
const char* password = "182075333";
const char* hostname = "ESP_SanUSB";

void setup(void)
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  SPIFFS.begin();
  
   WiFi.mode(WIFI_STA);
   WiFi.begin(ssid, password);

   while (WiFi.status() != WL_CONNECTED) 
   { 
     delay(500);  
     Serial.print('.'); 
   }
 
   Serial.println("");
   Serial.print("Iniciado STA:\t");
   Serial.println(ssid);
   Serial.print("IP address:\t");
   Serial.println(WiFi.localIP());
//**********************************************************

  server.serveStatic("/", SPIFFS, "/").setDefaultFile("index.html"); 

  server.on(
    "/LED",
    HTTP_POST,
    [](AsyncWebServerRequest * request){},
    NULL,
    [](AsyncWebServerRequest * request, uint8_t *data, size_t len, size_t index, size_t total) {
    
   char string[len];
   
   memcpy(string, data, len);
   string[len] = '\0';
   String req = string;
   Serial.println(req);
   
   if(req.indexOf("rgb1-Red") != -1){
       char *ptr = strtok(string, " ");
       ptr = strtok(NULL, " ");
       int valor = atoi(ptr);
       Serial.println(valor);
       analogWrite(13, valor);
   }
   if(req.indexOf("rgb1-Green") != -1){
       char *ptr = strtok(string, " ");
       ptr = strtok(NULL, " ");
       int valor = atoi(ptr);
       Serial.println(valor);
       analogWrite(12, valor);
   }
   if(req.indexOf("rgb1-Blue") != -1){
       char *ptr = strtok(string, " ");
       ptr = strtok(NULL, " ");
       int valor = atoi(ptr);
       Serial.println(valor);
       analogWrite(15, valor);
   }
   
   
     
      request->send(200);
  });
  
  server.on("/put", HTTP_PUT, [](AsyncWebServerRequest *request){
      request->send(200, "text/plain", "Put route");
});

  server.on("/get", HTTP_GET, [](AsyncWebServerRequest *request){
      request->send(200, "text/plain", "Get route");
});

  server.on("/any", HTTP_ANY, [](AsyncWebServerRequest *request){
      request->send(200, "text/plain", "Any route");
});
  
  server.onNotFound([](AsyncWebServerRequest *request) {
      request->send(400, "text/plain", "Not found");
  });

  server.begin();
  Serial.println("HTTP server started");
}



void loop(void)
{
  
}
