# Heart of the Demon

**Limits:** 1 s, 512 MB

> *"The weak have no rights or choices. Their only fate is to be relentlessly crushed by the strong!"* – Giyu Tomioka

## Problem Statement

*Muzan Kibutsuji* is the Demon King, the first of his kind. Having lived for thousands of years, he has become unimaginably strong. He killed an innumerable number of people and turned some of them into demons.

Since ancient times, the "Demon Slayer Corps" has existed to hunt down demons. They number in the hundreds, and are an organization completely unrecognized by the government.

In one demon attack, the entire family of Tanjiro Kamado was destroyed. Now the goal of his life is to kill *Muzan* to avenge his family. After years of extreme training as a "Demon Slayer", he is finally ready to fight *Muzan*.

*Tanjiro* finds out that *Muzan* can't be killed like other demons. The heart of *Muzan* is divided into $N$ parts and placed in secret places with very strong protection. To kill *Muzan*, *Tanjiro* needs to collect all the parts of the heart, merge them together, and stab the middle of the heart with his sword.

All the parts of the heart are of a **distinct** size, so each part can be represented by its size, which is an integer. If the heart is $\{7, 5, 3, 11, 2\}$, then to find the middle of the heart he has to find all the parts and merge them in increasing order, like $\{2, 3, 5, 7, 11\}$. Here the **middle element is the middle of the heart, which is 5**.

Now, *Tanjiro* knows how to kill *Muzan*, but if he fails there will be no other chance to kill *Muzan* in a thousand years. So, before the attack, *Tanjiro* needs to know **how much stamina he needs to merge the heart and what the middle of the heart is**.

The stamina needed to find all the parts and merge them, for the heart $\{7, 5, 3, 11, 2\}$, is $7$.

Let's see how to calculate it. In each move, *Tanjiro* finds the smallest remaining part of the heart and takes it. The stamina needed to take that part is the **number of remaining parts to its left**.

If the heart is $\{7, 5, 3, 11, 2\}$:

| Move | Taken (sorted) | Remaining | Note |
|------|----------------|-----------|------|
| 0 | `{}` | `{7, 5, 3, 11, 2}` | Starting the attack |
| 1 | `{2}` | `{7, 5, 3, 11}` | Takes part 2, stamina used is 4 |
| 2 | `{2, 3}` | `{7, 5, 11}` | Takes part 3, stamina used is 2 |
| 3 | `{2, 3, 5}` | `{7, 11}` | Takes part 5, stamina used is 1 |
| 4 | `{2, 3, 5, 7}` | `{11}` | Takes part 7, stamina used is 0 |
| 5 | `{2, 3, 5, 7, 11}` | `{}` | Takes part 11, stamina used is 0 |

So, to merge this heart, the total stamina needed is $(4 + 2 + 1 + 0 + 0) = 7$, and the middle of the heart is $5$.

*Tanjiro* performs best at fighting but struggles with math, so he needs assistance. As the best thinker of the Demon Slayer Corps, you have to find the stamina needed to merge the given heart and the middle of that heart.

## Input

The first line contains a single integer $N$, the number of parts of the heart. It is guaranteed that $N$ is always a positive odd number and $0 < N < 10^{6}$.

The next line contains $N$ integers, each representing a part of the heart, $1 \leq h_i \leq 10^{9}$.

## Output

Output a single line with two integers: the total stamina and the middle of the heart.

## Examples

### Example 1

**Input**

```
5
7 5 3 11 2
```

**Output**

```
7 5
```

### Example 2

**Input**

```
7
1 2 3 4 5 6 7
```

**Output**

```
0 4
```

## Notes

The dataset is huge, so use faster I/O methods.

---

[^1]: Source: [Heart of the Demon](https://toph.co/p/heart-of-the-demon) on Toph (Furqan Software).
