class Solution:
    def reverse(self, x: int) -> int:

        string_x = str(abs(x))
        reverse = string_x[::-1]
        reversed_int = int(reverse)

        if x < 0:
            reversed_int *= -1

        bounds = 2**31
        if reversed_int > bounds or reversed_int < -bounds:
            return 0

        return reversed_int

