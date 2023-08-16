from time import time
import math

N = 1_000_000_000

def calculate_pi() -> float:

    pi = 6 * math.atan( 1 /math.sqrt(3))
    return pi


if __name__ == "__main__":
    start = time()
    pi = calculate_pi()
    end = time()
    print(f"π = {pi:1.38f}")
    # print(f"Time elapsed: {round((end - start)*1000, 2)} seconds!")
    print(f"Time elapsed: {(end - start)*1000:1.6f} Milliseconds!")

# π = 3.14159265
# Time elapsed: 112.76 seconds!
