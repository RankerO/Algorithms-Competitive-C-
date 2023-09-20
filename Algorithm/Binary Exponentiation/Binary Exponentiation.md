# Binary Exponentiation 
[Reference](https://cp-algorithms.com/algebra/binary-exp.html#algorithm)
- Binary exponentiation (also known as exponentiation by squaring) is a trick which allows to calculate   $a^n$ using only   $O(\log n)$  multiplications.
### Algorithm
- Raising a to the power of n is expressed naively as multiplication by a done n-1 times.However, this approach is not practical for large  a or n.
- ![](https://i.imgur.com/qR08zJG.png)
- ![](https://i.imgur.com/oK0B7B3.png)
**Recursive approach**
```c++
int powwer(int x,int y)
{
    if(y==0)
        return 1;
    if(y%2)
        return x * powwer(x, y / 2) * powwer(x, y / 2);
    else
        return powwer(x,y/2)*powwer(x, y / 2);
}
```
**Loop approach**
- This approach will be faster in practice since we don't have the overhead of the recursive calls.
```c++
int loopPower(int x,int y)
{
    int res = 1;
    while(y>0)
    {
        if(y&1)
            res *= x;
        x *= x;// power of previous value
        y >>= 1;// 1101011 -> 110101 -> 11010 -> 1101 -> 110 -> 11 -> 1
    }
    return res;
}
```
- Effective computation of large exponents modulo a number
```c++
int MOD = 1E9 + 7;
int loopPower(int x,int y)
{
    x %= MOD;
    int res = 1;
    while(y>0)
    {
        if(y&1)
        {
            res *= x%MOD;
        }
        x *= x%MOD;
        y >>= 1;
    }
    return res;
}
```