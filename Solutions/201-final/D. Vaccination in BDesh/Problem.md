# Vaccination in BDesh

**Limits:** 1 s, 512 MB

## Problem Statement

**BDesh** is a very peaceful country with a smaller population. Recently a **Spider Demon** with a dangerous kind of venom was found in BDesh. The Spider Demon pushed his venom into people's veins and the people became spider-people. I know you are scared.

But don't worry, BDesh has a very talented and furious health minister named ***Zenitsu Agatsuma***. He has some psychic power, and using these powers *Zenitsu* somehow manages to kill the Spider Demon.

Ahh! People are relaxed now and cheering *Zenitsu*. But the people who are already spider-people still haven't recovered. To change these spiders into people, Zenitsu tries psychic power again but fails. After a long time, *Zenitsu*'s friend named ***Shinobu Kochu*** came with the glorious news that she invented a vaccine to recover these people. Now it's time to start the vaccination. The process lasted for $N$ days.

After starting the vaccination process, it is observed that on the $i$-th day, if $a_i$ spider-people come to take the vaccine, they can only vaccinate $X_i$ spider-people and get them fully recovered on that day, where $X_i$ is the largest multiple of $K$ which is less than or equal to $a_i$. The remaining become spider-people forever.

You're given $N$ integers where $a_i$ is the number of spider-people who came to take the vaccine on the $i$-th day. Your task is to **determine how many people become spider-people forever from not getting vaccinated if they vaccinate as many people as possible**.

## Input

The first line will be a single integer $T$ indicating the number of test cases. Each test case contains two integers $N$ and $K$. The next line contains $N$ integers $a_1, a_2, a_3, \ldots, a_n$, the number of people who came to be vaccinated each day.

**Constraints**

- $1 \leq T \leq 10$
- $1 \leq N, K \leq 100$
- $1 \leq a_1, a_2, a_3, \ldots, a_n \leq 1000$

## Output

Output $T$ lines in the format "**Case X: Y**" (without quotes), where $X$ is the test case number and $Y$ is the total number of people who will become permanently spider-people.

## Example

**Input**

```
2
5 4
5 100 1 12 15
3 1
13 22 1
```

**Output**

```
Case 1: 5
Case 2: 0
```

## Notes

In the first case, on the first day, the maximum number of people who can get the vaccine is $4$. On the second day, everyone can get the vaccine as $100$ itself is a multiple of $4$. On the third day, no one can get the vaccine as the largest multiple of $4$ less than or equal to $1$ is $0$. On the fourth day, everyone can get the vaccine as $12$ itself is a multiple of $4$. Finally, on the fifth day, only $12$ people can get the vaccine as it is the largest multiple of $4$ less than or equal to $15$.

---

[^1]: Source: [Vaccination in BDesh](https://toph.co/p/vaccination-in-bdesh) on Toph (Furqan Software).
