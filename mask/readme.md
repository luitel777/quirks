bitmask to create options

mask_1 = 1    = 00000001
mask_1 << 1   = 00000010
10 bin = 2 dec

mask_2 = 1    = 00000001
mask_2 << 2   = 00000100
100 bin = 4 dec

mask1 | mask_2

00000010
00000100
--------
00000110

^  ^  ^  ^ 
|  |  |  | 
our new masked value is 00000110

pass bleh(00000110)

create = 00000110

create & mask_1
00000110
00000010
--------
00000010
mask_1 is also 00000010 so mask_1 exists


create & mask_2
00000110
00000100
--------
00000100
mask_2 is also 00000100 so mask_2 exists
