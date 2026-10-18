# [989. Postfix to Prefix Conversion](https://takeuforward.org/practice/dsa/postfix-to-prefix-conversion)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

You are given a valid postfix expression as a string, where:

- Operands are single lowercase English letters ('a' to 'z')
- Operators are binary: '+', '-', '*', '/'
- The expression contains no spaces and is guaranteed to be valid.

Write a function to convert the **postfix** expression **into** a **prefix** expression, also as a string without spaces.

### Example 1:

**Input:** &nbsp;expression = "ab+"

**Output:** "+ab"

**Explanation:** Postfix → Prefix

### Example 2:

**Input:** &nbsp;expression = "abc*+d-"

**Output:** "-+a*bcd"

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= len(postfix) <= 1000
- The postfix expression is valid (no need to validate correctness)
- Operands are lowercase letters (a-z)
- Operators are binary: +, -, *, /

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
