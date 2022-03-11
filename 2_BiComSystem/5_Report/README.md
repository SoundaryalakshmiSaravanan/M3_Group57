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




# 1. INTRODUCTION
## 1.1 BICOM SYSTEM
BiCom System is designed to remotely know the statues of your automobiles, BiCom System operates by broadcasting radio waves on a particular frequency. In this system both the fob and Body control unit can communicate with each other.
## 1.2 DEFINING OUR SYSTEM
The System consist of a transmitter and a receiver. The receiver consist of key fob and the receier consist of Body Control Unit. Keyless remotes contain a short-range radio transmitter. When the button in the fob key is pushed, it sends a coded signal by radio waves to a receiver unit in the car, which locks or unlocks the door. The system workings on the principle of **bidirectional** means of communication where only the fob can communicate with the car. The system designed is capable of controlling the window status, alarm status, car battery information and door ststus and displaying it on the car key fob.
## 1.3 FEATURES OF THE SYSTEM
1. It shall display the status of Window on one user click
2. It shall display the status of Alarm on two user clicks
3. It shall display the information of Battery on three clicks
4. it shall display the status of door of the car on four clicks

## 1.4 SWOT ANALYSIS
![Screenshot (44)](https://user-images.githubusercontent.com/98818008/157868076-4c4b3271-402e-4644-bdd3-e2171179d1a2.png)


## 1.5 5Ws and 1H
### Who
The people who want the smart system equipped vehicle

### What
This system which can send the data of car or a vehicle through wireless medium. the information is being displayed on LED display

### When 
Whenever the vehicle owner wants to operate the some features of car through remotively

### Where
In automotive industry to enhance the quality and time saving processes of the vehicles. It can be further deployed to upcoming smart applications like smart homes etc,.
 
### Why
Remote system can replace traditional systems to make the process easy, simple and time saving

### How
By deploying the particular system into automotives , the key features can be implemented

# 2. REQUIREMENTS
## 2.1 HIGH LEVEL REQUIREMENTS

**HLR ID** | **DESCRIPTION**
-|-
HLR01 | It shall display the status of window
HLR02 | It shall display the status of alarm
HLR03 | It shall display the information of battery
HLR04 | It shall display the status of door

## 2.2 LOW LEVEL REQUIREMENTS

**LLR ID** | **DESCRIPTION** | **HLR ID** |  
-|-|-
LLR1.1 |  As per assigned button press all LED's shall be on | HLR01
LLR1.2 |  As per assigned button press all LED's shall be off | HLR01
LLR2.1 |  As per assigned button press LED's Green,Orange,Red,Blue shall be on at a time | HLR02
LLR2.2 |  As per assigned button press LED's Green,Orange,Red,Blue shall be off at a time | HLR02
LLR3.1 |  As per assigned button press LED's shall be on in clockwise Manner | HLR03
LLR3.2 |  As per assigned button press LED's shall be on in antiClockwise Manner|HLR03
LLR4.1 |  As per assigned button press LED's shall glow in a manner of Green->Orange->Red->Blue| HLR04
LLR4.2 |  As per assigned button press LED's shall glow in a manner of Green->Blue->Red->Orange | HLR04

# 3. ARCHITECTURE
## 3.1 BEHAVIORAL DIAGRAM
###  BLOCK DIAGRAM
![blockdia (1) drawio (1)](https://user-images.githubusercontent.com/98818008/157857040-aa8f6e5a-17ab-45b2-b554-296dc095c875.png)


### LOW LEVEL DIAGRAM
![Untitled Diagram drawio](https://user-images.githubusercontent.com/98818008/157856589-188e1bdc-13b4-4e67-ac23-7e2084d8fc3d.png)

## STRUCTURAL DIAGRAM
### HIGH LEVEL USER CASE DIAGRAM
![usercase drawio (1)](https://user-images.githubusercontent.com/98818008/157857884-ff874322-2592-43d7-b31c-769283f3a52c.png)

### LOW LEVEL USER CASE DIAGRAM
![lowlevelbehav drawio (1) drawio](https://user-images.githubusercontent.com/98818008/157859840-33d38736-b612-4112-bb71-abe4c8b80c7e.png)

# 4. TEST PLAN AND OUTPUT

##  4.1 HIGH LEVEL TEST PLAN

**Test ID** | **Expected Output** |**Actual output**|**Status**
-|-|-|-
T01 |  display the status of window| Displayed window status| Pass
T02 |  display the status of alarm |Displayed alarm status| Pass
T03 |  display the information of battery | Displayed information of battery| Pass
T04 |  display the status of door | Displayed status of door| Pass

<br>

## 4.2 LOW LEVEL TEST PLAN

**Test ID** | **Expected Output** |Actual output|**Status**
-|-|-|-
T01 |  All LED's shall be on | All LED's ON | Pass
T02 |  All LED's shall be off | All Led's OFF | Pass
T03 |  LED's shall be on in clockwise Manner| LED's ON clockwise | Pass
T04 |  LED's shall be on in antiClockwise Manner|LED's ON Anticlock wise | Pass



