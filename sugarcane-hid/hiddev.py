from struct import pack,unpack

hid = open("/dev/hidraw3", "r+")

channel = unpack('BBBB', hid.read(4))

for c in channel:
    print("0x%x" % c)

channel = pack('BBBB', 0x83, 0x00, 0x00, 0x00)
hid.write(channel)

channel = unpack('BBBB', hid.read(4))

for c in channel:
    print("0x%x" % c)
