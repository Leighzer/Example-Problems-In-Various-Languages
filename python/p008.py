import fileinput


file = open('PATH TO YOUR GITHUB REPO HERE\series.txt', 'r'); """Not sure how I would use relative paths for opening a file yet on windows"""
series = file.readline()

count = 0
left = 0
right = 13

print(len(series) - right)

for x in range(0, len(series) - right):
    """print(len(series[left:right]))"""
    left += 1
    right += 1

exit
