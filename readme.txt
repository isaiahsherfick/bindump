bindump is a simple little C utility that reads input from stdin until it encounters a newline character or EOF and dumps the raw binary encoding of that data to the command line.
It is not useful, but it can be combined with similarly unuseful CLI utils to do silly things like make a cow say fuck the police in the binary representation of standard 7-bit ASCII data.


Example usage: echo 'fuck the police' | ./bindump | cowsay
 _____________________________________ 
/ 01100110 01110101 01100011 01101011 \
| 00100000 01110100 01101000 01100101 |
| 00100000 01110000 01101111 01101100 |
\ 01101001 01100011 01100101          /
 ------------------------------------- 
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
