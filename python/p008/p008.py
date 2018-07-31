import fileinput
import os.path

myPath = os.path.abspath(os.path.dirname(__file__))
pathToData = os.path.join(myPath, "series.txt")
file = open(pathToData, 'r')
series = file.readline()

left = 0
right = 13

largestAdjacentProduct = -1
product = 1

for x in range(0, len(series) - right):
    for y in range(0, len(series[left:right])):
        sublist = series[left:right]
        product = product * int(sublist[y])
    if(product > largestAdjacentProduct):
            largestAdjacentProduct = product
    left += 1
    right += 1
    product = 1

print("The largest 13 digit adjacent product in the 1000 digit number in the series.txt file is: " + str(largestAdjacentProduct))

exit
