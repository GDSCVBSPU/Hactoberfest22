# -*- coding: utf-8 -*-
"""
Created on Wed Apr  6 01:25:43 2022

@author: avdub
"""

"""
import numpy as np
import cv2
img1 = cv2.imread('Avd2.jpg')
h,w,bpp = np.shape(img1)
img_gray = cv2.cvtColor(img1, cv2.COLOR_BGR2GRAY)
img2 = cv2.merge((img_gray, img_gray, img_gray))
th1, img3 = cv2.threshold(img2, 127, 255, cv2.THRESH_BINARY)
img4 = cv2.resize(img1,None,fx=0.1, fy=0.1, interpolation = cv2.INTER_AREA)
img4 = cv2.resize(img4,None,fx=10, fy=10, interpolation = cv2.INTER_AREA)
img5 = cv2.GaussianBlur(img1, (9,9), 10)
img6 = cv2.cvtColor(img1, cv2.COLOR_BGR2HSV)
temp1 = np.concatenate((img1,img2,img3), axis=1)
temp2 = np.concatenate((img4, img5, img6), axis=1)
img_final = np.concatenate((temp1, temp2), axis=0)
cv2.imshow("result", img_final)
cv2.waitKey(0)
cv2.destroyAllWindows()


cv2.imshow('image',img)
i = cv2.waitKey(0)
if i == 27:
    cv2.destroyAllWindows()
elif i == ord('s'):
    cv2.imwrite('cat_saved.jpg', img)
cv2.destroyAllWindows()


import numpy as np
import cv2
from matplotlib import pyplot as plt
img = cv2.imread('cat.jpg',0)
plt.imshow(img, cmap = 'gray', interpolation = 'bicubic')
plt.xticks([]), plt.yticks([])
plt.show()

import cv2
import numpy as np
img = cv2.imread('cat.jpg')
res = cv2.resize(img,None,fx=0.1, fy=0.1, interpolation = cv2.INTER_AREA)
res = cv2.resize(img,None,fx=10, fy=10, interpolation = cv2.INTER_AREA)
cv2.imshow('image', img)
cv2.waitKey(0)
"""

import cv2
image = cv2.imread('Gp3White.png') # loads an image from the specified file
# convert an image from one color space to another
grey_img = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
invert = cv2.bitwise_not(grey_img) # helps in masking of the image
# sharp edges in images are smoothed while minimizing too much blurring
blur = cv2.GaussianBlur(invert, (21, 21), 0)
invertedblur = cv2.bitwise_not(blur)
sketch = cv2.divide(grey_img, invertedblur, scale=256.0)
cv2.imwrite("sketch.png", sketch) # converted image is saved as mentioned name
