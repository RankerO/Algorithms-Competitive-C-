# Binary Exponentiation 
[Reference](https://cp-algorithms.com/algebra/binary-exp.html#algorithm)
- Binary exponentiation (also known as exponentiation by squaring) is a trick which allows to calculate   $a^n$ using only   $O(\log n)$  multiplications.

### Algorithm
= Raising   �<math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math>$a$  to the power of   �<math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>$n$  is expressed naively as multiplication by   �<math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math>$a$  done   �−1<math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi><mo>−</mo><mn>1</mn></math>$n - 1$  times.However, this approach is not practical for large   �<math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math>$a$  or   �<math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>$n$ .

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
