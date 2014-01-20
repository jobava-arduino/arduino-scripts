import imaplib
import time
import serial
from datetime import datetime

run = datetime.now()
PORT = '/dev/ttyACM0'
mail = imaplib.IMAP4_SSL('mail.SERVER.net')
mail.login('USERNAME','PASSWORD')
ser = serial.Serial(PORT)
time.sleep(3)
while run.hour >=7 and run.hour <=16:
    mail.select()
    unread = mail.search(None,'UnSeen')
    count = len(unread[1][0].split())
    ser.write(count)
    time.sleep(3)
mail.close()
