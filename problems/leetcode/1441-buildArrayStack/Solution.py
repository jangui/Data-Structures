
class Solution:
    def __init__(self):
        pass

    def buildArray(self, target: List[int], n: int) -> List[str]:
        """
        :param target: list of ints we want to build using stack
        :param n: limit of iteration
        :return: list of stack operations
        """
        # edge case
        if len(target) == 0:
            return []

        solution = []
        current_ind = 0
        current_val = target[current_ind]
        for i in range(1, n+1):

            if i == current_val:
                solution.append("Push")
                current_ind += 1
                if len(target) == current_ind:
                    return solution
                current_val = target[current_ind]
            else:
                solution.append("Push")
                solution.append("Pop")


        return solution



