# Inosuke and Trailing Zero

**Limits:** 1 s, 512 MB

## Problem Statement

*Inosuke* and *Tanjiro* are overjoyed because *Mr. Haganezuka* is bringing their sword of revenge. They broke their old sword while trying to kill Spider Demons. After receiving the new sword, *Inosuke* begins to break it again to give it a shape like his old one, which angers *Mr. Haganezuka* because he cannot bear that his creation is being destroyed. He raged at *Inosuke*. After *Tanjiro* tried for a long time, he finally calmed down. But for this crime, he punished *Inosuke* with a mathematical problem, because he knew that *Inosuke* was very weak in mathematics.

*Mr. Haganezuka* gave him an array $A$ with $N$ integers and another array $B$ with $M$ integers. *Inosuke* has to do the following operations on these arrays:

1. **Multiply all the integers of the array $A$:** $resA = (A_1 \times A_2 \times A_3 \times \ldots \times A_n)$
2. **Multiply all the integers of the array $B$:** $resB = (B_1 \times B_2 \times B_3 \times \ldots \times B_m)$
3. **Then determine how many trailing zeros there are in** $\dfrac{resA}{resB}$

*Mr. Haganezuka* doesn't like fractional numbers. So he will **always give the numbers of the arrays in such a way that $resA$ is always divisible by $resB$.**

## Input

The first line of input contains two integers $n$ and $m$ $(1 \leq n + m \leq 10^{5})$.

The second line contains $n$ integers $(A_1, A_2, A_3, \ldots, A_n)$, with $1 \leq A_i \leq 10^{9}$.

The third line contains $m$ integers $(B_1, B_2, B_3, \ldots, B_m)$, with $1 \leq B_i \leq 10^{9}$.

## Output

Output the number of trailing zeros in the product of all integers of $A$ divided by the product of all integers of $B$.

## Example

**Input**

```
1 2
1000
2 5
```

**Output**

```
2
```

---

[^1]: Source: [Inosuke and Trailing Zero](https://toph.co/p/inosuke-and-trailing-zero) on Toph (Furqan Software).
