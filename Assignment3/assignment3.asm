.include "/home/pulkit/Desktop/FPGA_LAB/Assignment3/m328Pdef.inc"

Here:
    ldi r17,0b11100011 ;input pins 10,11,12
    out DDRB,r17
    ldi r17,0b11111111
    out PORTB,r17
    in r17,PINB


    ; pins 8 - 15 in the above 8-bit string
    ; we need 10 - 12
    lsr r17
    lsr r17

    ldi r21,0b00000001
    and r21,r17 ;z

    lsr r17
    ldi r22,0b00000001
    and r22,r17 ;y

    lsr r17
    ldi r23,0b00000001
    and r23,r17 ;x

    ; f = xy + xz
    and r22,r23
    and r21,r23
    or r21,r22


    lsl r21
    lsl r21

    ldi r16,0b00111100
    out DDRD,r16
    out PORTD,r21

    rjmp Here






