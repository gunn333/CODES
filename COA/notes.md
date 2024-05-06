# CPU : Central Processing Unit

CPU ke andar teen units hoti hain : 

1. Arithmetic Logical Unit (ALU)
2. Control Unit
3. Registers (Storage Units) -> Set of flip-flops form register

And CPU is directly directly connected to Memory Unit

-----------------------------------------BUS ORGANIZATION---------------------------------------

DATA TRANSFER KRTI HAI BUSES

When a large number of registers are included in the CPU, it is most efficient to connect them through a common bus system.
The registers communicate with each other not only for direct data transfers, but also while performing various microoperations.
Hence it is necessary to provide a common unit that can perform all the arithmetic, logic, and shift microoperations in the processor. 

> TYPES OF BUSES

>>1. Address Bus will carry the address. CPU will generate the address. This will will tell how many slots we have in memory. Uni-directional
>>2. Data Bus will carry the data. Bi-directional. 
>>3. Control Bus for carrying control and timing signals

-----------------------------------------GENERAL REGISTER ORGANIZATION-------------------------

ALU Operation Selector :  OPR
Decoder Destination Selector : OPR

Output of Each Register is connected to 2 multiplexers

