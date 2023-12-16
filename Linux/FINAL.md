# LINUX END-TERM NOTES

## Linux Distributions or Distros

>They are complete packages of Linux operating system.
>
>Each distro is tailored to specific use cases
>
>LIKE
>>Ubuntu -> user-friendly
>>
>>Debian -> stability & large package repo.
>>
>>Centos -> Enterprise use
>>
>>Fedora -> Latest software
>>
>>Arch Linux -> Minimal for experienced users
>>
>>RHEL -> Enterprise grade with paid support

## Linux Features

* Open source
* Stability
* Security
* Multitasking
* Flexibility
* Excellent networking

## Difference b/w Linux & Unix

| Linux | Unix |
| ----- | ---- |
| available to everyone | only used by copyrighters |
| Free | Varying costs |
| just a kernal | complete package |
|Example:- Ubuntu,Mint,Redhat,Fedora etc. | Example:- IBM AIX, HP-UX and Solaris. |
|GUI:- Gnome & KDE | GUI:- Mostly Gnome |
|Interface:- BASH | Bourne Shell |
|Highly Secure | Also Highly Secure |

## Linux Architecture

* Monolithic Kernel

```\
Kernel contains most of the OS's core functionalities within a single, unified structure.
```

## Difference b/w Windows & Linux

| Windows | Linux |
|---------| ----- |
|Kernel type:- Hybrid(Monolythic & Microkernel) | Monolithic |
| Licensing :- Proprietary(Requires purchase of licenses for most versions) | Open -Source|
|GUI:- Integrated GUI | Seperates GUI from core OS offering various desktop environments eg. Gnome,KDE |
|Relies on executable installers | Use package mangers for installation |
|Predominatly uses NTFs | Supports multiple file systems |
|Uses ACLs and user-based permission model | uses group permissions model|
|Case-insensitive | Case-sensitive|
|Less efficient | More efficient |
|\ is used for seperating directories| / is used|
|Less Secure | More Secure|
|4 types of user accounts: Administrator,Standard,Child,Guest | 3 types of User account: Regular,Root,Service account|
|Administrator has all admin priviliges | Root user is the super user & has all admin priviliges|
|Not Open-Source | Open-Source|

## Linux Structure & Installation

* FILESYSTEM HIERARCHY

> Linux directories include 
>>/bin : holds essential binaries
>>
>>/etc : contains configuration files
>>
>> /home : hosts user directories
>>
>>/var : stores variables data

* BOOT PROCESS

>BIOS / UEFI loads bootloader (Eg. GRUB)

>Bootloader loads
>>Linux Kernel
>>
>>intializing the system and launcing services

* INSTALLATION

>Boot from Installation media
>
>Select partitions, file systems, software , and create user accounts

* PACKAGE MANAGEMENT

>Use package managers to manage software

* CONFIGURATION

> Setup user accounts, network and system - specific setting post installation

* UPDATES

>Regularly use package manager to apply securing potches and software updates

## Linux Boot Process

Power ON &mdash;> BIOS/UEFI {POST} &mdash;> Boot Device &mdash;> Boot Loader {GRUB} &mdash;> Kernel

>Kernel
>>Run Levels
>>
>>Systemd

## BIOS & UEFI

```BIOS = Basic Input/Output System```

```UEFI = Unified Extensible Firmware Interface```

```POST = Power On Self Test```

Boot Process begins with BIOS or UEFI. They are responsible for initializing the hardware and loading the boot loader.

BIOS usually contains all CODES to gain access to the main machine devices. But, After Booting is over Device drivers take over.

>BIOS uses MASTER BOOT RECORD (MBR)
>>to store the metadata on and about the drive

UEFI uses GUID Partition table (GPT)

Next, BIOS or UEFI runs POST. POST ensures proper operation of the system.

After POST is passed by system , we go to boot loader.

## Boot Loader

```GRUB = GRand Unified Bootloader```

Mainly GRUB

GRUB is responsible for presenting the user with a boot menu,which allows them to select which operating system to boot using which device

BIOS has boot loader located in the first sector of the boot boot device(MBR) takes up 512 bytes

UEFI stores all booting in an .efi file on the EFI system partition.

Boot Loader is a small program that loads the OS.

>Main Job of Boot Loader
>>perform 3 actions with kernel
>>>Locate the disk
>>>
>>>insert into memory
>>>
>>>execute with the supplied options

Kernel -> CORE OF LINUX

Kernel is responsible for managing the hardware, running processes and providing system services. After going through BIOS or UEFI , POST and Using a bootloader to initiate the Kernel the OS now controls the access to computer resources.

## COMMANDS

* INIT

```First Process that is started by Kernel```

```responsible for initializing the system and starting up other system processes.```

## Systemd

system and service manager for Linux systems.
</br>
responsible for managing the startup & shutdown of system services.

>Performs
>>probes all remaining hardware
>>
>>mount filesystems
>>
>>initiate and terminate services
>>
>>manage essential system processes like user login
>>
>>run a desktop environment

## Run Levels

system config. that specifies which services should be running at a perticular time.

