def count_sum(array):
    positive = 0
    negative = 0
    i = 0
    while i < len(array):
        
        if array[i] > 0:
            positive = positive + 1
        else:
            negative = negative + array[i]
       
        i = i + 1
        
    print([positive,negative])
    
count_sum([1,2,3,4,5,6,7,8,9,10,-11,-12,-13,-14,-15])