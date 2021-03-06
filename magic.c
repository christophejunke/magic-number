void magic_number(void)
{
        /* Short value tmp is 0x5511, which can be manipulated as 2
           consecutive bytes:

              Byte index:     0    1
             ---------------------------
              Big endian    : 0x55 0x11
              Little endian : 0x11 0x55

         */
        short tmp = (short)(0x5511);

        /* Convert to pointer to char* (char is 1 byte). */
        char* b = ((char *)&tmp) ;

        /* Take the first char. Depending on the architecture, c is
         * either 0x55 or 0x11.
        */
        char c = b[0];

        /* Left shift 0 by c. */
        int i = 0 << (int)c;
}
