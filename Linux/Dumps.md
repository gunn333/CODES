# DUMPS

## Bootloader

```Purpose:```
To load the Linux kernel into memory and start the operating system.

## Filesystem

```Ext4:```
used in Linux installations due to its robustness and journaling capabilities.

```Root partition:```
To serve as the top-level directory of the filesystem hierarchy.

```XFS:```
known for its performance and scalability, often used in enterprise environments.

## Swap Partition

```Purpose:```
provides additional virtual memory when the RAM is full.

## Linux Distribution

```Ubuntu:```
known for its focus on simplicity and ease of use,cpmes with apt package manager making it a popular choice for beginners.

```dpkg:```
package manager is commonly used in Debian-based Linux distributions, such as Ubuntu

## Linux Installation

```Partitioning Step purpose:```
To allocate disk space and create partitions for the operating system and user data.

## ps command

Process display

```all the processes for users:```
ps -e

```Display full command line and additional details:```
ps -f

```Display process tree:```
ps -tree

```List processes for all users in detailed format:```
ps -aux

```sort ps output by CPU usage in descending order:```
ps -r

## bg command

```Move a process to the background in a terminal:```
bg[process ID]

```purpose:```
List background processes

```Suspend foreground process in terminal:```
Press Ctrl + Z

## Jobs command

```Display in a terminal:```
A list of background jobs

## fg command

```bring background process to the foreground:```
fg[process ID]

## ifconfig

```Display network interface information:```
ifconfig --all

```Purpose of ifconfig eth() up command:```
Enable network interface eth()

```Disable a network interface using ifconfig:```
ifconfig eth() down

```Assign IP address to a network interface:```
ifconfig eth() address ip_address

```In ifconfig , -s option display:```
Summary information for all interfaces

## ping command

Send ICMP packets to a destination host

```Specify number of ping packets to send witb the ping:```
ping -c count

```SPecify interval between ping packets:```
ping -i

```ping a host continuously until manually stopped:```
ping -t host

```In ping result , what does TTL expired in transmit message indicate:```
The ping packet has exceeded its time-to-live value.

## traceroute

```perform traceroute to destination host:```
traceroute host

```information traceroute command provide:```
Number of hops to the destination
</br>
Round-trip time for each hop
</br>
IP address of each intermediate router

```specify max. number of hops in a traceroute:```
traceroute -m max_hops host

```traceroute output , * inidicate:```
A network congestion or timeout occurred

```perform traceroute using IPv6:```
traceroute -6 host

## Cut command

```specify delimiter for cut command:```
-d

```-f in cut command:```
Select the fields to cut

```cut characters 2-5 from each line of a file:```
cut -c 2-5 file.txt

```Specify multiple delimiters:```
cut -d ,;:

```--complement option:```
Select the complement of the specified fields

## awk command

```print 2nd field of a space-separated file:```
awk'{print $2}' file.txt

```NF variable in awk:```
Number of fields

```Specify a custom field seperator:```
awk -FS

```purpose of BEGIN and END blocks in awk:```
Execute code before processing any input

```calculate the sum of values in the third column:```
awk'{sum += $3} END {print sum}' file.txt

## grep command

```perform case-insensitive search:```
grep -i 'pattern' file.txt

```-n option in grep command:```
Display line numbers of matching lines

```search for lines not containing a specific pattern:```
grep -v 'pattern' file.txt

```-o option in grep:```
Show only the matching part of the lines

## sort command

```Sort a file in reverse order:```
sort -r file.txt

```-t in sort command:```
Define the field separator

## uniq command

```Remove consecutive duplicate lines from a sorted file:```
uniq -u file.txt

```-c option in uniq command:```
Count the number of occurrences of each line

```display only the repeated lines from a sorted file:```
uniq -d file.txt

## wc command

```-I option:```
Count lines

```count the number of characters in a file:```
wc -m file.txt

```-w option in wc command:```
Count words

```count the number of bytes in a file:```
wc -c file.txt

```-q option in wc:```
Quiet mode, suppress output

## diff command

File Comparison.

```compare 2 files:```
diff file1.txt file2.txt

```-i option in diff:```
Ignore changes in case

## cmp command

```compare 2 files:```
cmp -s file1.txt file2.txt

```-b option in cmp:```
Compare files as binary

```-s option in cmp:```
Suppress output, only return exit status

## tar

Primarily used for: File archiving and extraction

```Create tar archive of a directory:```
tar -cf archive.tar directory/

c-> create archive (NEW)
f-> file

```-z option in tar:```
Create a compressed archive

```extract the contents of a tar.gz file:```
tar -xf archive.tar.gz

-x-> extract

```-v option in tar:```
Enable verbose mode.

## gzip command

```Compress a file:```
gzip file.txt

## mount command

```purpose:```
Mount a filesystem

```Mount command with -o remount option:```
Remounts a read-only filesystem

```umount:```
Unmount a filesystem

```umount -a:```
Unmount all filesystems.

## Touch command

Create an empty file

```Copy files/directories:```
cp

```In cp, -r:```
Recursive copy

```In cp. -u:```
Update only newer files

```In cp, -i:```
Interactive mode

## mkdir command

Create a new directory.

```Remove directory:```
rmdir

## df command

display Disk free space.

```du: Disk Usage```

```du -h: Human-readable sizes```

```fdisk:```
Disk partitioning

```fdisk -l :```
List all partitions

## Linux Kernel

```Primary function:```
Process and Memory Management

```/etc/fstab file:```
Configures file system mount points

```Linux Head:```
Display the first lines of a file

```/proc/cpuinfo:```
information about the system's architecture

```/proc directory contain:```
Process information.

## Inodes in File system

Maintain file ownership and permissions.

Inode number of a file is associated with : File metadata

## swap command

```Create a swap partition:```
mkswap

## dd command

Data duplication and conversion

## Find command

File Search

## stat command

Display file system information.

## zcat command

display the contents of a compressed file.

## chattr command

Change file attributes

## sync command

Synchronize file content

## nice command

Adjust process priority

## ulimit

Limit process resources.

## sar command

display System activity report.

## Ispci

List all installed PCI devices.

## blkid

Display block device information.

## xfs_info

Display file system information

## fuser

Identify processes using a file.

## quota command display

Disk quota information

## parted command

Disk partitioning

## strace

Monitor System Calls.

## Default Shell

Bash

```In Bash, if syntax:```
if[condition]; then

```Check If 2 values are equal in bash:```
if[$a = $b]

```In Bash case statement, purpose of esac keyword:```
End the case block.

```Basic Syntax for loop:```
for i in {1..5}; do

```Increment a variable in Bash do-while loop:```
((i++))

## Shell script

```make shell script executable:```
chmod +x

```echo command in shell script:```
Print text to the screen

```$# represent:```
Total number of arguments.

## Wildcard Character

```Represents any seq. of characters in a filename:```
*

## Apache

```In Apache, default config. file named:```
httpd.conf

```Directory used to specify document root for a website:```
DocumentRoot

```Enable Virtual host:```
a2ensite command

```ProxyPass directive:```
Configure reverse proxy

## Nginx

Primary config. file called nginx.conf

```Test Nginx config. for syntax error:```
nginx -t

## PostgreSQL

list all databases: \l

## #!/bin/bash shebang

Define the shell used to execute the script

