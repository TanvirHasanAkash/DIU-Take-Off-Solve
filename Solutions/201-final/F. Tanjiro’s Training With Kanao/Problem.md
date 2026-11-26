# Tanjiro's Training With Kanao

**Limits:** 1 s, 256 MB

## Problem Statement

After the fight in the *Natagumo Mountain*, Tanjiro felt the need to get sharper. Because in recent fights he has been missing the opening threads, which shorten the fight by allowing him to defeat an opponent in one blow through that opening thread. While staying in the *Butterfly Mansion*, Tanjiro gets help from the residents of the mansion to improve his ability to find an opening thread as soon as possible.

As he spars with one of the residents of the *Butterfly Mansion*, *Kanao*, the three servants of the mansion are tasked with monitoring the sparring of *Tanjiro* and *Kanao*. One of the trio watches *Tanjiro*, one watches *Kanao*, and the last one compiles the observations of the first two and takes them to *Shinobu*, host of the mansion.

What Shinobu gets is **two arrays of integers, $A$ and $B$, of length $m$ and $n$**. The first one is the fighting strategy of Kanao and the second is Tanjiro's. Shinobu examines the observations, and **if she finds some (at least one) non-negative $x$ and $d$, such that for every $i$ $(0 \leq i < m)$**, with $A[i]$ being the $i$-th element of $A$ and $B[x+i \times d]$ being the $(x+i \times d)$-th element of $B$, **$A[i] - B[x+i \times d]$ stays the same, she will be assured that Tanjiro found at least one opening.** After that, Shinobu will stop the sparring session and tell Tanjiro, "`I can see you're working very hard.`" if Tanjiro found an opening, and "`Please do all that you can.`" otherwise. **You have to tell what Shinobu will say to Tanjiro, based on the observations compiled by the trio.**

## Input

The first line of input contains $m$ and $n$. The second line contains $m$ integers, denoting the fighting strategy array of Kanao, $A$. The third line contains $n$ integers, denoting the fighting strategy array of Tanjiro, $B$.

**Constraints**

- $1 \leq m \leq n \leq 100$
- The array elements will be positive and within $10^{9}$.

## Output

Output a single line: **what Shinobu will say to Tanjiro (without quotes)**, based on the observation.

## Examples

### Example 1

**Input**

```
6 13
4 23 6 5 7 9
12 1 6 2 25 6 8 12 7 7 9 10 11
```

**Output**

```
I can see you're working very hard.
```

If we take $x = 2$ and $d = 2$, then for every $i$ $(0 \leq i < m)$ we get the following elements of array $B$ by taking all the $(x+i \times d)$-th elements: $\{6, 25, 8, 7, 9, 11\}$.

The elements of array $A$ are: $\{4, 23, 6, 5, 7, 9\}$.

So here we can see that $(4-6)=(23-25)=(6-8)=(5-7)=(7-9)=(9-11)$.

So, we can say that an opening exists.

### Example 2

**Input**

```
4 10
7 1 9 8
1 2 3 4 5 6 7 8 9 10
```

**Output**

```
Please do all that you can.
```

No such $x$ and $d$ are found where, for every $i$ $(0 \leq i < m)$, $A[i] - B[x+i \times d]$ stays the same.

---

[^1]: Source: [Tanjiro's Training With Kanao](https://toph.co/p/tanjiro-s-training-with-kanao) on Toph (Furqan Software).
