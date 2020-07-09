void setup()
{
  Serial.begin(9600);  
}
int analog_x,analog_y,analog_z;
float vol_x,vol_y,vol_z;
 
void loop()
{
 analog_x=analogRead(0);
 analog_y=analogRead(1);
  analog_z=analogRead(2);
  vol_x=analog_x*5.0/1024;//convert analog_x-->voltage value(v)
  vol_y=analog_y*5.0/1024;
  vol_z=analog_z*5.0/1024;
    Serial.print("x:");
  Serial.print(vol_x);
  Serial.print(" y:");
  Serial.print(vol_y);
  Serial.print(" z:");
  Serial.println(vol_z);
  delay(200);
}
