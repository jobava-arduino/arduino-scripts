Arduino
=======
Collection of various Arduino scripts.

7 Segment LED
-------------
Illuminates a single 7 Segment LED, according to the indicated character.

LED is similar to RadioShack Model: 276-075

Arduino Presentation
--------------------
Contains TeX versions of a presentation given at The University of Scranton's Physics Club.

Compile the presentation using `pdflatex` or similar.

EMail Blinker
-------------
Checks IMAP email accounts and illuminates an LED on Pin 13. LED will blink the number of 
unread messages.

Minor setup is required for use:
- A python script must be run on a host computer; this script will check the email account
and communiate via USB Serial to the Arduino.
- Configure email.py to include your information; username, password, and mail server address.

The python script will then check for unread email messages and comunicate the number via USB Serial connection to the Arduino.

LCD Hello World
---------------
Displays serial input text on a Parallax model 27978 2x16 LCD module.

Ported to the Raspberry Pi in [Raspi Notification](https://github.com/tomswartz07/raspi-notification).

LettersNumbers
--------------
Displays letters or numbers on the RadioShack Model: 276-075, expanded version of 7 Segment LED

NES Controller
--------------
Allows for the control of an LED via hardware inputs from a classic NES controller.

ParallaxLCD
-----------
Displays simple hello world text on a Parallax model 27978 2x16 LCD module.

License
-------
	The MIT License (MIT)
	
	Copyright (c) 2013 Tom Swartz
	
	Permission is hereby granted, free of charge, to any person obtaining a copy of
	this software and associated documentation files (the "Software"), to deal in
	the Software without restriction, including without limitation the rights to
	use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
	the Software, and to permit persons to whom the Software is furnished to do so,
	subject to the following conditions:
	
	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.
	
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
	FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
	COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
	IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
	CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
