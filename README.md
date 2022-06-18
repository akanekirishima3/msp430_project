# msp430_project

## Energia 1.8.10E23 (12/17/2019)  
これを用いる。ボードをアップデートすると動作する  

## i2c
~~~
https://github.com/energia/Energia/issues/486
msp430g2553で arduinoのi2c scanerがDS3231 AT24C32に対して動いた。
1)Wire.setModle(1)にすること
2)SDA,SCL をp2.2 p2.1にすること
3)https://github.com/energia/Energia/tree/c09d5e9b6582e2ea5e04152b4d4cddd282b03198/hardware/msp430/cores/msp430
のtwi.cとtwi_sw.cをenergia-1.6.10E18/hardware/energia/msp430/cores/msp430/
に置く

https://github.com/akanekirishima3/msp430_project/blob/main/i2c_scanner.ino
~~~

