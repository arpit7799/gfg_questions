class Solution:
    def lcmAndGcd(self, a: int, b: int) -> list:
        def gcd(x, y):
            while y:
                x, y = y, x % y
            return x

        gcd_val = gcd(a, b)
        lcm_val = (a * b) // gcd_val
        return [lcm_val, gcd_val]