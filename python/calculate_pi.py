from time import time

N = 1_000_000_000

def calculate_pi(n_terms: int) -> float:
    numerator = 4.0
    denominator = 1.0
    operation = 1.0
    pi = 0.0
    for _ in range(n_terms):
        pi += operation * (numerator / denominator)
        denominator += 2.0
        operation *= -1.0
    return pi


if __name__ == "__main__":
    start = time()
    pi = calculate_pi(N)
    end = time()
    print(f"π = {pi:1.15f}")
    print(f"Time elapsed: {round((end - start), 2)} seconds!")

# π = 3.14159265
# Time elapsed: 112.76 seconds!
