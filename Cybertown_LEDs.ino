
#include <AlaLed.h>

AlaLed led1;
AlaLed led2;
AlaLed led3;
AlaLed led4;
AlaLed led5;
AlaLed led6;

void setup() {
  // put your setup code here, to run once:
  led1.initPWM(11);
  led2.initPWM(10);
  led3.initPWM(9);
  led4.initPWM(6);
  led5.initPWM(5);
  led6.initPWM(3);

  led1.setAnimation(ALA_FADEINOUT, 2000);
  led2.setAnimation(ALA_FADEINOUT, 2000);
  led3.setAnimation(ALA_FADEINOUT, 2000);
  led4.setAnimation(ALA_FADEINOUT, 2000);
  led5.setAnimation(ALA_FADEINOUT, 2000);
  led6.setAnimation(ALA_FADEINOUT, 2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  led1.runAnimation();
  led2.runAnimation();
  led3.runAnimation();
  led4.runAnimation();
  led5.runAnimation();
  led6.runAnimation();

}
