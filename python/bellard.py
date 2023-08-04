#![allow(unused)]
from time import time
import math

N = 15;

def calculate_pi(n_terms: int) -> float:
    m1 = 0.0;
    m2  = 0.0;
    m3  = 0.0;
    m4  = 0.0;
    m5  = 0.0;
    pi  = 0.0;
    x = 16 ;

    for i in range(0,n_terms):
        m1 = 1 / x**i;
        m2 = 4 / ((8*i)+1) ;
        m3 = 2 / ((8*i)+4) ;
        m4 = 1 / ((8*i)+5) ;
        m5 = 1 / ((8*i)+6) ;
        pi += m1 * ( m2-m3-m4-m5 );
        print(f"π = {pi:1.50f}")

    return pi

if __name__ == "__main__":
    start = time()
    pi = calculate_pi(N)
    end = time()
    print(f"\n final π = {pi:1.25f}")
    print(f"valeur PI {math.pi:25f}")
    print(f"Time elapsed: {round((end - start), 6)} seconds!")
