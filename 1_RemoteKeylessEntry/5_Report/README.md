# TABLE OF CONTENTS
## 1. Intoduction
   1.1 Abstract
   
   1.2 Defining our system
   
   1.3 Features of our system
   
   1.4 SWOT Analysis
   
   1.5 4 W's & 1H
   
## 2. Requirements
   2.1 High Level Requirement
   
   2.2 Low Level Requirement
   
## 3. Architecture
   3.1 High Level Diagram
   
   3.2 Low Level Diagram
## 4. Test Plan And Output
   4.1 High Level Test Plan
   
   4.2 Low Level Test Plan




# REMOTE KEYLESS ENTRY (RKE)
## 1.     INTRODUCTION
## 1.1   ABSTRACT
Remote keyless entry (RKE) is an electronic access system that can be controlled from a distance. RKEs, which are typically used to remotely lock or unlock doors, require the end user to initiate an action that will cause a physical or software key fob to transmit a radio signal to a receiver that controls an electronic lock.Typically, the action is to press a button on a physical fob. Keyless remotes contain a short-range radio transmitter, and must be within a certain range, usually 5–20 meters, of the car to work. When a button is pushed, it sends a coded signal by radio waves to a receiver unit in the car, which locks or unlocks the door. Remote keyless entry is commonly used to protect vehicles from theft

## 1.2   DEFINING OUR SYSTEM
The System consist of a transmitter and a receiver. The receiver consist of **key fob**  and the receier consist of **Body Control Unit**. Keyless remotes contain a short-range radio transmitter. When the button in the fob key is pushed, it sends a coded signal by radio waves to a receiver unit in the car, which locks or unlocks the door. The system workings on the principle of unidirectional means of communication where only the fob can communicate with the car. The system designed is capable of lock or unlock the car door, activate or deactivate the alarm and approach light. 

## 1.3   FEATURES OF THE SYSTEM
1. System shall automatically lock the car door whem the button is pressed **once**.

2. System shall automatically unlock the car door when the button is pressed **twice**.

3. System shall activate or deactivate the alarm when the button is pressed **three times**.

4. System shall approach light when the button is pressed **four times**.

## 1.4   SWOT ANALYSIS
![Untitled Diagram (5)](https://user-images.githubusercontent.com/98818008/157711212-12ce8d24-5cef-4fd4-bda1-881c902903c7.jpg)

## 1.5 4 W's & 1 H
### WHAT
Remote keyless entry (RKE) is an electronic access system that can be controlled from a distance. RKEs, which are typically used to remotely lock or unlock doors

### WHERE
Remote keyless entry (RKE) can be used in any automobiles like cars, Zeeps, buses etc,. this can be extented to smart homes as well. we can control it froim certain range.

### WHEN
Remote keyless entry (RKE) can be implemented when the there is need to safeguard our vehicle and when we want alternative for existed key systems to reduce complexity and time

### WHY
Remote keyless entry (RKE) are implemented to prevent thieft of vehicles and to save time, to reduce complexity of traditional keying systems

### HOW
Implementing the Remote keyless entry (RKE) system to unlock/lock the functioning part remotevely.

## 2.   REQUIREMENTS

### 2.1   HIGH LEVEL REQUIREMENT

|**HLR ID**| **DESCRIPTION**
-|-
HLR1| System shall have transmitter section |
HLR2| System shall have receiver section |
HLR3| System shall **lock** the car door automatically |
HLR4|  System shall **unlock** the car door automatically |
HLR5| System shall **activate/ deactivate** alarm |
HLR6| System shall have **approach light** |

### 2.2   LOW LEVEL REQUIREMENT
|**LLR ID**| **HLR ID**| **DESCRIPTION** |
|-|-|-
LLR1| HLR1| System shall have **RKE fob** as transmitter |
LLR2| HLR2| System shall have **Body Control ECU** as receiver
LLR3|HLR3| System shall have all **LEDs ON** at same time indicating **lock** |
LLR4| HLR4| System shall have all **LEDs OFF** at same time indicating **unlock**
LLR5|HLR5| System shall have all LEDs ON in **clockwise** manner at same time indicating **alarm activation/deactivation** |
LLR6|HLR6| System shall have all LEDs ON in **anticlockwise** manner at same time indicating **light approach**
# 3. ARCHITECTURE
## 3.1 BEHAVIORAL DIAGRAM
## HIGH LEVEL DIAGRAM
#### BLOCK DIAGRAM
![blockdia (1) drawio](https://user-images.githubusercontent.com/98818008/157805694-ef33daaf-6844-4869-a2c6-a1d666d452fa.png)



## LOW LEVEL DIAGRAM
![beh high drawio (1)](https://user-images.githubusercontent.com/98818008/157800003-1ca0be9a-f1b7-460b-8d04-6bda3cc4a0d0.png)

## 3.2 STRUCTURAL DIAGRAM
## HIGH LEVEL USER CASE DIAGRAM
![usercase drawio](https://user-images.githubusercontent.com/98818008/157808384-845159c8-b61e-4908-9326-91943e25e5e4.png)



## LOW LEVEL DIAGRAM
![lowlevelbehav drawio (1)](https://user-images.githubusercontent.com/98818008/157803519-95f9873d-291c-41cc-9e81-245d2146d292.png)

# 4. TEST PLAN AND OUTPUT
## 4.1 HIGH LEVEL TEST PLAN
**TEST ID**| **DESCRIPTION**| **EXPECTED OUTPUT**| **ACTUAL OUTPUT**| **PASS/FAIL**
|-|-|-|-|-|
|T_01| Lock the car door when the button is pressed once| Door locks|Door locks| Pass 
T_02| Unlock the car door when the button is pressed twice| Door unlocks| Door unlocks|Pass
T_03| Alarm activates/deactivates when the button is pressed thrice| Alarm activates/deactivates|Alarm activates/deactivates|Pass
T_04| Approach light when button is pressed four times| Approach light| Approach light|Pass

## 4.2 LOW LEVEL TEST PLAN
**TEST ID**| **DESCRIPTION**| **EXPECTED OUTPUT**| **ACTUAL OUTPUT**| **PASS/FAIL**
|-|-|-|-|-|
T_01| Door lock status| All LED's ON|All LED's ON|Pass
T_02| Door Unlock status| All LED's OFF|All LED's OFF| Pass
T_03| Door alarm status| All LED's ON in clocwise direction|All LED's ON in clocwise direction| Pass
T_04| Approach light status| All LED's ON in anticlockwise direction|All LED's ON in anticlockwise direction| Pass

