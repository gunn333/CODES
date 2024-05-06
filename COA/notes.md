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

ADD X 
<br>
operation :   AC  <- AC + M[X]
<br>
where M is the memory word located at address X

> General Register Organization

ADD R1,R2,R3
<br>
operation: R1 <- R2 + R3

In Stack Organization , PUSH and POP doesn't require address field



