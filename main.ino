int frequency = 40000;

double delay_time = 1000;

void setup() {
   pinMode(9, OUTPUT); 
   pinMode(10, OUTPUT);
   }

void loop() {
  noTone(10);
  tone(9, 40, 1000);

  noTone(9);
  tone(10, 40, 1000);
}
