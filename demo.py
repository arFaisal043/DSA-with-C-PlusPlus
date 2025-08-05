from functools import cmp_to_key

def large_nums(nums):
    def comp(a , b):
        if(a + b > b + a): return -1
        else: return 1

    str_nums = list(map(str , nums))
    #return str_nums    # ['3', '30', '34', '5', '9']
    str_nums.sort(key = cmp_to_key(comp))
    res = ''.join(str_nums)

    return res


numbers = [3, 30, 34, 5, 9]
print(large_nums(numbers))