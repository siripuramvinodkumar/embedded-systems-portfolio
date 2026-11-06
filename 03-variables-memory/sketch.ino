void setup() {
  // 1. Open the diagnostic serial pipeline to talk to the screen
  Serial.begin(115200);

  // 2. Create our physical electrical buckets (Declaration)
  int roomTemperature = 25;       // Whole number bucket
  float exactVoltage = 3.33;      // Decimal number bucket
  char deviceStatus = 'A';        // Single character bucket (ASCII layout)

  // 3. Print the original content of our buckets to the screen
  Serial.print("Initial Temperature: ");
  Serial.println(roomTemperature);

  Serial.print("Target Board Voltage: ");
  Serial.println(exactVoltage);

  Serial.print("Device Operation Code: ");
  Serial.println(deviceStatus);

  Serial.println("--- MODIFIED VALUES DOWN BELOW ---");

  // 4. Change the data inside our buckets (Overwriting the memory switches)
  roomTemperature = 30;           // Changing the integer value
  exactVoltage = 5.00;            // Changing the decimal value
  deviceStatus = 'B';            // Changing the character to a new ASCII target

  // 5. Print out the updated values to verify memory changes
  Serial.print("Updated Temperature: ");
  Serial.println(roomTemperature);

  Serial.print("Updated Voltage: ");
  Serial.println(exactVoltage);

  Serial.print("Updated Operation Code: ");
  Serial.println(deviceStatus);
}

void loop() {
  delay(10); // Small pause to optimize background engine speed
}
