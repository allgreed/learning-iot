.global test_assembly_function
test_assembly_function:
toret_l = 24    
toret_h = 25
k = 0x1122
    ldi toret_l, lo8(k)
    ldi toret_h, hi8(k)
    ret
