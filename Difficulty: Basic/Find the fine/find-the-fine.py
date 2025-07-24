class Solution:
    def totalFine(self, date, car, fine):
        total_fine = 0
        if date % 2 == 0:
            for i in range(len(car)):
                if car[i] % 2 != 0:
                    total_fine += fine[i]
                else:
                    continue
        else:
            for i in range(len(car)):
                if car[i] % 2 == 0:
                    total_fine += fine[i]
                else:
                    continue
        return total_fine
    