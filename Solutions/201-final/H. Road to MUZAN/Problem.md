# Road to MUZAN

**Limits:** 1 s, 512 MB

## Problem Statement

From the earliest times, humanity has known about human-eating monsters lurking in the darkness to devour an unfortunate soul. The origin of those demons is a being named '***Kibutsuji Muzan***', the king of the demons. To stop the monstrosity of the demons, a secret organization named 'Demon Slayer Corps' started to look for skilled swordsmen who can kill the demons. A boy named *Tanjirou* joined the Demon Slayer Corps so that he can cure his sister, who has been transformed into a demon due to *Muzan*'s attack, and slay *Muzan* once and for all.

*Muzan* is a very tricky demon who can shapeshift (change his look and body shape), and nobody can find him easily. But one day *Tanjirou* and his friends find a clue: when *Muzan* shapeshifts he also has to choose a name for his new form. The interesting part of the clue is that whenever he chooses a name, he chooses **the longest palindromic string that can be formed with the characters from the name**. A palindromic string is a sequence that reads the same backwards as forwards.

Now, Tanjirou recognized you as the most talented programmer and a trustworthy friend. He has **given you a string of length $N$ and $Q$ queries, where in each query the $i$-th character will be changed permanently to $C$.** **Write a program that gives the length of the longest palindromic string that can be formed after every query.**

## Input

The first line of the input contains an integer $T$, the number of test cases. In every test case, the first line contains one integer $N$. The next line contains a string of size $N$ (without any space) containing only lowercase English letters. The next line contains an integer $Q$. Each of the next $Q$ lines contains one integer $i$ and one character $C$, which is also a lowercase English letter.

**Constraints**

- $1 \leq T \leq 30$
- $1 \leq N, Q \leq 10^5$
- $1 \leq i \leq n$

## Output

For every test case, first print "Case X:" (without quotes), where $X$ is the test case number. Then, from the next line, print the length of the longest palindromic string that can be formed with the characters of the current string after every query. Check out the sample for clarification.

## Example

**Input**

```
2
8
abcacbac
3
1 c
1 a
2 d
4
abaa
2
3 b
1 c
```

**Output**

```
Case 1:
8
7
5
Case 2:
4
3
```

## Notes

Dataset is huge, use faster I/O methods.

---

[^1]: Source: [Road to MUZAN](https://toph.co/p/road-to-muzan) on Toph (Furqan Software).
