# Competitive Programming C++ — Repository Overview

## Purpose

This repository is intended to house **C++ solutions for competitive programming problems**, owned by GitHub user `larvenejafemcoder`. It is currently an **empty Git skeleton** — no code, no commits, and no branches have ever been created.

## Current State

| Aspect        | Status                         |
|---------------|--------------------------------|
| Files         | None (`.git/` excluded)       |
| Commits       | None                           |
| Branches      | None (HEAD is broken)          |
| Tags          | None                           |
| Remote        | `git@github.com:larvenejafemcoder/Competitive_Programming_Cpp.git` |
| Build system  | Not configured                 |

## Issues

- **Broken HEAD** — `.git/HEAD` points to `refs/heads/.invalid`, which does not exist. Any Git operation will fail.
- **Orphaned temporary pack file** — A ~221 MB `tmp_pack_tBab2a` file in `.git/objects/pack/` suggests an interrupted `fetch` or `clone`. This data is not referenced by any ref and could be pruned.

## Planned Structure

Based on the repository name, the contents would typically be organized by:

- **Platform** — Codeforces, AtCoder, LeetCode, UVa, etc.
- **Topic** — Graphs, Dynamic Programming, Strings, Number Theory, Data Structures, etc.
- **Contest** — Round/contest-specific folders

## Conventions

No conventions have been established yet. Common C++ competitive programming conventions to consider:

- **Language standard** — C++17 or C++20
- **Build system** — None typically needed; single-file compilation with `g++ -std=c++17 -O2`
- **Template file** — A reusable `template.cpp` with fast I/O, common typedefs, and macros
- **Headers** — `<bits/stdc++.h>` (common in CP) or individual includes
- **Testing** — Manual I/O redirection or a simple test harness

## Next Steps

1. Fix the Git HEAD reference (e.g., `git symbolic-ref HEAD refs/heads/main`)
2. Clean up the orphaned pack file (`git gc` or manual removal)
3. Create an initial structure with folders per platform/topic
4. Add a `template.cpp` with common setup
5. Start adding solutions
