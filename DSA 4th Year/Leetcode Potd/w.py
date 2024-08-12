def replace(input_s):
    ans = ''
    word = ''
    c = 0
    for char in input_s:
        if char == '.':
            if c % 2 == 0:
                ans += word
            else:
                ans += 'xyz'
            ans += '.'
            word = ''
            c += 1
        else:
            word += char
    if c % 2 == 0:
        ans += word
    else:
        ans += 'xyz'
    return ans

print(replace("i.like.this.program.very.much"))  # Output: "i.xyz.this.xyz.very.xyz"
