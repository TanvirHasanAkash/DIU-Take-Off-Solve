# Here Is a Treat for You 🍕🍔

**Limits:** 1 s, 512 MB

## Problem Statement

**Kagaya Ubuyashiki**, the 97th leader of the Demon Slayer Corps, also known as ***Oyakata-sama*** to the Demon Slayer Corps, just met ***Tanjiro***, ***Zenitsu***, and ***Inosuke***. Instantly, he knew there was something special about them. But as special as they are, they also need special training to make their abilities grow faster. You know they can be trained best by the *hashiras* (the highest rank of demon slayers), but the *hashiras* are busy slaying demons (don't worry, they respect the pandemic: they are wearing masks, and saving people from demons is more important to them than quarantining right now). They are spread all around the world. They can't come to the demon slayer headquarters to teach them. So, *Oyakata-sama* made a scheme so that they can learn properly.

Initially, ***Tanjiro, Zenitsu, and Inosuke*** **each knew only one breathing technique.** Then all three meet at the demon slayer headquarters every time they get free to teach their breathing techniques to each other. After that, they go separate ways and practice those breathing techniques under different *hashiras*. *Tanjiro* practices the techniques shown by *Zenitsu* for $x_1$ days and after that, *Inosuke's* for $y_1$ days. But as Tanjiro goes to train under the *hashiras*, they influence those techniques in a way that **`the number of breathing techniques Tanjiro knows increases by the summation of`** $x_1$ **`× the number of techniques Zenitsu showed and`** $y_1$ **`× the number of techniques Inosuke showed.`** In the same way, Zenitsu's and Inosuke's practices get influenced following the rule mentioned below:

> Let's say that after the $i$-th meeting and finishing practice, the number of breathing techniques Tanjiro, Zenitsu and Inosuke know are $T_i$, $Z_i$ and $I_i$ respectively. So,
>
> $T_i = T_{i-1} + (Z_{i-1} \times x_1) + (I_{i-1} \times y_1)$
>
> $Z_i = Z_{i-1} + (T_{i-1} \times x_2) + (I_{i-1} \times y_2)$
>
> $I_i = I_{i-1} + (T_{i-1} \times x_3) + (Z_{i-1} \times y_3)$

![Figure from the original problem](https://uploads.toph.co/C8b07igtIE2ocjfg7lbW9HXmAJBHfE0fo2fAz294c8U/resize:fit:468::0/dpr:1/czM6Ly90b3BoLXBsYXRmb3JtLXVwbG9hZHMvaW1hZ2VzLzE2MTc4NzYxMzI1OTMyNTI2MzYtMzM3MTg4MDUzMTc2MDYyMTEyMC01YTMwYzYwOWQzMTJmNGNiYjk5MGJmYmE1MWExNDFlMS5qcGc)

Today is such a day! They are going to meet again, and ***Oyakata-sama*** **told me that they have met $N$ times before today.** So, I was wondering how many techniques ***Tanjiro*** knows before the meeting (Why Tanjiro? I'll leave it to your imagination 😉). Anyway, the number of techniques *Tanjiro* knows at this point might be so big that it might not fit into a 32-bit integer (this is **Demon Slayer**; in some parallel universe anything is possible 😉). That is why you have to **output the value modulo $10^{9}+7$ (1000000007)**. In other words, print $T_n \% 1000000007$. Initially, $T_0 = 1$, $Z_0 = 1$, $I_0 = 1$.

## Input

The first line will be a single integer $T$ indicating the number of test cases. The following $T$ lines will each contain seven integers $x_1$, $y_1$, $x_2$, $y_2$, $x_3$, $y_3$, $N$ separated by spaces.

**Constraints**

- $1 \leq T \leq 10^{3}$
- $0 \leq x_1, y_1, x_2, y_2, x_3, y_3 \leq 10^{9}$
- $1 \leq N \leq 10^{9}$

## Output

Output $T$ lines in the format "Case X: Y" (without quotes), where $X$ is the test case number and $Y$ is $T_n \% 1000000007$.

## Example

**Input**

```
3
1 2 0 0 0 0 3
1 1 1 1 1 1 4
1 0 1 0 1 0 10
```

**Output**

```
Case 1: 10
Case 2: 81
Case 3: 1024
```

## Notes

**First test case.** Initially, Tanjiro knows 1 technique, Zenitsu knows 1 technique, and Inosuke knows 1 technique.

After the 1st meeting and finishing their practice:

- Tanjiro knows $1 + 1 \times 1 + 2 \times 1 = 4$ techniques
- Zenitsu knows $1 + 0 \times 1 + 0 \times 1 = 1$ technique
- Inosuke knows $1 + 0 \times 1 + 0 \times 1 = 1$ technique

After the 2nd meeting and finishing their practice:

- Tanjiro knows $4 + 1 \times 1 + 2 \times 1 = 7$ techniques
- Zenitsu knows $1 + 0 \times 1 + 0 \times 1 = 1$ technique
- Inosuke knows $1 + 0 \times 1 + 0 \times 1 = 1$ technique

After the 3rd meeting and finishing their practice, Tanjiro, Zenitsu and Inosuke know 10 techniques, 1 technique and 1 technique respectively.

---

[^1]: Source: [Here Is a Treat for You 🍕🍔](https://toph.co/p/how-powerful-tanjiro-is) on Toph (Furqan Software).
