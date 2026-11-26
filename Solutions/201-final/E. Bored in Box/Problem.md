# Bored in Box

**Limits:** 1 s, 512 MB

## Problem Statement

After becoming a demon, *Nejuko* can't go out in the sunlight. Most of the daytime she stays in a box. Though she never complained, this is extremely boring to her. After all, why would a demon (or human) like to live in such a tiny box alone! That's why her elder brother *Tanjiro* decides to give her a problem to solve to bring some excitement.

*Tanjiro* drew an **equilateral triangle** $ABC$ with its **circumcircle**. Then he drew **three half circles**, **each based on exactly one side of the triangle**. Finally, he got a figure like the one below.

<div align="center">

![Figure: equilateral triangle ABC with its circumcircle and three half circles on the sides](https://uploads.toph.co/JR07N35XPbOsFHv8cTraDMZ-OAL2Cua0rxLPekNMC6k/resize:fit:468::0/dpr:1/czM6Ly90b3BoLXBsYXRmb3JtLXVwbG9hZHMvaW1hZ2VzLzE2MTc0MjE3MTE3NDEyNTIzMTgtNjk2MjM4MzEyMzY0NTMxMzU0LTIwZjEzMDMyMzkwNzkzNWU4NGY5OWE3ZjU3NTM2YjIyLmpwZw)

</div>

Now *Tanjiro* gives the **length of the side** $AB$ of the triangle and asks *Nejuko* to **find the area of the dark shaded region**.

After trying for some time, *Nejuko* was almost close to the solution. She derived that the **area of the given triangle** is equal to $\frac{\sqrt{3}}{4}BC^2$ and the **circumradius** of the given triangle is equal to $\frac{BC}{\sqrt{3}}$.

After doing this much, *Nejuko* started feeling tired. She needs to sleep now to gain some energy. Before going to sleep she asked you to solve the same problem.

She also said one more thing: "**You must use** $3.14159$ **for the value of** $pi$ $(\pi)$".

## Input

The input will contain only one integer $AB$, the length of one side of the triangle.

$1 \leq AB \leq 3 \times 10^4$

## Output

Output the **area of the dark shaded region**. Your answer is considered correct if its absolute or relative error doesn't exceed $10^{-6}$.

## Examples

### Example 1

**Input**

```
14
```

**Output**

```
110.526807904208283
```

### Example 2

**Input**

```
6
```

**Output**

```
20.300842268119887
```

## Notes

- An equilateral triangle is a triangle in which all three sides have the same length.
- The circumcircle of a triangle is the circle that passes through all three vertices of the triangle. The circumradius is the radius of the circumcircle.
- Half circles "exactly based on the sides of the triangle" means the diameters of those half circles are equal to the respective sides of the triangle.

---

[^1]: Source: [Bored in Box](https://toph.co/p/bored-in-box) on Toph (Furqan Software).
