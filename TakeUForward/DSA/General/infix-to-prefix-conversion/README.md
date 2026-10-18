# [963. Infix to Prefix Conversion](https://takeuforward.org/practice/dsa/infix-to-prefix-conversion)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given a valid arithmetic expression in infix notation, return its equivalent prefix (Polish) notation.

The expression can contain:

- lowercase letters a–z as operands

- the four binary operators + - * /

- and round parentheses ( ) that enforce evaluation order

- No whitespace appears in the input.

The input is guaranteed to be syntactically correct (parentheses are balanced, every operator has two operands, etc.).

### Example 1:

**Input:** "(a+b)*c"

**Output:** "*+abc"

**Explanation:**

Infix&nbsp;&nbsp;: (a + b) * c

Prefix&nbsp;: * + a b c

### Example 2:

**Input:** "a+b*c"

**Output:** "+a*bc"

**Explanation:**

Infix&nbsp;:&nbsp;a + (b * c)

Prefix&nbsp;: + a * b c

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ infix.length ≤ 1000
- infix contains only characters {a–z, +, -, *, /, (, )}.
- The expression is valid.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
