# Treat? Itadakimasu… 😋

**Limits:** 1 s, 512 MB

## Problem Statement

So the fight against the demonized humans, who eat good humans, is raging on. And the cause for these human demonizations is none other than the Covid virus, created by the "Virus Mommy" *Muzan*. The demon slayer corps are now hunting Muzan. But at the same time, they have to deal with the demons as well. To kill them the slayers need a special type of Katana (a type of Japanese sword) created by special swordsmiths.

*Maya-chan* has joined the slayers as an assistant to *Haganezuka oji-san*, a famous swordsmith. Immediately after joining, *Maya-chan* noticed a problem that almost all the swordsmiths struggle with. And the problem is determining the power level of the katanas. The calculation process of the power level is given below:

The katanas are made by mixing $4$ different special types of elements, each having a special power level. So after making a katana by mixing all the elements, to get the power level of the katana, first, one has to multiply all the $4$ power levels of the elements. Then take the last $2$ digits of the product of the $4$ power levels.

Now depending on the acquired $2$-digit number, the power level of the Katana is determined as given below:

- If the acquired $2$-digit number is in the range $[00, 24]$ (inclusive), then the Katana power level is $0$.
- If the acquired $2$-digit number is in the range $[25, 49]$ (inclusive), then the Katana power level is $1$.
- If the acquired $2$-digit number is in the range $[50, 74]$ (inclusive), then the Katana power level is $2$.
- If the acquired $2$-digit number is in the range $[75, 99]$ (inclusive), then the Katana power level is $3$.

Now Maya-chan wants your help to write a program that can calculate the power level of the katanas and make the lives of the swordsmiths easier. She also informs you that the magic word to solve this problem is *"Itadakimasu"* (a Japanese word) and the right Breathing Technique. 😉

Oh!!! Almost forgot about the Treat prepared for you to motivate you to do the task. Here it is:

What do you get when you divide a number by $100$ and take the remainder? (Consider large numbers for better understanding)

Not satisfied yet? Well, here's another one.

Once upon a time, while doing something, a certain someone found out that,

$$(a \times b) \% mod = ((a \% mod) \times (b \% mod)) \% mod$$

Don't believe it? Then,

Calculate $(107 \times 222) \% 100$ and again calculate $((107 \% 100) \times (222 \% 100)) \% 100$… Found anything?

What? Still don't like the treat? Well… Like it or not, it's a pretty amazing treat. So why don't you just dig in saying *"Itadakimasu"* out loud?

## Input

$4$ non-negative integers will be given on a single line, separated by spaces. None of the integers will be greater than $10^9$.

## Output

Output contains a single line "level X" (without quotes), where $X$ is the level of the Katana.

## Examples

### Example 1

**Input**

```
2 3 4 8
```

**Output**

```
level 3
```

### Example 2

**Input**

```
1 1 1 1
```

**Output**

```
level 0
```

## Notes

In the first test case, after multiplying the numbers we get $2 \times 3 \times 4 \times 8 = 192$. By taking the last $2$ digits of $192$ we get $92$, which is in the range $[75, 99]$. So the power level is $3$.

---

[^1]: Source: [Treat? Itadakimasu… 😋](https://toph.co/p/treat-itadakimasu) on Toph (Furqan Software).
