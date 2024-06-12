# CTF - Transposition Trial

## [Question Link](https://play.picoctf.org/practice/challenge/312?page=1&search=transposition%20Trial)
## [File Provided](https://artifacts.picoctf.net/c/192/message.txtt)

**Description:-**  Our data got corrupted on the way here. Luckily, nothing got replaced, but every block of 3 got scrambled around! The first word seems to be three letters long, maybe you can use that to recover the rest of the message. <br>

## Steps 


``` 
our hint was Split the message up into blocks of 3 and see how the first block is scrambled.
Upon downloading the txt file we can see a line of text "heTfl g as iicpCTo{7F4NRP051N5_16_35P3X51N3_V091B0AE}2"
 
From knowing it was split into blocks of 3 hence we use 3 columns.We also know hte first word is 3 letters long when solving this we can use an online solver. And because we need to find the plain text instead of reading it for each column we read it for every row.
As we know the first word is 3 letters wrong we must use the first row to figure out how it was scrambled and we see the letters - H E T. Upon rearranging this for a word we get The and can hence find the column pattern of the scramble to be 2 -> 0 -> 1

Hence after using this pattern we can see our word ends up becoming The flag is picoCTF{7R4N5P051N6_15_3XP3N51V3_109AB02E}
```