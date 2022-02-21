#!/bin/python3
import jwt, subprocess, sys, binascii,os, ssl, base64
from Crypto.Cipher import AES
data = sys.argv[1]
#print("Received encoded JWT: " +data)
encoded = ""
try:
        encoded = jwt.decode(data, "MQTT")
        print("AES encrypted data: " + encoded['data'])
except:
        print("Error decoding JWT")
        exit(1)
decryption_suite = AES.new('VietNamVoDich123', AES.MODE_CBC, '0123456789abcdef')
try:
        plain_text = decryption_suite.decrypt(base64.b64decode(encoded['data']))
        print("AES Decrypted data : " + plain_text.decode('utf-8'))
except:
        print("Error AES decryption")
        exit(1)