#include <SPI.h>
#include <MFRC522.h>
#include <KiwisIoT.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

#define SS_PIN  D8
#define RST_PIN D3

MFRC522 rfid(SS_PIN, RST_PIN);

String lastUID = "";

void setup()
{
  Serial.begin(115200);

  SPI.begin();
  rfid.PCD_Init();

  kiwisiot.begin();

  Serial.println("RFID Product Tracking Started");
  Serial.println("Scan an RFID Tag");
}

void loop()
{
  kiwisiot.run();

  if (!rfid.PICC_IsNewCardPresent())
  {
    return;
  }

  if (!rfid.PICC_ReadCardSerial())
  {
    return;
  }

  String uid = "";

  for (byte i = 0; i < rfid.uid.size; i++)
  {
    if (rfid.uid.uidByte[i] < 0x10)
    {
      uid += "0";
    }

    uid += String(rfid.uid.uidByte[i], HEX);
  }

  uid.toUpperCase();

  if (uid != lastUID)
  {
    Serial.print("Product RFID UID: ");
    Serial.println(uid);

    kiwisiot.send("1", uid);

    lastUID = uid;
  }

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();

  delay(1000);
}