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
        # print(f"iteration {i} m1 = {m1:1.20f}")
        # print(f"iteration {i} m2 = {m2:1.20f}")
        # print(f"iteration {i} m3 = {m3:1.20f}")
        # print(f"iteration {i} m4 = {m4:1.20f}")
        # print(f"iteration {i} m5 = {m5:1.20f}")
        # print(f"iteration {i} π = {pi:1.20f} \n")

    return pi

if __name__ == "__main__":
    start = time()
    pi = calculate_pi(N)
    end = time()
    print(f"\n final π = {pi:1.20f}")
    print(f"valeur PI {math.pi:1.6f}")
    print(f"Time elapsed: {(end - start)*1000:1.6f} Milliseconds!")

# iteration 10 π = 3.14159265358979311600
