import glob
import struct
import numpy as np
from PIL import Image, ImageDraw, ImageFont
import os
import math

fnt = ImageFont.truetype("arial.ttf", 10)

for fname in glob.glob("himap/**/*.himap", recursive=True):
    print(fname)
    f = open(fname,'rb')

    img = Image.new("RGB", (28*41, 19*28))
    draw = ImageDraw.Draw(img)

    width,height,a,b,c,d = struct.unpack("<iiffff", f.read(24))

    arr = np.frombuffer(f.read(), dtype=np.float32)
    arr.shape = (height,width)

    y_min = np.min(arr)
    y_max = np.max(arr)
    print(width, height, a, b, c, d, y_min, y_max)
    for z in range(height):
        for x in range(width):
            y = arr[z,x]
            assert 0 < y < 162 or y == -138.75
            if y > 0:
                color = int(math.log(y) / math.log(162) * 255)
                draw.rectangle((x*img.width//width, z*img.height//height, (x+1)*img.width//width-1, (z+1)*img.height//height-1), (color,color,color))
                draw.text((x*img.width//width, z*img.height//height), str(round(y,1)), (0,0,0), fnt)
    img.save('heightmap_%s.png'%fname.split(os.sep)[1])
