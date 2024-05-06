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

It consists of four fields. Three fields contain three bits each, and one field has five bits. 
The three bits of SELA select a source register for the A input of the ALU. 
The three bits of SELB select a register for the B input of the ALU. The three bits of SELD select a destination register using the decoder and its seven load outputs. 
The five bits of OPR select one of the operations in the ALU. 

Causing the CPU to step through a series of micro operations  -> SEQUENCING

CPU Cache Memory -> Store frequently accessed data

-----------------------------------------STACK ORGANIZATION AND NOTATION-------------------------

Also knowns as Single Accumulator Organization.

Stack -> Last in First Out (LIFO). It saves data such that the element stored last is retrieved first.

Stack Pointer -> A register that holds the address for the stack. (SP). Iski value hamesha top item pe point kregi of the stack.

Stack-organized computer uses instruction of 0 addressing

Disadvantage: Size of Program increases.

Von Neumann Architecture : SISD (Single Instruction, Single Data)

## REGISTER STACK ORGANIZATION:

Ismein hum different registers ko as a stack implement kr rahe hain.

```New SP value = Initial SP value - Number of elements pushed```

```New SP value = Initial SP value - Number of elements popped```

```New SP < 0  -> Stack Underflow```

``` SP = 0 : means stack is empty and trying to pop from empty stack will lead to stack underflow```

In Register Stack , If EMPTY = 1 AND FULL = 0 means stack is empty.

Memory stack can potentially provide a larger storage space compared to register stack.

Registers are limited in number and size, whereas memory stack can use the entire available RAM, which is significantly larger.

## REVERSE POLISH NOTATION

Postfix Notation Referred to as Reverse Polish Notation

Places the operator after the operands.

A + B                Infix Notation
+ AB                 Prefix / Polish Notation
AB +                 Postfix / Reverse Polish Notation

Used for Stack Manipulation

Priorites of Operators : ^  -> Highest
                         * , / 
                         + , -  -> Lowest

If Stack is implemented using Linked List : TC of push and pop operations : O(1)

maximum number of elements that can be stored in a stack implemented using an array of size n : n-1

In a postfix expression evaluation, how many operands are required for a binary operator : 2

Advantage of using stack in implementation of a recursive function : Helps in maintaining the call stack.

Operator precedence rules are not applicable in postfix notation.

In a memory stack implementation, the purpose of the stack limits -> To prevent stack overflow and underflow conditions

## INSTRUCTION FORMATS

Instructions comprises of groups called fields.

> Operation Code Field
> > Present in Machine Language Instruction
> > Specifies the operation to be performed

> Address Field
> > Contains the address of register / address of operand.

Operands reside in processor register.

> Mode field
> > which specifies how operand or effective address can be determined.

Instruction is of Variable length depending on the number of addresses it contains.

### CPU ORGANIZATION IS OF 3 TYPES :

> Single Document Organization
> > operations are performed with implied accumulator register.
> > uses one address field
> > CPU performs the operation using a special register called the accumulator

ADD X 
<br>
operation :   AC  <- AC + M[X]
<br>
where M is the memory word located at address X

> General Register Organization
> > instruction has two or three address fields.

ADD R1,R2,R3
<br>
operation: R1 <- R2 + R3

In Stack Organization , PUSH and POP doesn't require address field

## ADDRESSING MODE

Yeah humein bata ta hai ki humne Operand ko kaise treat krna hai. kaise consider krna hai. Generally we give the address in operand.

Generally humare variables ya toh memory mein store ho jate hain ya fir Registers mein.

Isse hum number of bits instruction mein reduce kr skte hain

### IMPLIED MODE

The operands are specified implicitly in the definition of the instruction.

CMA - Complement Accumulator.

All register reference instructions that use an accumulator are implied-mode instructions.

For Zero Address and one address.

CLC (used to reset Carry flag to 0).

### IMMEDIATE MODE

operand ki jagah direct data diya hoga. As we are using constants so no computation is required.

operand is specified in the instruction itself.
<br>
has operand field rather than address field
<br>
useful for initializing registers to a constant value.

Operand Range depends on the length of Address Field (operand)

### REGISTER MODE

Register number is written in instruction.

Instruction size chota hoga

Speed will be fast.

### REGISTER INDIRECT MODE

Operand -> Register number stored hoga

Register Number mein bhi address milega of memory. Then we will go to memory and find the value.

LD(R1)

AC <- M[(R1)]

### AUTO INCREMENT OR AUTODECREMENT ADDRESSING MODE

special case of Register Indirect Addressing mode

### DIRECT ADDRESSING MODE

Operand -> Direct Address of memory

ADD X

AC <- AC + M[X]

Benefit : No Computation Needed 

### INDIRECT ADDRESSING MODE

2 Memory Access Required

Computation Direct Addressing mode se jada hai

AC <-  AC + M[M[X]]

Pointers ki facility provide krta hai and passing parameters as well.

### INDEXED ADDRESSING MODE

used to access or implement array efficiently.

EA = Base Address + Indexed Register

### BASE REGISTER ADDRESSING MODE

used in program relocation.

EA = Base Register Value + Displacement

## DATA TRANSFER AND MANIPULATION

1. Data Transfer Instructions
2. Data Manipulation Instructions
3. Program Control Instructions

AND -> Clear Selected Bits
OR -> Set Selected Bits
XOR -> Complement selected Bits

## PROGRAM CONTROL INSTRUCTIONS

Branch   -> skip  used for Direct Addressing Mode

Jump -> Same as Branch  but for Indirect Addressing Mode

Skip

Call

Return

Compare

Test

Subroutines and Function is same thing.

compare and test instructions do not change the program sequence directly. 

the test instruction performs the logical AND of two operands and updates certain status bits without retaining the result or changing the operands. 

The bits of the status register are modified according to the operations performed in the ALU.

## INTERRUPT

cause a break in normal execution of program.

1. External Interrupts  -> asynchronous
2. Internal Interrupts / Traps  -> Synchronus
3. Software Interrupts

External interrupts come from input-output (l/0) devices, from a timing device, from a circuit monitoring the power supply, or from any other external source.

Internal interrupts arise from illegal or erroneous use of an instruction or data.

If the program is rerun, the internal interrupts will appear in the same place each time. External interrupts depend on external conditions that are independent of the program being executed at the time.

A software interrupt is initiated by executing an instruction. A  software interrupt is a special call instruction that behaves like an interrupt rather than a subroutine call.

## PIPELINING

Parallel Processing:- Arrange the hardware such that more than one operation can be performed at the same time. 

Already Existing Harware ko hum is trike se arrange kr rhe hain taki uski overall performance increase ho jae.

### FLYNN's CLASSIFICATION

1. SISD
2. SIMD
3. MISD
4. MIMD

PIPELINE HAZARDS :

1. Structural Hazards
2. Data Hazards
3. Control Hazards


Virtual memory -> Static RAM

n instruction pipeline can be implemented by means of FIFO Buffer



