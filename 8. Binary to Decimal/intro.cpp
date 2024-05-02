 3  4   5   6    7   8    9
  ans = 0
  3 = ans * 10  + num
  34 = ans * 10 + num
  345 = ans * 10 + num
  3456 = ans * 10 + num
  34567 = ans * 10 + num
  345678 = ans * 10 + num
  3456789 = ans * 10 + num



  we have   a  =  6    and     b  =   9
  we need to make 96
  ans = b*10 + a



  if we have   6    4     9     2
  we need to make 2946
  ans = 0
  ans = num * 10**i  + ans
  ans = 6 * 10**0 + 4 * 10**1 + 9 * 10**2 + 2 * 10**3   (2946)

  ans = 6492
  ans = 6 * 10**3 + 4 * 10**2 + 9 * 10**3 + 2 * 10**0   (6492)




/**   Decimal to binary conversion  */
ans = 0
ans = rem * 10**i  + ans
