#include <IRremote.h>

const int RECV_PIN = 11; // Connect IR receiver OUT pin to Arduino digital pin 11

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Ready to receive IR signals");
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.print("IR Code: 0x");
    Serial.println(results.value, HEX); // Print the code in HEX
        }
        
            irrecv.resume(); // Receive the next value
  
}