Run Level is typically set during boot processes.

| target | Run Level|What it does|
|--------|---------|-------------|
| poweroff.target | 0| turn off (Shut down) computer|
|rescue.target|1| initiate rescue shell process|
|multiuser.target|3| configure the system as non-graphical multi-user environment|
|graphical.target|5| establish a graphic multiuser interface with n/w services|
|reboot.target|6| restart the Level|

>LOGIN & DESKTOP ENVIRONMENT
>>Login: Obv. login
>>
>>Desktop: Provides GUI for user to interact.

## Difference b/w Shell and Kernel

|Shell|Kernel|
|-----|------|
|User program|System Program|
|FUNCTION: provides user with interface to OS|Manages hardware and provides services to other programs|
|LEVEL OF HARDWARE INTERACTION: Low|High|
|Eg. Bash,Zsh,Csh|Linux Kernel,XNU,Free BSD|

## Partioning

Process of dividing storage device into 1 or more logical areas, often known as partiotion.

Each Partition can have different file system.

>Advantages
>>Improved perfomance
>>
>>Security
>>
>>Backup

## Dual Booting

Process of installing 2 or more OS on same computer.

## Virtual Memory

>is a memory management capability of OS
>>
>>that uses hardware and software to allow computer to compensate the physical memory shortages by temporarily transferring data from RAM to disk storage.
>>
>>This enables computer to run 2 programs larger that its physical memory capacity
>>by transferring data to disk storage
>>
>>Crucial for running multiple applications simultaneously.

## Swap Space

partion of a hard-disk or SSD used as virtual memory by OS

when your computer's RAM is full, it uses the swap space as a backup, storing less crucial information there until it's needed again.

>Commands
>>swapon -s &mdash;> check swap space
>>
>>dd &mdash;> create empty file
>>
>>mkswap &mdash;> to setup swap file
>>
>>swapon &mdash;> enable swap

```Creating a swap space```
>use dd command
>
>set appropriate permissions with chmod 600
>
>use mkswap
>>to setup file as swap space
>>
>>eg. sudo mkswap

```Activating Swap Space```
>sudo swapon /swapfile
>
> swapon -s : verify the swap space

## Disk Partitioning

includes dividing physical disk into multiple local storage units called partitions to organize data and optimize disk storage.

>Commands
>>fdisk -l &mdash;> for list partitions
>>
>>fdisk &mdash;> to interactively create, delete and manage partitions.
>>
>>df -h &mdash;> display info. about disk space usage

## File System Structure

tree like structure

Root directory -> "/"

* Root Directory

>Top level Directory and starting point for system hierarchy

* /bin

>holds essential binaries required for system recovery and maintainance

* /sbin(System / Super User Binaries)

>holds commands which are required for changing system properties

* /boot

>contains files necessary for boot process

* /dev(Device)

>holds device files representing physical & virtual devices on the system

* /etc

>holds system-wide config. files and shell scripts used to boot and initialize system settings.
>
>Also contains startup and shutdown shell scripts used to start/stop individual programs.

* /home

>Home directories for individual users are located here

* /lib

>contains essential shared libraries required by system binaries and kernel modules.

* /media

>When you connect a removable media like USB , a directory is automatically created under /media directory for them.

* /mnt(mount)

>directory used as temporary mount point for file systems.

* /opt(Optional)

>Typically used for installation of 3rd party software and operational packages

* /proc(Process)

>Virtual file systems providing info. about processes and system resources.

* /root

>Home directory for root user

* /run

>temporary file system that holds temporary files created by program during boot process & runtime.

* /srv(Service)

>Contains data directories for services provided by system.

* /sys(System)

>virtual file system providing info. about kernel parameters, devices and interfaces.

* /tmp(Temporary)

>directory for temporary files created by system and user processes. it is usually cleared on system reboot

* /usr(Unix System Resources)

>contains user utilities and applications including subdirectories for binaries, libraries and documentation

* /var

>contains variable data such as log files, spool directories and temporary files that may change during system runtime

* /snap

>directory in which by default where all files and folders from installed snap packages appear on system.

## Types of Files in Linux

In Linux everything is a file

* Normal/Ordinary Files

>contain data. can either be text files or binary files

* Directory files

> files that represent directories. Directories are to Linux is what Folders are to Windows.

* Device files

>every device is represented by file. By using this file we can communicate with that device.

## Navigation Commands

* cd [Change Directory]

```Basic Syntax: cd [Directory or path name]```
> change the current directory
>
>. &mdash;> represents Current Directory
>
>.. &mdash;> represents Parent Directory
>
>cd/path/to/directory &mdash;> change to a specific directory
>
>cd / &mdash;> Change to root directory
>
>cd . &mdash;> has no effect for directories with spaces
>cd - &mdash;> Change to previous directory

* pwd [Print working Directory]

```Basic Syntax: pwd [option]```

## Absolute and Relative paths

Absolute: Starts with root directory

Relative: Relative to Current Directory

## Using Environment Variables

cd $Home &mdash;> to change current working directory to user's home directory

cd &mdash;> is a shell-built-in command not a seperate executable one
