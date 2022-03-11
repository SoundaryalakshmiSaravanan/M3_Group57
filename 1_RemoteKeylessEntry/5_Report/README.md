# Table of content

 --> About the RKE System 
 1) Abstract
 2) Features
 3) SWOT Analysis
 4) 5W's and 1H
 <br>
 
--> Requirements 

 1) High level requirements   
 2) Low level requirements
<br>

--> Architecture 
1) Behavioural Diagrams (HLR & LLR)
2) Structural Diagrams  (HLR & LLR)
<br>

--> Test Plan/Out put
1) High level test cases
2) Low level test cases
<br>

## About
### Abstract
Remote keyless entry (RKE) is an electronic access system that can be controlled from a distance. RKEs, which are typically used to remotely lock or unlock doors, require the end user to initiate an action that will cause a physical or software key fob to transmit a radio signal to a receiver that controls an electronic lock.Typically, the action is to press a button on a physical fob. Keyless remotes contain a short-range radio transmitter, and must be within a certain range, usually 5–20 meters, of the car to work. When a button is pushed, it sends a coded signal by radio waves to a receiver unit in the car, which locks or unlocks the door. Remote keyless entry is commonly used to protect vehicles from theft
#### Defining System
The System consist of a transmitter and a receiver. The receiver consist of key fob and the receier consist of Body Control Unit. Keyless remotes contain a short-range radio transmitter. When the button in the fob key is pushed, it sends a coded signal by radio waves to a receiver unit in the car, which locks or unlocks the door. The system workings on the principle of unidirectional means of communication where only the fob can communicate with the car. The system designed is capable of lock or unlock the car door, activate or deactivate the alarm and approach light.

### Features
1. System shall automatically lock the car door whem the button is pressed once.
2. System shall automatically unlock the car door when the button is pressed twice.
3. System shall activate or deactivate the alarm when the button is pressed three times.
4. System shall approach light when the button is pressed four times.

### SWOT Analysis
![image](https://user-images.githubusercontent.com/98815258/157868520-2a0d6e08-15de-4839-9425-5ccda9adcacc.png)

### 4W's and 1H
#### WHAT
Remote keyless entry (RKE) is an electronic access system that can be controlled from a distance. RKEs, which are typically used to remotely lock or unlock doors

#### WHERE
Remote keyless entry (RKE) can be used in any automobiles like cars, Zeeps, buses etc,. this can be extented to smart homes as well. we can control it froim certain range.

#### WHEN
Remote keyless entry (RKE) can be implemented when the there is need to safeguard our vehicle and when we want alternative for existed key systems to reduce complexity and time

#### WHY
Remote keyless entry (RKE) are implemented to prevent thieft of vehicles and to save time, to reduce complexity of traditional keying systems

#### HOW
Implementing the Remote keyless entry (RKE) system to unlock/lock the functioning part remotevely.

## Requirements
###  HIGH LEVEL REQUIREMENTS

|**HLR ID**| **DESCRIPTION**
-|-
HLR1| System shall have transmitter section |
HLR2| System shall have receiver section |
HLR3| System shall **lock** the car door automatically |
HLR4|  System shall **unlock** the car door automatically |
HLR5| System shall **activate/ deactivate** alarm |
HLR6| System shall have **approach light** |

###   LOW LEVEL REQUIREMENTS
|**LLR ID**| **HLR ID**| **DESCRIPTION** |
|-|-|-
LLR1| HLR1| System shall have **RKE fob** as transmitter |
LLR2| HLR2| System shall have **Body Control ECU** as receiver |
LLR3|HLR3| System shall have all **LEDs ON** at same time indicating **lock** |
LLR4| HLR4| System shall have all **LEDs OFF** at same time indicating **unlock**
LLR5|HLR5| System shall have all LEDs ON in **clockwise** manner at same time indicating **alarm activation/deactivation** |
LLR6|HLR6| System shall have all LEDs ON in **anticlockwise** manner at same time indicating **light approach** |

## Architecture
