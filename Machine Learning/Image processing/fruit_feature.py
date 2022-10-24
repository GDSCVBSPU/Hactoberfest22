import numpy as np
import cv2
from scipy.stats import itemfreq
import mahotas as mt

def extract_features(image):
	# calculate haralick texture features for 4 types of adjacency
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    textures = mt.features.haralick(gray)
	# take the mean of it and return it
    ht_mean  = textures.mean(axis=0)
    arr = np.float32(image)
    pixels = arr.reshape((-1, 3))
    n_colors = 3
    criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 200, .1)
    flags = cv2.KMEANS_RANDOM_CENTERS
    _, labels, centroids = cv2.kmeans(pixels, n_colors, None, criteria, 10, flags)
    palette = np.uint8(centroids)
    quantized = palette[labels.flatten()]
    quantized = quantized.reshape(image.shape)
    dominant_color = palette[np.argmax(itemfreq(labels)[:, -1])]
    feat = np.concatenate((ht_mean,dominant_color))
    return feat