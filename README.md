# Banker-s-Algo

reference: https://zh.wikipedia.org/wiki/%E9%93%B6%E8%A1%8C%E5%AE%B6%E7%AE%97%E6%B3%95
```
Banker' s Algorithm
 * /////////////////////////////////////////
 * total system resource are:
 *      A  B  C  D
 *      6  5  7  6
 * -----------------------------------------
 * there are 3 processes P1, P2, P3.
 * -----------------------------------------
 * Process current allocated resources:
 *      A  B  C  D
 *  P1  1  2  2  1
 *  P2  1  0  3  3
 *  P3  1  2  1  0
 * -----------------------------------------
 * Processes (Maximim resorces):
 *      A  B  C  D
 *  P1  3  3  2  2
 *  P2  1  2  3  4
 *  P3  1  3  5  0
 * -----------------------------------------

```
answer:
```
safe order is P1 P2 P3
```
