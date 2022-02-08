sum_14=0
num_14=int(input("Enter a number:"))
temp_14=num_14
while(num_14):
    i_14=1
    fact_14=1
    rem_14=num_14%10
    while(i_14<=rem_14):
        fact_14=fact_14*i_14
        i_14=i_14+1
    sum_14=sum_14+fact_14
    num_14=num_14//10
if(sum_14==temp_14):
    print("Given number is a strong number")
else:
    print("Given number is not a strong number")