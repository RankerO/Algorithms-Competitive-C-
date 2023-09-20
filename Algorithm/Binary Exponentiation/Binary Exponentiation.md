# Binary Exponentiation 
[Reference](https://cp-algorithms.com/algebra/binary-exp.html#algorithm)
- Binary exponentiation (also known as exponentiation by squaring) is a trick which allows to calculate   $a^n$ using only   $O(\log n)$  multiplications.
### Algorithm
```c++
int powwer(int x,int y)
{
    if(y==0)
        return 1;
    if(y%2)
        return x * powwer(x, (y) / 2) * powwer(x, (y) / 2);
    else
        return powwer(x,y/2)*powwer(x, y / 2);
}
```
