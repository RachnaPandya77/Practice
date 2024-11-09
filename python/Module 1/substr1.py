# Write a Python program to count occurrences of a substring in a string

"""text = input("Enter a string: ")
word = input("Enter the word to count: ")

count = text.count(word)
print(count)"""

# Write a Python program to get a single string from two given strings,
# separated by a space and swap the first two characters of each string.


str1 = input("Enter first string: ")
str2 = input("Enter second string: ")

new_str1 = str2[:2] + str1[2:]
new_str2 = str1[:2] + str2[2:]

print(new_str1, new_str2)