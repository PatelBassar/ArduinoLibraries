# Arduino FloatToString
Float to string conversion using `stdlib.h`

##Have a look at the [example](https://github.com/Simsso/ArduinoFloatToString/blob/master/example.ino) or the [plain function](https://github.com/Simsso/ArduinoFloatToString/blob/master/floatToString.ino)



More details about `stdlib.h`'s function `dtostrf` can be found [here](http://www.atmel.com/webdoc/AVRLibcReferenceManual/group__avr__stdlib_1ga060c998e77fb5fc0d3168b3ce8771d42.html).

```C
char * dtostrf(
	double __val,
	signed char __width,
	unsigned char __prec,
	char * __s)
```

