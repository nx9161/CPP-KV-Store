# C++ Key-Value Store
A lightweight, in-memory database implemented using C++ Standard Template Library (STL).

## Overview
This project demonstrates the implementation of a basic NoSQL-style database. It uses a `std::map` (Red-Black Tree) to provide $O(\log n)$ time complexity for data insertion and retrieval.

## Features
- **Efficient Mapping**: Associate unique string keys with string values.
- **Data Encapsulation**: Uses a Class-based approach for clean API access (`put`, `get`, `listAll`).
- **Data Science Relevance**: Foundation for understanding how modern databases like Redis or MongoDB handle in-memory storage.

## How to Run
1. Compile: `g++ main.cpp -o kvstore`
2. Run: `./kvstore`