#!/usr/bin/python3
import sys
message = "and that piece of art is useful - Dora Korpar, 2015-10-19\n"
sys.stderr.buffer.write(message.encode())
sys.exit(1)
